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
LL N, K, Q, C, D;

LL sqr(LL x){
	return (((x%N)*(x%N)))%N;
}

LL power(LL a,LL b){
	if (b == 0) return 1;
	else if (b == 1) return a%N;
	else if (b%2 == 0) return sqr(power(a, b/2)%N);
	else return ((a%N)*sqr(power(a, (b-1) / 2)%N))%N;
}

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N >> K >> Q;
  while (Q--){
  	cin >> C >> D;
  	if (K % N == 0) {
  		if (D != 0) cout << 0 << '\n';
  		else cout << C << '\n';
  	}
  	else {
  		K %= N;
  		LL hasil = ((D%N)*power(K, N-2))%N;
  		if (hasil > C-1) cout << 0 << '\n';
  		else {
  			LL ujung = (C - 1 - hasil) / N;
  			cout << ujung + 1 << '\n';
  		}
  	}
  }
  return 0;
}