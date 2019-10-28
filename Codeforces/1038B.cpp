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
int N, bil1, bil2;

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
  cin >> N;
  if (N <= 2) cout << "No" << '\n';
  else {
  	if ((N*(N-1))/2 == 0) {
  		cout << "Yes\n";
  		cout << 1 << " " << 2 << '\n';
  		cout << N - 1;
  		for (int i = 1; i <= N; i++) {
  			if (i!=2) cout << " " << i;
  		}cout << '\n';
  	}
  	else {
  		if (N%2 == 0) {
  			bil1 = N/2;
  			bil2 = N + 1;
  		}else {
  			bil2 = N;
  			bil1 = (N + 1)/2;
  		}
  		cout << "Yes\n";
  		cout << 1 << " " << bil1 << '\n';
  		cout << N-1;
  		for (int i = 1; i <= N; i++) {
  			if (i!=bil1) cout << " " << i;
  		}cout << '\n';
  	}
  }
  return 0;
}