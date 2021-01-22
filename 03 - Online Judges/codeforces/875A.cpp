#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, sep[15];

int dig(ll x){
	int res = 0;
	while(x >0) {
		res++;
		x/=10;
	}
	return res;
}

int sum(ll x){
	int res = 0;
	while (x > 0) {
		res += x%10;
		x /= 10;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	sep[0] = 1;
	vector<int> jaw;
	map<ll,bool> mep;
	for (int i =  1; i <= 10; i++) sep[i] = 10*sep[i-1];
	for (int i = dig(n); i >= 1; i--) {
		if (sep[i]-1 + 9*i < n) break;
		for (int j = 1; j <= 9*i; j++) {
			if (sum(n-j) == j) {
				if (!mep[n-j]) {
					mep[n-j] =true; 
					jaw.pb(n-j);
				}
			}
		}
	}
	sort(jaw.begin(), jaw.end());
	cout << jaw.size() << '\n';
	for (int i = 0 ; i < jaw.size(); i++) {
		cout << jaw[i];
		cout << (i == (int)jaw.size()-1 ? '\n' : ' ');
	}
	return 0;
}