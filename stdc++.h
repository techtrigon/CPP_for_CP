#include <bits/stdcpp.h>
using  namespace std;
template<class K , class V>ostream& operator<<( ostream& s , const pair<K , V>& p ) { s << '<' << p.first << ", " << p.second << '>'; return s; }template<class T , class = typename T::value_type , class = typename enable_if<!is_same<T , string>::value>::type>ostream& operator<<( ostream& s , const T& v ) { s << "[ "; for( auto& x : v ) { s << x << ", "; }if( !v.empty ( ) ) { s << "\b\b"; }s << " ]"; return s; }void __prnt ( ) { cerr << "\n"; } template<class T , class...Ts>void __prnt ( T&& a , Ts&&...etc ) { cerr << a << ",  "; __prnt ( etc... ); }
#define db(...) { cerr<<"... "<< #__VA_ARGS__<<" = ";__prnt(__VA_ARGS__); }
