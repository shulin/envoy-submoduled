#!/bin/bash

./envoy/tools/gen_compilation_database.py "//:envoy_submoduled" --include_external "$@"