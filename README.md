# stdc++.h Replacement and Code Logging Function

## Introduction

This repository provides an updated version of the `stdc++.h` file, commonly used in competitive programming with the GCC compiler. The updated file is located at:

`{mingw64_folder_location}\include\c++\{compiler_version}\x86_64-w64-mingw32\bits`

You can replace the existing `stdc++.h` file in this directory with the one provided here.

## Precompiling

After replacing the file, you can use the following command to precompile your C++ code:

```bash/cmd
g++ -O2 -std=c++20 -flto -Wall -Wextra -Wno-unused-parameter -Wno-unused-variable stdc++.h
```

This helps in speeding up compilation times by precompiling the header.

## Code Logging Function -> db ( )

The repository includes a powerful and versatile debugging function named `db`. This function can take any variable and print it, making it extremely useful for quick and easy code logging/debugging in competitive programming and other Data Structure and Algorithm tests.


## Custom print() and scan() function 

No neeed to use << to print or >> to read inputs 

### Example Usage:

```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
template<long M> class modi {long _X;static long _M;public:modi(long long v = 0) : _X(v % _M) {if ( _X < 0 ) {_X += _M;}}static void set(long newMod) { _M = newMod; }modi &operator+=(const modi &other) {_X += other._X;if ( _X >= _M ) {_X -= _M;}return *this;}modi &operator-=(const modi &other) {_X -= other._X;if ( _X < 0 ) {_X += _M;}return *this;}modi &operator*=(const modi &other) {_X = (1LL * _X * other._X) % _M;return *this;}friend modi operator+(const modi &lhs, const modi &rhs) { return modi(lhs) += rhs; }friend modi operator-(const modi &lhs, const modi &rhs) { return modi(lhs) -= rhs; }friend modi operator*(const modi &lhs, const modi &rhs) { return modi(lhs) *= rhs; }friend modi operator/(const modi &lhs, const modi &rhs) { return modi(lhs) /= rhs; }modi &operator/=(const modi &other) { return *this *= other.inv( ); }modi &operator++( ) {_X++;if ( _X == _M ) {_X = 0;}return *this;}modi operator++(int) {modi temp = *this;++(*this);return temp;}modi &operator--( ) {if ( _X == 0 ) {_X = _M;}_X--;return *this;}modi operator--(int) {modi temp = *this;--(*this);return temp;}bool operator==(const modi &other) const { return _X == other._X; }bool operator!=(const modi &other) const { return !(*this == other); }modi inv( ) const { return pow(_M - 2); }modi pow(int _Ex) const {assert(_Ex >= 0);modi _Bs = *this, _Rs = 1;for ( ; _Ex > 0; _Ex >>= 1 ) {if ( _Ex % 2 == 1 ) { _Rs *= _Bs;}_Bs *= _Bs;}return _Rs;}friend ostream &operator<<(ostream &os, const modi &m) { return os << m._X; }long d( ) const { return _X; } }; template<long _Md> long modi<_Md>::_M = _Md;
template<class _1, class _2> ostream &operator<<(ostream &_X, const pair<_1, _2> &_P); template<typename _1T, typename... Ts> constexpr bool is_any_of = (is_same_v<_1T, Ts> || ...); template<typename _T1, typename =enable_if_t<!is_same_v<_T1,string> && !is_void_v<typename _T1::value_type>>> ostream &operator<<(ostream&_X, const _T1 &_V) {bool _3=false,_4=true,_5=&_X==&cerr;_X <<(_5? "[ ":"");for ( int j=0;auto&_G1:_V) {_3 = is_any_of<decay_t<decltype(_G1)>,char,long long,int,bool,string>;(!_3 or _4) ? _X << _G1 : _X <<(_5 ? ", " : " ")<<_G1;_4=0;}return _X << (_5?" ]..":(_3 ) ? "\n" : ""); } template<class _1, class _2> ostream &operator<<(ostream&_X, const pair<_1,_2> &_P) {bool _5=&_X == &cerr;return _X << (_5?"<":"") << _P.first << (_5?", ":" ") << _P.second << (_5?">, ":""); } template<class... Ts> void _pr(const Ts &..._1AG) {((cerr << _1AG << " __ "), ...);cerr << '\n'; }
template <class _1>void _sc( _1 &_2 ) { cin >> _2;}template <class _1, class S>void _sc( pair<_1, S> &_3 ) {_sc( _3.first ), _sc( _3.second );}template <class _1>void _sc( vector<_1> &_2 ) {for ( auto &i : _2 )_sc( i );}template <typename... _5>void in( _5 &..._4 ) {( _sc( _4 ), ... );}template <typename _1T>void out( const _1T &_1Ar ) {if constexpr ( is_same_v<_1T, char> )( _1Ar == '\n' ) ? cout << _1Ar << "" : cout << _1Ar << " ";else if constexpr ( is_same_v<_1T, int> or is_same_v<_1T, long long> or is_same_v<_1T, string> )cout << _1Ar << " "; else cout << _1Ar << "";}template <typename... Args>void out( const Args &...args ) { ( out( args ), ... );}
#define db(...) (cerr << " (:> " << #__VA_ARGS__ << " |= ", _pr(__VA_ARGS__))
// clang-format on
#define all(vls) vls.begin( ), vls.end( )
#define int long long
const ll md = 1000000007, inf = (ll) 2e18, N = (ll) 1e6;
using mint = modi<md>;

void __() {
   vector<int> v = { 2, 5, 6 };
   map<int, vector<int>> m = { { 1, { 2 } } };
   vector<array<int, 1>> vao = { { 25 } };
   deque<int> d = { 3, 8, 4 };
   deque<pair<int, int>> dpx = { { 3, 2 } };
   set<int> s = { 3, 5 };
   multiset<int> ms = { 3, 5, 3 };
   pair<int, vector<int>> p = { 2, { 2, 5 } };
   vector<map<int, int>> vm = { { { 1, 6 }, { 2, 6 } } };
   db( p );
   db( vm );
   db( v );
   db( m );
   db( vao );
   db( d );
   db( dpx );
   db( s );
   db( ms );
   int xs = 1;
}

signed main() {
   ios_base::sync_with_stdio( false );
   cin.tie( nullptr );
   __();
   return 0;
}
```

### Output:

```
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
