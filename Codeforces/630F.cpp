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
int N;

LL comb(LL N,LL K){
	LL res = 1;
	LL arr[10];
	for (int j = 1; j <= K; j++)
		arr[j] = j;
	for (int i = N-K+1; i <= N; i++){
		LL bil = i;
		for (int j = 1; j <= K; j++){
			if (__gcd(bil, arr[j]) != 1){
				LL tmp = __gcd(bil, arr[j]);
				bil /= tmp;
				arr[j] /= tmp;
			}		
		}
		res *= bil;
	}
	for (int i = 1; i <= K; i++){
		res /= arr[i];
	}
	return res;
}

int main(){
  OPTIMATION
  cin >> N;
  LL ans = comb(N, 5) + comb(N, 6) + comb(N, 7);
  cout << ans << '\n';
  return 0;
}