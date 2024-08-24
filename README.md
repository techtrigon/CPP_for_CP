# stdc++.h Replacement and Code Logging Function

## Introduction

This repository provides an updated version of the `stdc++.h` file, commonly used in competitive programming with the GCC compiler. The updated file is located at:

`{mingw64_folder_location}\include\c++\{compiler_version}\x86_64-w64-mingw32\bits`

You can replace the existing `stdc++.h` file in this directory with the one provided here.

## Precompiling

After replacing the file, you can use the following command to precompile your C++ code:

```bash/cmd
g++ -D_FORTIFY_SOURCE=2 -D_GLIBCXX_ASSERTIONS -flto -pipe -fstack-protector-strong -fstack-clash-protection -Wall -Wextra -Wno-unused-parameter -Wno-unused-variable -std=c++23 -O2 stdc++.h
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
using ll= long long;
// clang-format off
template<long M>class modi{long _X;static long _M;public:modi(long long _H = 0):_X(_H % _M) {if (_X < 0){_X += _M;}}static void set(long _J){_M = _J; }modi &operator+=(const modi &_O) { _X += _O._X; if(_X >= _M){_X -= _M;}return *this;}modi &operator-=(const modi &_O){_X -= _O._X;if(_X<0) {_X += _M; } return *this;}modi &operator*=(const modi &_O) { _X = (1LL * _X * _O._X) % _M; return *this;}friend modi operator+(const modi &_L, const modi &_R) { return modi(_L) += _R; }friend modi operator-(const modi &_L, const modi &_R) { return modi(_L) -= _R; }friend modi operator*(const modi &_L, const modi &_R) {return modi(_L) *= _R; }friend modi operator/(const modi &_L, const modi &_R) { return modi(_L) /= _R; }modi &operator/=(const modi &_O) { return *this *=_O.inv();}modi &operator++(){return *this += 1;}modi operator++(int) { modi _L = *this; ++(*this); return _L;}modi &operator--( ) { return (*this) -= 1; }modi operator--(int) { modi _L = *this; --(*this); return _L;}bool operator==(const modi &_O) const { return _X == _O._X; }bool operator!=(const modi &_O) const {return !(*this == _O);}bool operator<(const modi &_O)const{return _X < _O._X; }modi inv() const { return pow(_M - 2); }modi pow(int _Ex) const { assert(_Ex >= 0); modi _Bs = *this, _Rs = 1; for ( ; _Ex>0;_Ex>>= 1){if (_Ex&1){_Rs *= _Bs;}_Bs *= _Bs;}return _Rs;}friend ostream &operator<<(ostream &os,modi &m){return os << m._X; }long d() const{ return _X; } };template<long _Md>long modi<_Md>::_M = _Md;
template<typename T> struct is_modi : false_type {}; template<long M> struct is_modi<modi<M>> : true_type {}; template<class _1, class _2> ostream &operator<<(ostream &_X, const pair<_1, _2> &_P); template<typename _1T, typename... Ts> constexpr bool is_any_of = (is_same_v<_1T, Ts> || ...); template<typename _T1, typename = enable_if_t<!is_same_v<_T1, string> && !is_void_v<typename _T1::value_type>>> ostream &operator<<(ostream &_X, const _T1 &_V) {bool _3 = 0, _4 = 1, _5 = &_X == &cerr;_X << (_5 ? "[ " : "");for ( int j = 0; auto &_G1 : _V ) {_3 = is_any_of<decay_t<decltype(_G1)>, char, long long, int, bool, string> || is_modi<decay_t<decltype(_G1)>>::value;(!_3 || _4) ? _X << _G1 : _X << (_5 ? ", " : " ") << _G1;_4 = 0;}return _X << (_5 ? " ].." : (_3) ? "\n" : ""); } template<class _1, class _2> ostream &operator<<(ostream &_X, const pair<_1, _2> &_P) {bool _5 = &_X == &cerr;return _X << (_5 ? "<" : "") << _P.first << (_5 ? ", " : " ") << _P.second << (_5 ? "> " : ""); } template<class... Ts> void _pr(const Ts &..._) {((cerr << _ << " __ "), ...);cerr << '\n'; }
template<class _1> void _sc(_1 &_2) {cin >> _2; } template<class _1, class S> void _sc(pair<_1, S> &_3) {_sc(_3.first), _sc(_3.second); } template<class _1> void _sc(vector<_1> &_2) {for ( auto &i : _2 ) {_sc(i);} } template<typename... _5> void in(_5 &..._4) {(_sc(_4), ...); } template<typename T> void out(const T &_) {if constexpr ( is_same_v<T, char> ) {cout << _ << (_ == '\n' ? "" : " ");} else {cout << _ << (is_integral_v<T> || is_same_v<T, string> || is_modi<T>::value ? " " : "");} } template<typename... _F> void out(const _F &..._) {(out(_), ...); }
#define db(...) (cerr << " (:> " << #__VA_ARGS__ << " |= ", _pr(__VA_ARGS__))
// clang-format on
#define all(_B) _B.begin( ), _B.end( )
#define int long long
const ll md= 1000000007, inf= 2e18, N= 1e6;
using mint= modi<md>;

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
