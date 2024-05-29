# stdc++.h Replacement and Code Logging Function

## Introduction

This repository provides an updated version of the `stdc++.h` file, commonly used in competitive programming with the GCC compiler. The updated file is located at:

`{mingw64_folder_location}\include\c++\{compiler_version}\x86_64-w64-mingw32\bits`

You can replace the existing `stdc++.h` file in this directory with the one provided here.

## Precompiling

After replacing the file, you can use the following command to precompile your C++ code:

```bash/cmd
g++ -O1 -fconcepts -D_GLIBCXX_DEBUG -DLC_LOCAL -Wall -Wextra -Wno-c++20-extensions -pedantic -Wshadow -Wno-unused-parameter -Wlogical-op -Wno-unused-variable -Wno-sign-compare stdc++.h
```

This helps in speeding up compilation times by precompiling the header.

## Code Logging Function -> db ( )

The repository includes a powerful and versatile debugging function named `db`. This function can take any variable and print it, making it extremely useful for quick and easy code logging/debugging in competitive programming and other Data Structure and Algorithm tests.


## Custom print() and scan() function 

No neeed to use << to print or >> to read inputs 

### Example Usage:

```cpp
// clang-format off
#include <bits/stdc++.h>
using namespace std;
template <class klsx, class vkkj> ostream& operator<<(ostream& sdnsf, const pair<klsx, vkkj>& prs); template <class T, size_t N> ostream& operator<<(ostream& sdnsf, const array<T, N>& nc_d) { sdnsf << "[ "; for (size_t i = 0; i < N; ++i) { sdnsf << nc_d[i]; if (i < N - 1) { sdnsf << ", "; }}return sdnsf << " ]"; }  template <class T, class = typename T::value_type, class = typename enable_if<!is_same<T, string>::value>::type> ostream& operator<<(ostream& sdnsf, const T& __v_V_) {     sdnsf << "[ ";     for (auto i = __v_V_.begin(); i != __v_V_.end(); i++) i == __v_V_.begin() ? sdnsf << *i : sdnsf << ", " << *i; return __v_V_.empty() ? sdnsf << "]" : (sdnsf << " ]"); }  template <class klsx, class vkkj> ostream& operator<<(ostream& sdnsf, const pair<klsx, vkkj>& prs) { return sdnsf << '<' << prs.first << ", " << prs.second << '>'; } template <class... Ts> void __prnt(const Ts&... args) { ((cerr << args << " __ "), ...); }
#define db(...) (cerr << " (:> " << #__VA_ARGS__ << " |= ", __prnt(__VA_ARGS__), cerr << '\n')
template<typename... Args>void scan( Args&... args ){ ( ( cin >> args ) , ... ); }template<typename T>void print( const T& arg ){ if constexpr( is_same_v<T , char> ) arg == '\n' ? cout << arg : cout << arg << ' '; else cout << arg << ' '; }template<typename... Args>void print( const Args&... args ){ ( print( args ) , ... ); }
// clang-format on
#define ll long long
ll md = 1e9 + 7, inf = 1e18;

void sol ( ){
   int x = 4;
   vector<int> v = { 2, 5, 6 };
   map<int, vector<int>> m = { { 1, { 2 } } };
   vector<array<int, 1>> vao = { { 25 } };
   deque<int> d = { 3, 8, 4 };
   deque<pair<int, int>> dpx = { { 3, 2 } };
   set<int> s = { 3, 5 };
   multiset<int> ms = { 3, 5, 3 };
   pair<int, vector<int>> p = { 2, { 2, 5 } };
   vector<map<int, int>> vm = { { { 1, 6 }, { 2, 6 } } };
   db ( x );
   db( p );
   db( vm );
   db( v );
   db( m );
   db( vao );
   db( d );
   db( dpx );
   db( s );
   db( ms );
  }

signed main ( ){
  ios_base::sync_with_stdio ( false ); cin.tie ( nullptr );
  sol ( );
  }

```

### Output:

```
 (:> x |= 4 __
 (:> p |= <2, [ 2, 5 ]> __
 (:> vm |= [ [ <1, 6>, <2, 6> ] ] __
 (:> v |= [ 2, 5, 6 ] __
 (:> m |= [ <1, [ 2 ]> ] __
 (:> vao |= [ [ 25 ] ] __
 (:> d |= [ 3, 8, 4 ] __
 (:> dpx |= [ <3, 2> ] __
 (:> s |= [ 3, 5 ] __
 (:> ms |= [ 3, 3, 5 ] __
```

Feel free to use and customize this repository to enhance your C++ coding experience.
