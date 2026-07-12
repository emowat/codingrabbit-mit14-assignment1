Compile your program in the terminal:
```bash
g++ -g -o cipher cipher.cpp
```

> **Note on I/O:** Because this problem requires you to use C-style memory management (`fread`, `realloc`) for dynamic string allocation, the starter code intentionally uses C-style console output (`printf` and `fwrite`) rather than C++ `std::cout`. Mixing C and C++ I/O streams in the same file is generally considered bad practice, so please stick to the C-style I/O functions provided in the template!
