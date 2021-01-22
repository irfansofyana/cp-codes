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
int arr[105];
int BIT[105];

int main(){
  OPTIMATION
  cin >> T;
  while (T--) {
  	cin >> N;
  	for (int i = 0; i < N; i++)
  		cin >> arr[i];
  	int ans = 0;
  	for (int i = 0 ; i < N-2; i ++){
  		for (int j = i+1; j < N-1; j++){
  			for (int k = j+1; k < N; k++){
  				if (arr[i] < arr[j] && arr[j] > arr[k]) ans++;
  				else if (arr[i] > arr[j] && arr[j] < arr[k]) ans++;
  			}
  		}
  	}
  	cout << ans << '\n';
  }
  return 0;
}