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
int T, Q;
LL N, M;

int main(){
  OPTIMATION
  cin >> T;
  while(T--){
  	cin >> N >> M >> Q;
  	multiset<LL> diffv, diffh;
  	set<LL> v, h;
  	v.insert(0); v.insert(N);
  	h.insert(0); h.insert(M);
  	diffv.insert(N); diffh.insert(M);
  	while (Q--){
  		int tipe;
  		LL bil;
  		cin >> tipe >> bil;
  		if (tipe == 0){
  			if (v.find(bil) == v.end()){
  				auto a = v.upper_bound(bil);
  				LL selisih = *a;
  				LL n1 = (*a) - bil;
  				a--;
  				selisih -= (*a);
  				LL n2 = bil - (*a);
  				diffv.erase(diffv.find(selisih));
  				diffv.insert(n1); diffv.insert(n2);
  				v.insert(bil);
  			}
  		}else{
  			if (h.find(bil) == h.end()){
  				auto a = h.upper_bound(bil);
  				LL selisih = *a;
  				LL n1 = (*a) - bil;
  				a--;
  				selisih -= (*a);
  				LL n2 = bil - (*a);
  				diffh.erase(diffh.find(selisih));
  				diffh.insert(n1); diffh.insert(n2);
  				h.insert(bil);
  			}
  		}
  		auto aa = diffv.end();
  		aa--;
  		auto bb = diffh.end();
  		bb--;
  		cout << (*aa) * (*bb) << '\n';
  	}
  }
  return 0;
}