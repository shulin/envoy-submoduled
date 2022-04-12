# envoy-submoduled
Example of how to setup a development environment when the envoy project is a submodule

# Notes
The envoy project's instructions to set up vscode are quite straightforward. You can essentially open visual studio code, run a task, and be able to whiz around the envoy codebase. In this repo, I've also set up .vscode/ and tools/ directories to demonstrate how you can also reuse existing scripts to set up vscode with devcontainer configurations, tasks and .bazelrc[0] when envoy is referenced as a submodule.

I've also included an example filter that adds a header on encoding and decoding callbacks, since using a submodule is usually done to write extensions of envoy in one's own repo.

```
bazel build //:envoy_submoduled
```

[0] The .bazelrc file is a copy instead of a symbolic link or an import statement since in line 16, it references a script in the submodule (which in this version I've commented out). 

# Resources
* https://github.com/envoyproxy/envoy-filter-example 
* https://github.com/envoyproxy/envoy/blob/main/tools/vscode/README.md