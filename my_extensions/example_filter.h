#pragma once

#include <string>

#include "source/extensions/filters/http/common/pass_through_filter.h"

using namespace Envoy::Http;

namespace MyExtensions {

class ExampleFilter : public PassThroughFilter {
public:
  ExampleFilter();
  ~ExampleFilter();

  void onDestroy() override;

  FilterHeadersStatus decodeHeaders(RequestHeaderMap&, bool) override;
  FilterHeadersStatus encodeHeaders(ResponseHeaderMap&, bool) override;
};

} 