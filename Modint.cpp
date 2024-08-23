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

signed main( ) {
   cin.tie(0)->sync_with_stdio(false);
   mint::set(11);
   mint a = 5, b = 7;
   mint sum = a + b;
   mint diff = a - b;
   mint prod = a * b;
   mint quot = a / b;
   cout << "modi with modulus 11:" << '\n';
   cout << "5 + 7 = " << sum << '\n';                  // Output: 1
   cout << "5 - 7 = " << diff << '\n';                 // Output: 9
   cout << "5 * 7 = " << prod << '\n';                 // Output: 2
   cout << "5 / 7 = " << quot << '\n';                 // Output: 8
   cout << "3 * (5 + 7) mod 11 = " << 3 * sum << '\n'; // Output: 8
   cout << "3 * (5 + 7) mod 11 = " << sum * 3 << '\n'; // Output: 8
   cout << "5 + 7 = " << sum << '\n';                  // Output: 1
   // Increment and Decrement operations
   mint c = 10;
   cout << "c = " << c << '\n';
   cout << "++c = " << (++c) << '\n';          // Output: 0
   cout << "c++ = " << (c++) << '\n';          // Output: 0
   cout << "c = " << c << '\n';                // Output: 1
   cout << "--c = " << (--c) << '\n';          // Output: 0
   cout << "c-- = " << (c--) << '\n';          // Output: 0
   cout << "c = " << c << '\n';                // Output: 10
   cout << "c^3 = " << mint(5).pow(3) << '\n'; // Output: 4
   // Inverse Calculation Example
   mint inv_b = b.inv( );
   cout << "Inverse of 7 % 11 is " << inv_b << '\n'; // Output: 8 (because (7 * 8) % 11 = 1)
   cout << "Changing values" << '\n';
   cout << sum.d( );
   return 0;
}