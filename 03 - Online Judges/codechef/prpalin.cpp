#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
bool bil[10000005];
vector<ll> primes;

void generate(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 10000000; i++) {
		if (bil[i]) {
			primes.push_back(i);
			j = i;
			while (i*j<=10000000) {
				bil[i*j] = false;
				j++;
			}
		}
 	}
}

string ubah(ll k){
	stringstream ss;
	ss << k;
	return ss.str(); 
}

bool cek(string s){
	int forw,backw;
	forw = 0; backw = (int)s.size()-1;
	while (forw<=backw) {
		if (s[forw]!=s[backw]) return false;
		else {
			forw++; backw--;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	cin >> n;
	for (i = 0 ; i < primes.size(); i++) {
		if (primes[i]>=n) {
			if (cek(ubah(primes[i]))) {
				cout << primes[i] << '\n';
				return 0;
			}
		}
	}
	return 0;
}