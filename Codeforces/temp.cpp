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
int N, X, Y, prv, kurang;
int depth[MAXN+5], parent[MAXN+5], saved[MAXN+5];
vector<int> arr[MAXN+5];
bool visited[MAXN+5];

void DFS(int node, int dalem){
	visited[node] = true;
	depth[node] = dalem;
	for (int i = 0 ; i < arr[node].size(); i++){
		if (!visited[arr[node][i]]) {
			DFS(arr[node][i], dalem + 1);
			parent[arr[node][i]] = node;
		}
	}
}

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N;
  for (int i = 0 ; i < N-1; i++){
  	cin >> X >> Y;
  	arr[X].pb(Y);
  	arr[Y].pb(X);
  }
  DFS(1, 0);
  bool ans = true;
  for (int i = 0 ; i < N; i++){
  	cin >> X;
  	if (i == 0) prv = depth[X];
  	else {
  		if (prv > depth[X]) {
  			ans = false;
  		}
  		prv = depth[X];
  	}
  	saved[i] = X;
  	// cout << i << " " << X << " " <<  depth[X] << '\n';
  }
  if (!ans) cout << "No\n";
  else {
  	int j = 1;
  	for (int i = 0; i < N && j < N; i++){
  		if (i == 0) kurang = 0;
  		else kurang = 1;
  		for (int k = 0; k < (int)arr[saved[i]].size() - kurang; k++){
  			if (parent[saved[j]] != saved[i]) {
  				cout << "No\n";
  				return 0;
  			}else{
  				j++;
  			}
  		}
  	}
  	cout << "Yes\n";
  }
  return 0;
}