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
LL N, ans;
int arr[] = {1, 5, 10, 20, 100};


int main(){
  OPTIMATION
  cin >> N;
  for (int i = 4; i >= 0; i--) {
  	if (N >= arr[i]) {
  		ans += (N / arr[i]);
  		N -= (arr[i])*(N / arr[i]);
  	}
  }
  cout << ans << '\n';
  return 0;
}