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
int N;

int main(){
  OPTIMATION
  #ifndef ONLINE_JUDGE
    IO
  #endif
	cin >> N;
	if (N <= 3) cout << "NO\n";
	else {
		cout << "YES\n";
		if (N == 4) {
			cout << 4 << " * " << 3 << " = " << 12 << '\n';
			cout << 12 << " * " << 2 << " = " << 24 << '\n';
			cout << 24 << " * " << 1 << " = " << 24 << '\n';
		}
		else if (N == 5) {
			cout << 5 << " + " << 1 << " = " << 6 << '\n';
			cout << 6 << " * " << 4 << " = " << 24 << '\n';
			cout << 3 << " - " << 2 << " = " << 1 << '\n';
			cout << 24 << " * " << 1 << " = " << 24 << '\n'; 
		}
		else {
			cout << 3 << " - " << 2 << " = " << 1 << '\n';
			cout << 1 << " - " << 1 << " = " << 0 << '\n';
			cout << 4 << " * " << 6 << " = " << 24 << '\n';
			for (int i = 5; i <= N; i++){
				if (i != 6) {
					cout << 0 << " * " << i  << " = " << 0 << '\n';
				}
			}
			cout << 0 << " + " << 24 << " = " << 24 << '\n';
		}
	}  
  return 0;
}