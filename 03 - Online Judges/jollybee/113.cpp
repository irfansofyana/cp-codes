#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,i,j;
vector<ll> prima;
bool bil[200005];

void sieve(){
	memset(bil,true,sizeof bil);
	for (i = 2 ; i <= 200005 ; i++) {
		if (bil[i]) {
			prima.push_back(i);
			j = i;
			while (j*i<=200005) {
				bil[j*i] = false;
				j++;
			}
		}
	}
}

int main(){
	OPTIMASI
	sieve();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		bool pertama = true;
		for (i = 0 ; i < prima.size() ; i++) {
			if (prima[i]<=n) {
				if (pertama) {
					cout << prima[i];
					pertama = false;
				}
				else cout << " " << prima[i];
			} 
			else break;
		}
		cout << '\n';
	}
	return 0;
}