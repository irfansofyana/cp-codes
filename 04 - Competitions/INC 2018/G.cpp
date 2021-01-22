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
int N;
const int MAXN = (1 << 16);
double dp[MAXN+5][21];
pair<double, double> titik[21];

double dist(int x,int y){
	pair<double, double> a, b;
	a = titik[x];
	b = titik[y];
	return sqrt((a.fi - b.fi)*(a.fi - b.fi) + (a.se - b.se)*(a.se - b.se));
}

double cari(int mask,int indeks){
	if (dp[mask][indeks] != -1.00) return dp[mask][indeks];
	int cnt = 0;
	int idx = -1;
	for (int i = 0; i < N; i++){
		if ((mask&(1 << i)) > 0) {
			idx = i;
		}
		else cnt++;
	}
	if (cnt == N-1 && idx == indeks) return 0.00;
	else {
		double mini = 1e18;
		int cmask = mask;
		cmask ^= (1 << indeks);
		for (int i = 0 ; i < N; i++){
			if ((cmask&(1<<i)) > 0) {
				// if (mini == -1) 
				// 	mini = cari(cmask, i) + dist(indeks, i);
				// else mini = min(mini,cari(cmask, i) + dist(indeks, i));
				mini = min(mini, cari(cmask, i) + dist(indeks, i));
			}
		}
		return dp[mask][indeks] = mini;
	}
}

int main(){
  OPTIMATION
  for (int i = 0; i <= MAXN+1; i++){
  	for (int j = 0; j <= 20; j++)
  		dp[i][j] = -1.00;
  }
  cin >> N;
  for (int i = 0 ; i < N; i++){
  	cin >> titik[i].fi >> titik[i].se;
  }
  double ans;
  for (int i = 0; i < N; i++){
  	int bil = (1 << N);
  	if (i == 0) ans = cari(bil - 1, i);
  	else ans = min(ans, cari(bil - 1, i));
  }
  cout << fixed << showpoint << setprecision(7);
  cout << ans << '\n';
  return 0;
}