#include <bits/stdc++.h>
using namespace std;

//Define Lists
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size() 
#define all(x) (x).begin(), (x).end()
#define OPTIMATION ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inp() freopen("in.txt", "r", stdin);
#define out() freopen("out.txt", "w", stdout);
#define IO inp() out()
//typedef Lists
typedef long long LL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;

//constant values
const double pi = acos(-1);
const LL MODPRIMA = (LL)1e9 + 7;
const LL MAXX = (LL)1e18;
const LL MINN = -(LL)1e18;
const double EPS = -1e9;

//declare variables here
const int MAXN = 2e5;
int N, Q, x, arr[MAXN+5];
multiset<int> ms;
pair<int,int> pasangan[MAXN+5];
vector<int> himp[MAXN+5];
int sudah;
bool ada;

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N >> Q;
  memset(pasangan, -1, sizeof pasangan);
  for (int i = 0 ; i < N; i++){
  	cin >> x;
  	if (x == Q) ada = true;
  	if (pasangan[x].fi == -1) {
  		pasangan[x].fi = pasangan[x].se = i;
  	}
  	else {
  		pasangan[x].se = i;
  	}
  	himp[x].pb(i);
  	arr[i] = x;
  }
  for (int i = 1; i <= Q; i++){
  	if (himp[i].size() == 0) continue;
  	sudah++;
  	if (sudah == 1) {
  		for (int j = 0; j < himp[i].size(); j++) ms.insert(himp[i][j]);
  	}
  	else {
  		auto hi = ms.lower_bound(pasangan[i].se);
  		auto lo = ms.lower_bound(pasangan[i].fi);
  		if (hi == ms.end()){
  			if (lo == ms.end()) {}
  			else {
  				cout << "NO\n";
  				return 0;
  			}
  		}
  		else {
  			if (hi == ms.begin()){}
  			else {
  				hi--;
  				if (*hi >= *lo) {
  					cout << "NO\n";
  					return 0;
  				}
  				else {}
  			} 
  		}
  		for (int j = 0; j < himp[i].size(); j++) ms.insert(himp[i][j]);
  	}
  }
  for (int i = 0 ; i < N; i++){
  	if (arr[i] == 0) {
  		if (!ada) {
  			ada = true;
  			arr[i] = Q;
  		}
  		else if (i == 0) arr[i] = 1;
  		else arr[i] = arr[i-1];
  	}
  }
  if (!ada) cout << "NO\n";
  else {
  	cout << "YES\n";
  	for (int i = 0 ; i < N; i++){
  		cout << arr[i];
  		cout << (i == N-1 ? '\n' : ' ');
  	}
  }
  return 0;
}