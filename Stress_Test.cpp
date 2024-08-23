#include <bits/stdc++.h>
using namespace std;
using ll= long long;
// clang-format off
template<long M>class modi{long _X;static long _M;public:modi(long long _H = 0):_X(_H % _M) {if (_X < 0){_X += _M;}}static void set(long _J){_M = _J; }modi &operator+=(const modi &_O) { _X += _O._X; if(_X >= _M){_X -= _M;}return *this;}modi &operator-=(const modi &_O){_X -= _O._X;if(_X<0) {_X += _M; } return *this;}modi &operator*=(const modi &_O) { _X = (1LL * _X * _O._X) % _M; return *this;}friend modi operator+(const modi &_L, const modi &_R) { return modi(_L) += _R; }friend modi operator-(const modi &_L, const modi &_R) { return modi(_L) -= _R; }friend modi operator*(const modi &_L, const modi &_R) {return modi(_L) *= _R; }friend modi operator/(const modi &_L, const modi &_R) { return modi(_L) /= _R; }modi &operator/=(const modi &_O) { return *this *=_O.inv();}modi &operator++(){return *this += 1;}modi operator++(int) { modi _L = *this; ++(*this); return _L;}modi &operator--( ) { return (*this) -= 1; }modi operator--(int) { modi _L = *this; --(*this); return _L;}bool operator==(const modi &_O) const { return _X == _O._X; }bool operator!=(const modi &_O) const {return !(*this == _O);}bool operator<(const modi &_O)const{return _X < _O._X; }modi inv() const { return pow(_M - 2); }modi pow(int _Ex) const { assert(_Ex >= 0); modi _Bs = *this, _Rs = 1; for ( ; _Ex>0;_Ex>>= 1){if (_Ex&1){_Rs *= _Bs;}_Bs *= _Bs;}return _Rs;}friend ostream &operator<<(ostream &os,modi &m){return os << m._X; }long d() const{ return _X; } };template<long _Md>long modi<_Md>::_M = _Md;
template<typename T> struct is_modi : false_type {}; template<long M> struct is_modi<modi<M>> : true_type {}; template<class _1, class _2> ostream &operator<<(ostream &_X, const pair<_1, _2> &_P); template<typename _1T, typename... Ts> constexpr bool is_any_of = (is_same_v<_1T, Ts> || ...); template<typename _T1, typename = enable_if_t<!is_same_v<_T1, string> && !is_void_v<typename _T1::value_type>>> ostream &operator<<(ostream &_X, const _T1 &_V) {bool _3 = 0, _4 = 1, _5 = &_X == &cerr;_X << (_5 ? "[ " : "");for ( int j = 0; auto &_G1 : _V ) {_3 = is_any_of<decay_t<decltype(_G1)>, char, long long, int, bool, string> || is_modi<decay_t<decltype(_G1)>>::value;(!_3 || _4) ? _X << _G1 : _X << (_5 ? ", " : " ") << _G1;_4 = 0;}return _X << (_5 ? " ].." : (_3) ? "\n" : ""); } template<class _1, class _2> ostream &operator<<(ostream &_X, const pair<_1, _2> &_P) {bool _5 = &_X == &cerr;return _X << (_5 ? "<" : "") << _P.first << (_5 ? ", " : " ") << _P.second << (_5 ? "> " : ""); } template<class... Ts> void _pr(const Ts &..._) {((cerr << _ << " __ "), ...);cerr << '\n'; }
#define db(...) (cerr << " (:> " << #__VA_ARGS__ << " |= ", _pr(__VA_ARGS__))
// clang-format on
#define all(_B) _B.begin( ), _B.end( )
const ll md= 1000000007, inf= 2e18, N= 1e6;
using mint= modi<md>;
#define int long long
mt19937_64 mt(chrono::steady_clock::now( ).time_since_epoch( ).count( ));
///
#define PARAMS int n, vector<int> v ///// STEP - 1🔶
///

//      🟩   CORRECT SOLUTION -----------------------------------------------------
void rightsol(PARAMS) {}

//      🟧   TEST SOLUTION -----------------------------------------------------
void wrongsol(PARAMS) {}

uniform_int_distribution<int> rn(1, 3), rv(0, 40), rs(1, 100);
signed main( ) {
   cin.tie(0)->sync_with_stdio(0);
   streambuf *backup= cout.rdbuf( ); // Save the original cout buffer

   for ( int ___= (int) 1e5; ___ > 0; --___ ) {
      int n= rn(mt);
      // int s = rs(mt);
      // uniform_int_distribution<int> rk(1, s);
      // int k = rk(mt);

      vector<int> vc(n);
      // string str1, str2;
      // vector<pair<int, int>> vp(n);

      for ( auto i= 0; i < n; i++ ) {
         vc[i]= rv(mt);
         // str1.push_back('a' + rv(mt));
         // str2.push_back('a' + rv(mt));
         // vp[i] = {rv(mt), rv(mt)};
      }

      ostringstream checker[2];
      for ( auto joop= 0; auto &&fn : {rightsol, wrongsol} ) {
         cout.rdbuf(checker[joop].rdbuf( ));
         fn(n, vc); ////// STEP - 2 🔶  PASSING ARGUMENTS
         joop= 1;
      }
      cout.rdbuf(backup); // Restore the original cout buffer

      if ( checker[0].str( ) != checker[1].str( ) ) {
         db(n);
         db(vc);
         // db(str1);
         cout << "Right : " << checker[0].str( ) << "\nWrong : " << checker[1].str( );
         return 0;
      }
   }
   return 0;
}
