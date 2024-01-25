# stdc++.h Replacement and Code Logging Function

## Introduction

This repository provides an updated version of the `stdc++.h` file, commonly used in competitive programming with the GCC compiler. The updated file is located at:

`{mingw64_folder_location}\include\c++\{compiler_version}\x86_64-w64-mingw32\bits`

You can replace the existing `stdc++.h` file in this directory with the one provided here.

## Precompiling

After replacing the file, you can use the following command to precompile your C++ code:

```bash/cmd
g++ stdc++.h
```

This helps in speeding up compilation times by precompiling the header.

## Code Logging Function -> db ( )

The repository includes a powerful and versatile debugging function named `db`. This function can take any variable and print it, making it extremely useful for quick and easy code logging/debugging in competitive programming and other Data Structure and Algorithm tests.

### Example Usage:

```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol ( ){
  int x = 4;
  db ( x );
  vector<int> v = { 6,5,8,8 };
  db ( v );
  map<int , int> m = { {3,5},{2,7} };
  db ( m );
  db ( x , m , v );
  }

signed main ( ){
  ios_base::sync_with_stdio ( false ); cin.tie ( nullptr ); cout.tie ( nullptr );
  int t = 1;
  // cin >> t;
  while( t-- ) sol ( );
  }

```

### Output:

```
... x = 4,
... v = [ 6, 5, 8, 8 ],
... m = [ <2, 7>, <3, 5> ],
... x , m , v = 4,  [ <2, 7>, <3, 5> ],  [ 6, 5, 8, 8 ],
```

Feel free to use and customize this repository to enhance your C++ coding experience.
