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
const int MAXN = 3e5;
int N, Q, ans;
int curr, idx;
int last[MAXN+5], freq[MAXN+5], arr[MAXN+5];
int tipe, x;



int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N >> Q;
  curr = -1;
  for (int i = 0; i < Q; i++){
  	cin >> tipe >> x;
  	if (tipe == 1){
  		ans++;
  		freq[x]++;
  		arr[idx++] = x;
  		cout << ans << '\n';
  	}
  	else if (tipe == 2){
  		ans -= freq[x];
  		last[x]+=freq[x];
  		freq[x] = 0;
  		cout << ans << '\n';
  	}
  	else {
  		if (x-1 > curr){
  			int cnt = 0;
  			for (int j = curr+1; j <= x-1; j++){
  				if (last[arr[j]] == 0) {
  					cnt++;
  					if (freq[arr[j]] > 0) freq[arr[j]]--;
  				}
  				else last[arr[j]]--;
  			}
  			ans -= cnt;
  			curr = x-1;
  			cout << ans << '\n';
  		}
  		else cout << ans << '\n';
  	}
  }
  return 0;
}