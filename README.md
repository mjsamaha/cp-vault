# cp

My competitive programming workspace: solutions for Codeforces and AtCoder, a small personal reference library, and the editor setup I use to work on them.

Written in C++20. Edited in VS Code with the Neovim extension.

## Layout

```
cp/
├── codeforces/        # solutions, grouped in subfolders; each file runs on its own
├── atcoder/           # solutions, grouped by contest
├── ref/               # my own practice libraries
│   ├── algorithms/
│   ├── common-techniques/   # basic logic (min/max, etc.)
│   └── data-structures/     # common DS, their operations, and DS algorithms
├── .clangd
└── README.md
```

Every solution is a single self-contained `.cpp` file, so any file can be compiled and run without a build system.

## Toolchain

| Piece | Choice |
| --- | --- |
| OS | Windows (native) |
| Compiler | MSYS2 UCRT64 `g++` |
| Language server | `clangd` |
| Editor | VS Code + VSCode Neovim extension |
| Problem import / testing | CPH-NG + Competitive Companion |
| Format | `clang-format` |

Compile flags used for local runs:

```
g++ -std=c++20 -O2 -Wall -DLOCAL
```

`-DLOCAL` enables the debug helpers in the template (`dbg`, etc.). They compile out on judge submission.

## Workflow

1. Open a problem in the browser and click Competitive Companion.
2. CPH-NG creates the file and imports the sample tests.
3. Solve in Neovim mode inside VS Code.
4. Run the samples from CPH-NG, or run the file directly with `Space r r`.
5. Submit the single `.cpp` file.

## Keybindings

Leader is `Space`. Mappings live in `init.lua` under the `vim.g.vscode` block (`%LOCALAPPDATA%\nvim\init.lua`).

| Keys | Action |
| --- | --- |
| `Space r r` | Save, compile with g++ (`-std=c++20 -O2 -Wall -DLOCAL`), and run the current file in the integrated terminal |
| _add the rest of your mappings here_ | |

## Template

Minimal on purpose: fast `cin`/`cout`, small vector/pair read and print helpers, `chmin`/`chmax`, a `LOCAL`-guarded `dbg`, and an optional multi-test driver toggle in `main`. No file I/O, no heavy macros.

## Setup from scratch

1. Install MSYS2 and, in the UCRT64 shell, `gcc`, `gdb`, `ninja`, `clangd`, `clang-format`. Put `C:\msys64\ucrt64\bin` on `PATH`.
2. Install Neovim.
3. In VS Code, create a dedicated profile and install: VSCode Neovim, clangd, CPH-NG.
4. Install the Competitive Companion browser extension.
5. Copy `init.lua` to `%LOCALAPPDATA%\nvim\`.
6. Open this folder in its own VS Code window using that profile.

## Notes

- Solutions are not guaranteed optimal. Some are first accepted submissions.