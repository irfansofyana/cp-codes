#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;

bool cek(ll x){
	ll frek = 0;
	for (i = 1; i <= (ll)sqrt(x); i++){
		if (x%i==0){
			j = x/i;
			if (i!=j) frek+=2;
			else frek++;
		}
		if (frek >= 5) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	generate();
	cin >> n;
	while (n--) {
		cin >> m;
		cout << (cek(m) ? "YA" : "BUKAN" ) << '\n';
	}
	return 0;
}