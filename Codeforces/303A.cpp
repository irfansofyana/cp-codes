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
  cin >> N;
  if (N%2 == 0) cout << -1 << '\n';
  else {
  	for (int i = 0 ; i < N; i++) 
  		cout << i << " ";
  	cout << '\n';
  	for (int i = 1; i <= N-1; i++)
  		cout << i << " ";
  	cout << 0 << " ";
  	cout << '\n';
  	for (int i = 1; i <= N-1; i += 2)
  		cout << i << " ";
  	for (int i = 0; i <= N-1; i += 2)
  		cout << i << " ";
  	cout << '\n';
  }
  return 0;
}