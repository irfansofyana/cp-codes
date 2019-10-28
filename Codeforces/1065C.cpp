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
const double EPS = 1e-9;

//declare variables here
const int MAXN = 2e5;
int N;
LL K, sum[MAXN+5], frek[MAXN+5], curr;
LL maks, mini;

int main(){
  OPTIMATION
  cin >> N >> K;
  maks = 0; mini = 1e9;
  for (int i = 0; i < N; i++){
  	LL x;
  	cin >> x;
  	frek[x]++;
  	sum[x] += x;
  	maks = max(maks, x);
  	mini = min(mini, x);
  }
  for (int i = 1; i <= MAXN+2; i++){
  	frek[i]+=frek[i-1];
  	sum[i]+=sum[i-1];
  }
  int i = maks;
  int ans = 0;
  while (i >= mini){
  	if (i == MAXN) i--;
  	else {
			LL jumlah = sum[MAXN] - sum[i];
			LL banyak = frek[MAXN] - frek[i];
			LL bil = jumlah - banyak*i - curr;
			if (bil <= K) i--;
			else {
				jumlah = sum[MAXN] - sum[i+1];
				banyak = frek[MAXN] - frek[i+1];
				bil = jumlah - banyak*(i+1) - curr;
				// cout << "sss " << i << " " << bil << '\n';
				ans++;
				curr += bil;
			} 		
  	}
  }
  if (sum[MAXN] - sum[mini] - (frek[MAXN]-frek[mini])*mini - curr > 0) ans++;
  cout << ans << '\n';
  return 0;
}