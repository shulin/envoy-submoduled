#pragma once

#include <string>

#include "my_extensions/example_filter.pb.h"
#include "my_extensions/example_filter.pb.validate.h"

#include "source/extensions/filters/http/common/factory_base.h"

namespace MyExtensions {

class ExampleFilterConfig : public Envoy::Extensions::HttpFilters::Common::FactoryBase<example::ExampleFilterCfg> {

public:
    ExampleFilterConfig() : FactoryBase("envoy_submoduled.my_extensions.example") {}

private:
    Envoy::Http::FilterFactoryCb
    createFilterFactoryFromProtoTyped(const example::ExampleFilterCfg& config, const std::string& stats, 
                                      Envoy::Server::Configuration::FactoryContext& context) override;

};

}