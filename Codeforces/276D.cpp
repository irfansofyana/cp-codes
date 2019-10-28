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
LL L, R;
LL dua[110];
int ukuran;

void isi(){
	dua[0] = 1;
	for (int i = 1; i <= 64; i++){
		dua[i] = 2*dua[i-1];
		if (dua[i] > (LL)1e18) {
			ukuran = i;
			break;
		}
	}
}

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  isi();
  cin >> L >> R;
  if (L == R){
  	cout << 0 << '\n';
  	return 0;
  }
  else if (R == L+1) cout << (R^L) << '\n';
  else {
  	LL tmp = (1LL << 62LL);
  	while (tmp > R) tmp >>= 1;
  	while ((R&tmp) == (L&tmp)) tmp >>= 1;
  	cout << 2*tmp - 1 << '\n';
  }
  return 0;
}