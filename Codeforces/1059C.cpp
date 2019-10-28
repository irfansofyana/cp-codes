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
const int MAXN = 1e6;

int N;
int arr[MAXN+5];


int main(){
  OPTIMATION
	cin >> N;
	for (int i = 1; i <= N; i++){
		int j = i;
		int k = 1;
		while (j%2 == 0){
			k *= 2;
			j /= 2;	
		}
		arr[k]++;
	}  
	if (N == 3) cout << "1 1 3\n";
	else {
		for (int i = 1; i <= N; i *= 2){
			for (int j = 1; j <= arr[i]; j++){
				cout << i << " ";
			}
		}
		cout << '\n';
	} 
  return 0;
}