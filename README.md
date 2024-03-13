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
// clang-format off
#include <bits/stdc++.h>
using namespace std;
template <class K, class V>ostream& operator<<( ostream& s, const pair<K, V>& prs ){ return s << '<' << prs.first << ", " << prs.second << '>'; }template <class T, class = typename T::value_type, class = typename enable_if<!is_same<T, string>::value>::type>ostream& operator<<( ostream& s, const T& v ){ s << "[ "; for( auto i = v.begin(); i != v.end(); i++ )i == v.begin() ? s << *i : s << ", " << *i; return v.empty() ? s << "]" : ( s << " ]" ); }template <class... Ts>void __prnt( const Ts&... args ){ ( ( cout << args << " __ " ), ... ); }
#define db(...) (cout << " (:> " << #__VA_ARGS__ << " |= ", __prnt(__VA_ARGS__), cout << '\n')
template<typename T>void __prnt1( const T& arg ){ if constexpr( is_same_v<T, char> ) arg == '\n' ? cout << arg : cout << arg << ' '; else cout << arg << ' '; }template<typename... Args>void __prnt1( const Args&... args ){ ( __prnt1( args ), ... ); }
#define print(...) __prnt1(__VA_ARGS__)
template<typename... Args>void scan( Args&... args ){ ( ( cin >> args ), ... ); }
// #define int long long
// clang-format on
#define ll long long
ll md = 1e9 + 7, inf = 1e18;

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
