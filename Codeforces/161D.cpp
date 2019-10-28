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
const int MAXN = 5e4;
int N, K, x, y;
LL banyak[MAXN+5][505];
vector<int> arr[MAXN+5];
bool visited[MAXN+5];
LL ans;

void DFS(int node){
	visited[node] = true;
	int cnt = 0;
	for (int i = 0; i < sz(arr[node]); i++){
		if (!visited[arr[node][i]]){
			cnt++;
			DFS(arr[node][i]);
		}
	}
	if (cnt == 0) {
		banyak[node][0]++;
	}else{
		banyak[node][0]++;
		for (int i = 0; i < sz(arr[node]); i++){
			for (int j = 1; j <= K; j++){
				banyak[node][j] += banyak[arr[node][i]][j-1];
			}
		}
	}	
}

void hitung(int node){
	visited[node] = true;
	if (K >= 2 && sz(arr[node]) >= 2) {
		LL curr = 0;
		for (int i = 0; i <= K-2; i++){
			int idx1 = i + 1;
			int idx2 = K-2-i+1; 
			curr = (1LL * banyak[node][idx1] * banyak[node][idx2]);
			for (int j = 0; j < sz(arr[node]); j++)
				curr -= (1LL * banyak[arr[node][j]][i] * banyak[arr[node][j]][K-2-i]);
			if (idx1 == idx2) curr /= 2;
			ans += curr;
		}
	}
	ans += banyak[node][K];
	for (int i = 0; i < sz(arr[node]); i++){
		if (!visited[arr[node][i]]){
			hitung(arr[node][i]);
		}
	}
}

int main(){
  OPTIMATION
  cin >> N >> K;
  for (int i = 0 ; i < N-1; i++){
  	cin >> x >> y;
  	arr[x].pb(y);
  	arr[y].pb(x);
  }
  memset(visited, false, sizeof visited);
  DFS(1);
  // for (int i = 1; i <= N; i++){
  // 	for (int j = 0; j <= K; j++){
  // 		cout << i << " " << j << " " << banyak[i][j] << '\n';
  // 	}
  // }
  ans = 0;
  memset(visited, false, sizeof visited);
  hitung(1);
  cout << ans << '\n';
  return 0;
}