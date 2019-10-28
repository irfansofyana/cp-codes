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
int N, X, Y, P, Q, ans;
map<double, int> mep;
map<double, int> ny;
bool ada;

int main(){
  OPTIMATION
  cin >> N >> X >> Y;
  ada = false;
  for (int i = 0 ; i < N; i++){
  	double gradien;
  	cin >> P >> Q;
  	if (P == X && Q == Y && !ada){
  		ada = true;
  		ans++;
  		continue;
  	} 
  	gradien = ((1.00)*(Y-Q))/(1.00*(X-P));
  	if (mep.find(gradien) == mep.end()) {
  		ans++;
  		if (P > X) mep[gradien] = 1;
  		else if (P < X) mep[gradien] = 2;
  		else {
  			mep[gradien] = 3;
  			ny[gradien] = Q;
  		}
  	}
  	else {
  		if (mep[gradien] == -1) continue;
  		if (mep[gradien] == 1) {
  			if (P < X) {
  				ans++;
  				mep[gradien] = -1;
  			}
  		}
  		else if (mep[gradien] == 2){
  			if (P > X) {
  				ans++;
  				mep[gradien] = -1;
  			}
  		}
  		else {
  			if (ny[gradien] > Y && Q < Y){
  				ans++;
  				mep[gradien] = -1;
  			}
  			else if (ny[gradien] < Y && Q > Y){
  				ans++;
  				mep[gradien] = -1;
  			}
  		}
  	}
  } 
  cout << ans << '\n';
  return 0;
}