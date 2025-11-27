# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository Overview

This is a LeetCode problem-solving repository (刷题记录 - practice record) with solutions primarily in C++ and some in Go. The repository contains 100+ LeetCode solutions, C++ tutorial code for learning smart pointers, and Faiss library examples.

## Project Structure

- `cpp/`: LeetCode solutions in C++ (114 files)
  - Solution files named by problem number: `10.cc`, `100.cc`, `lc3.cpp`, etc.
  - Multiple versions of solutions indicated by suffixes: `16.cc`, `16v1.cc`
  - Shared data structures defined in `cpp/node.h` and `cpp/node.cc`
  - Common structures: `ListNode` (linked list) and `TreeNode` (binary tree)
  - Helper functions: `buildListNode()`, `showList()` for linked list operations

- `lc_go/`: LeetCode solutions in Go
  - Package name: `lcgo`
  - Currently contains problem 4 (median of sorted arrays)

- `cpp_tutorial/`: C++ learning materials focused on smart pointers
  - `smart_ptr.cc`: unique_ptr examples
  - `smart_shared_ptr.cc`: shared_ptr examples
  - `smart_weak_ptr.cc`: weak_ptr examples

- `faiss/`: Examples using the Faiss similarity search library
  - Demonstrates vector indexing and search operations

## Build System

The project uses **Bazel** for building C++ code with Bzlmod for dependency management.

### Key Configuration Files

- `MODULE.bazel`: Defines Bazel dependencies (rules_cc v0.0.17)
- `.bazelrc`: Configures Homebrew paths for external dependencies on macOS
  - Sets `CPLUS_INCLUDE_PATH=/opt/homebrew/include`
  - Sets `LIBRARY_PATH=/opt/homebrew/lib`
- `cpp/BUILD`, `cpp_tutorial/BUILD`, `faiss/BUILD`: Define build targets

### Build Commands

Build a specific LeetCode solution:
```bash
bazel build //cpp:lc10
bazel build //cpp:lc21  # Solutions with deps on :list_node
```

Build C++ tutorial binaries:
```bash
bazel build //cpp_tutorial:smart_shared_ptr
```

Build Faiss examples:
```bash
bazel build //faiss:l1
```

Run a built binary:
```bash
bazel run //cpp:lc10
bazel run //cpp_tutorial:smart_shared_ptr
```

### Go Commands

The Go module is configured with Go 1.25.4:
```bash
go test ./lc_go/...
go run lc_go/4.go
```

## Code Conventions

### C++ Solutions

- Most solutions define a `Solution` class with the problem's main function
- Include necessary headers: `<iostream>`, `<vector>`, `<unordered_map>`, etc.
- Solutions that use linked lists or trees depend on `cpp/node.h`
- File naming: problem number with `.cc` or `.cpp` extension
- Alternative solutions append version suffix: `v1`, `v4`, etc.

### Adding New Solutions

When adding a new C++ LeetCode solution:

1. Create the solution file in `cpp/` (e.g., `cpp/123.cc`)
2. Add a `cc_binary` target to `cpp/BUILD`:
   ```python
   cc_binary(
       name = "lc123",
       srcs = ["123.cc"],
       deps = [":list_node"],  # if using ListNode/TreeNode
   )
   ```
3. If the solution needs custom data structures, add them to `cpp/node.h`

### Dependencies

- C++ solutions may depend on the `:list_node` library target for shared data structures
- Faiss examples require the Faiss library installed via Homebrew (`-lfaiss` linker flag)
- All C++ code uses C++17 standard
