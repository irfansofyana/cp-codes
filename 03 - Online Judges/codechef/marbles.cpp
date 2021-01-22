#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
ll n,k,hasil;
ll i,j;

ll gcd(ll a,ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}

ll kombinasi(ll a,ll b){
	ll atas,bawah;
	atas = 1; bawah = 1;
	if (a>2*b) {
		j = b;
		for (i = a; i >= a-b+1; i--) {
			atas *= i;
			bawah *= j;
			ll temp = gcd(atas,bawah);
			atas /= temp; bawah /= temp;
			j--;
		}
	}
	else {
		j = a-b;
		for (i = a; i >= a-(a-b)+1; i--) {
			atas *= i;
			bawah *= j;
			ll temp = gcd(atas,bawah);
			atas /= temp; bawah /= temp;
			j--;
		}
	}
	return atas/bawah;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ll temp = n;
		n--; k = temp-k;
		cout << kombinasi(n,k) << '\n';
	}
	return 0;
}