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
LL N, K, M;
LL ans, sum;
LL arr[50];

int main(){
	OPTIMATION
	#ifndef ONLINE_JUDGE
		IO
	#endif
	cin >> N >> K >> M;
	for (int i = 0 ; i < K; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + K);
	if (N * sum <= M) cout << N*(K + 1) << '\n';
	else {
		LL bagi = (M / sum);
		LL ans = 0;
		for (int i = 0 ; i <= bagi; i++){
			LL sisa = M - (sum * i);
			LL point = i*(K+1);
			for (int j = 0; j < K; j++){
				if (sisa >= arr[j] * (N-i)){
					sisa -= (arr[j] * (N-i));
					point += (N-i);
				}
				else {
					LL bag = sisa / (arr[j]);
					point += bag;
					sisa -= (bag * arr[j]);
				}
			}
			ans = max(ans, point);
		}
		cout << ans << '\n';
	}
  return 0;
}