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
const int MAXN = 100005;
int T;
int N, M, cnt;
pair<int,int> arr[MAXN+5];
int parent[MAXN+5];
bool pake[MAXN+5];

void init(){
	for (int i = 1; i <= N; i++)
		parent[i] = i;
}

int cari(int x){
	return (x == parent[x] ? x : parent[x] = cari(parent[x]));
}

void gabung(int a,int b){
	int x = cari(a);
	int y = cari(b);
	parent[x] = y;
}

int main(){
  OPTIMATION
  cin >> T;
  while (T--){
  	cin >> N >> M;
  	for (int i = 0; i < M; i++){
  		cin >> arr[i].fi >> arr[i].se;
  	}
  	init();
  	memset(pake, false, sizeof pake);
  	for (int i = 0; i < M; i++){
  		if (cari(arr[i].fi) != cari(arr[i].se)){
  			gabung(arr[i].fi, arr[i].se);
  			pake[i] = true;
  			cnt++;
  		}
  	}
  	cnt = M-2*N;  	
  	for (int i = 0; i < M; i++){
  		if (!pake[i] && cnt > 0) {
  			cout << arr[i].fi << " " << arr[i].se << '\n';
  		}
  	}
  }
  return 0;
}