#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

string dummy;
ll n,i,j;
pll A[500005];
ll sudut,kecepatan;
double dp[55][2000];
double ans;

double toradian(double a){
	return (a*acos(-1))/180;
}

ll sqr(ll x){
	return x*x;
}

double jarak(ll v,double sudut){
	return abs(2 * (sqr(v)) * (sin(toradian(sudut)))* (cos(toradian(sudut))) * 9.8);
}

double cari(ll idx,ll udah) {
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	
	cin >> n;
	for (i = 0; i < n; i++) {
		ll x,y;
		cin >> x >> y;	//x kecepatan  y sudut
		A[i] = make_pair(x,y);
	}
	cout << fixed << showpoint << setprecision(12) ;
	if (dummy[1]=='1' || dummy[2]=='2' || dummy[3]=='3') {
		bool pertama = false;
		for (i = 1 ; i < (1<<n); i++){
			sudut = 0; bool udah = false; 
				for (j = 0 ; j < n ; j++) {
					if ((i&(1<<j)) > 0) {
						sudut += A[j].second;
						if (!udah) {
							udah = true;
							kecepatan = A[j].first;
						}
						else kecepatan = max(kecepatan,A[j].first);
					}
				}
				if (sudut <= 1800 && sudut > 0) {
					if (!pertama) {
						pertama = true;
						ans = jarak(kecepatan,(sudut/10.0));
					}
					else if (jarak(kecepatan,(sudut/10.0)) > ans) ans = jarak(kecepatan,(sudut/10.0));
				}
		}
		cout << ans << '\n';
		return 0;
	}
	if (dummy[4]=='4') {
	}
	return 0;
}