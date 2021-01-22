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
int arr[105];
int N, K;

int main(){
  OPTIMATION
  cin >> N >> K;
  for (int i = 0; i < N; i++) cin >> arr[i];
  int kanan, kiri;
	int i = 0, j = N-1;
	while (i < N && arr[i] <= K){
		i++;
	}
	kanan = i;
	if (kanan == N) cout << N << '\n';
	else {
		j = N-1;
		while (j >= 0 && arr[j] <= K) j--;
		kiri = j;
		if (kiri < kanan) cout << N << '\n';
		else {
			// cout << kanan << " " << kiri << '\n';
			cout << N - (kiri - kanan + 1) << '\n';
		}
	}
  return 0;
}