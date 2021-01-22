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
const int MAXN = (int)1e5;
const int INF = -(LL)1e9;
int T, N, TC;
LL arr[MAXN+5];


int main(){
  OPTIMATION
  cin >> T;
  while (T--){
  	cin >> N;
  	for (int i = 1 ; i <= N; i++) cin >> arr[i];
  	for (int i = 1 ; i <= N; i++){
  		if (i == 1) arr[i] = INF;
  		else {
  			LL tmp = INF;
  			for (int j = i-2; j >= max(0, i-5); j--){
  				if (j == i-2) tmp = arr[j] + arr[i];
  				else tmp = max(tmp, arr[j] + arr[i]);
  			}
  			arr[i] = tmp;
  		}
  	}
  	cout << "Case " << ++TC << ": " << arr[N] << '\n';
  }
  return 0;
}