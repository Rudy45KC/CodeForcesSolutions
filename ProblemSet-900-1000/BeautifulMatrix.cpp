#include <bits/stdc++.h>
using namespace std;

typedef                     long long ll;
typedef                     long double lld;
typedef                     vector<ll> vl;
typedef                     vector<string> vs;
typedef                     vector<vl> vvl;
typedef                     pair<ll, ll> pl;
typedef                     unsigned long long ull;

#define _mod                1000000007
#define ff                  first
#define ss                  second
#define pb                  push_back
#define sz(v)               ll(v.size())
#define all(v)              v.begin(), v.end()
#define forn(i,n)           for(ll i = 0; i < n; i++)
#define fornj(j, n)         for(ll j = 0; j < n; j++)
#define yy                  cout << "YES\n"
#define nn                  cout << "NO\n"
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))

// Print my stuff
void _print(ll t)           {cerr << t;}
void _print(int t)          {cerr << t;}
void _print(string t)       {cerr << t;}
void _print(char t)         {cerr << t;}
void _print(lld t)          {cerr << t;}
void _print(double t)       {cerr << t;}
void _print(ull t)          {cerr << t;}


// Print my DS
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << endl << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ \n"; for (auto i : v) {_print(i); cerr << endl;} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


vector<bool> sievebool(ll n) {vector<bool> isPrime(n + 1, true); for (int i = 2; i * i <= n; i++) {if (isPrime[i]) {for (int j = i * i; j <= n; j = j + i) {isPrime[j] = false;}}} return isPrime;}
long long int_sqrt (long long x) { long long ans = 0; for (ll k = 1LL << 30; k != 0; k /= 2) { if ((ans + k) * (ans + k) <= x) { ans += k;}} return ans;}


// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif

/**************************************************************************************************************************************/

void solve() {
	
	int i, j, val;
	int x, y;
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			cin >> val;
			if(val){
				x = i;
				y = j;
			}
		}
	}
	
	cout << abs(x - 3) + abs(y - 3) << "\n";
	// //input the 2D array
	// ll n = 5;
	// ll arr[n][n];
	
	// forn(i, n){
	// 	forn(j, n){
	// 		cin >> arr[i][j];
	// 	}
	// }
	
	// //search for the position of the single 1 element
	// ll key = 1;
	// pair<ll, ll>pi;
	// forn(i, n){
	// 	forn(j, n){
	// 		if(arr[i][j] == 1){
	// 			pi = {i+1, j+1};
	// 		}
	// 		else{
	// 			continue;
	// 		}
	// 	}
	// }
		
	
	// ll steps = abs(3-pi.ff) + abs(3-pi.ss);
	
	// cout << steps << "\n";

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}