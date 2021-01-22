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
int T, N;
int arr[1005], lebih[1005], kurang[1005];
int BIT[10005];

int dapet(int x){
	int res = 0;
	while (x > 0){
		res += BIT[x];
		x -= (x&(-x));
	}
	return res;
}

void updt(int x){
	while(x <= 10000){
		BIT[x]++;
		x += (x&(-x));
	}
}

int main(){
	scanf("%d", &T);
  while (T--) {
  	memset(BIT, 0, sizeof BIT);
  	scanf("%d", &N);
  	for (int i = 0; i < N; i++){
  		scanf("%d", &arr[i]);
  	}
  	for (int i = N-1; i >= 0; i--){
  		if (i == N-1) {
  			kurang[i] = 0;
  			lebih[i] = 0;
  			updt(arr[i]);
  		}else {
  			kurang[i] = dapet(arr[i]-1);
  			lebih[i] = (N-1) - (i+1) + 1 - kurang[i];
  			updt(arr[i]);
  		}
  	}
  	int ans = 0;
  	for (int i = 0 ; i < N-1; i++){
  		for (int j = i+1; j < N; j++){
  			if (arr[i] < arr[j]) {
  				ans += kurang[j];
  			}else 
  				ans += lebih[j];
  		}
  	}
  	printf("%d\n", ans);
  }
  return 0;
}