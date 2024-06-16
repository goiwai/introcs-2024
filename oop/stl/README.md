# Usage

Version 8 or later of GCC is required to build some C++17-enabled programs. Since CentOS7 build-in GCC is version 4.8, we need to have extra work for installing the C++17 supported compiler.

To use the prebuilt version of GCC, run like `module load gcc/830` before `make`.

```shell
% make
# creates:
#   calc-tmpl-main.exe
#   particle-table.exe
#   smart-pointer-example.exe
#   dict-particle-mass-c++98.exe
#   dict-particle-mass-c++11.exe
#   dict-particle-mass-c++17.exe
```

See also: `Day-4.pdf` at <https://wiki.kek.jp/display/~iwai/Introduction+to+Computational+Science+2024>
