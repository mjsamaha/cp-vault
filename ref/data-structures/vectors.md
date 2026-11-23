# Vectors

A `std::vector` is a dynamic array container that can resize itself automatically when elemnets are added or removed.

Part of the STL (Standard Template Library) and is defined with the `<vector>` header.

## Properties

- Dynamic sizing (grow and shrink as needed)
- Contiguous memory (elements are stores in contiguous memory, like arrays)
- Random access: access to amy element via `[]` or `.at()`
- Automatic memory management (handles allocation/deallocation)
Type-safe: template-based, so type checking at compile time