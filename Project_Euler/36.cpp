#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll ans;

string ubahh(ll k){
	string res = "";
	while (k>0) {
		res = (k%2==0?'0':'1')+res;
		k /= 2;
	}
	return res;
}

bool cek(string k){
	ll z,zz;
	z = 0; zz = k.size()-1;
	while (z<=zz) {
		if (k[z]!=k[zz]) return false;
		else {
			z++;
			zz--;
		}
	}
	return true;
}

string ubah(ll k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	ios_base::sync_with_stdio(0);
	for (i = 1 ; i <= 1000000; i++) {
		string temp1,temp2;
		j = i;
		temp1 = ubah(j);
		temp2 = ubahh(j);
		if (cek(temp1) && cek(temp2)) ans += i;
	}
	cout << ans << '\n';
}