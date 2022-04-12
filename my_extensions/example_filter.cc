#include <string>

#include "envoy/server/filter_config.h"
#include "my_extensions/example_filter.h"

using namespace Envoy::Http;

namespace MyExtensions {

ExampleFilter::ExampleFilter() {}

ExampleFilter::~ExampleFilter() {}

FilterHeadersStatus ExampleFilter::decodeHeaders(RequestHeaderMap& headers, bool) {
  headers.addCopy(LowerCaseString("hello_world"), "reached_decode_headers");

  return FilterHeadersStatus::Continue;
}

FilterHeadersStatus ExampleFilter::encodeHeaders(ResponseHeaderMap& headers, bool) {
  headers.addCopy(LowerCaseString("hello_world"), "reached_encode_headers");

  return FilterHeadersStatus::Continue;
}

}
