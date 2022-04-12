#include "envoy/registry/registry.h"
#include "envoy/server/filter_config.h"

#include "my_extensions/example_config.h"
#include "my_extensions/example_filter.h"

namespace MyExtensions {

Envoy::Http::FilterFactoryCb
ExampleFilterConfig::createFilterFactoryFromProtoTyped(const example::ExampleFilterCfg&, const std::string&,
                                                       Envoy::Server::Configuration::FactoryContext&) {
    return [](Envoy::Http::FilterChainFactoryCallbacks& callbacks) -> void {
        callbacks.addStreamFilter(std::make_shared<ExampleFilter>());
    };
 }

static Envoy::Registry::RegisterFactory<ExampleFilterConfig, Envoy::Server::Configuration::NamedHttpFilterConfigFactory>
    register_;

}
