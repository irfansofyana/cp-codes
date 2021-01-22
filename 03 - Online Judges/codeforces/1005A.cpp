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
int arr[1005];
vector<int> ans;

int main(){
  OPTIMATION
	cin >> N;
	for (int i = 0 ; i < N; i++) cin >> arr[i];
	int i = 0;
	while (i < N){
		int j = i + 1;
		while (j < N && arr[j] > arr[j-1]) j++;
		ans.pb(arr[j-1]);
		i = j;
	}  
	cout << ans.size() << '\n';
	for (int i = 0 ; i < (int)ans.size(); i++){
		cout << ans[i];
		cout << (i == (int)ans.size()-1 ? '\n' : ' ');
	}
  return 0;
}