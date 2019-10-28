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
int N, arr[105];
int ans;

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N;
  for (int i = 0 ; i < N; i++) cin >> arr[i];
  sort(arr, arr + N);
	int i = 0;
	while (i < N){
		int j = i + 1;
		int cnt = 1;
		while (j < N && arr[j] == arr[i]){
			cnt++;
			j++;
		}
		ans = max(ans, cnt);
		i = j;
	}
	cout << ans << '\n';
  return 0;
}