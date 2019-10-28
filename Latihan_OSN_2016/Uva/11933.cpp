#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
vector<ll> indeks;
string s;
ll A[55],B[55];

string ubah(ll k){
	if (k==0) return "";
	else if (k%2==0) return ubah(k/2) + '0';
	else if (k%2==1) return ubah(k/2) + '1';
}

ll dua_pangkat(ll x){
	ll ret = 1;
	for (ll z = 1 ; z <= x; z++) ret *=2;
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n, n > 0) {
		indeks.clear();
		s = ubah(n);
		for (i = (ll)s.size()-1 ; i >=0 ; i--){
			if (s[i]=='1') indeks.push_back((ll)s.size()-1-i);
		}
		memset(A,0,sizeof A); memset(B,0,sizeof B);
		for (i = 0 ; i < indeks.size(); i += 2) 
			A[indeks[i]] = 1;
		for (i = 1; i < indeks.size(); i+=2)
			B[indeks[i]] = 1 ;
		/*for (i = (int)s.size()-1 ; i >=0 ; i--){
			cout << A[i];
		}
		cout << '\n';
		for (i = (int)s.size()-1 ; i >=0 ; i--){
			cout << B[i];
		}
		cout << '\n'; */
		ll a = 0;
		for (i = 0 ; i < s.size(); i++) a += dua_pangkat(i)*A[i];
		ll b = 0;
		for (i = 0; i < s.size(); i++) b += dua_pangkat(i)*B[i];
		cout << a << " " << b << '\n';
	}
	return 0;
}