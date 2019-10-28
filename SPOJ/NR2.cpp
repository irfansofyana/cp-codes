#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

const int N = (int)1e6;

typedef long long ll;

ll n,i,j,k;
ll dan,atau;
string adan,aatau;
bool ganti;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	bool cekk = false;
	while (n--) {
		cin >> k;
		if (!cekk) {
			cekk = true;
			dan = k;
		}
		else dan &= k;
		atau |= k; 
	}
	adan = aatau = "";
	ganti = false;
	if (dan == 0) ganti = true;
	while (dan > 0) {
		adan = (dan%2 == 0 ? '0' : '1') + adan;
		dan /= 2;
	}
	while (atau > 0) {
		aatau = (atau%2 == 0 ? '0' : '1') + aatau;
		atau /= 2;
	}
//	cout << adan << " " << aatau << '\n';
	if (ganti) {
		for (i = 0 ; i < aatau.size(); i++) 
			adan = adan + '0';
	}
	if (adan.size() > aatau.size()) {
		for (i = 0 ; i < (ll)adan.size()- (ll)aatau.size(); i++)
			aatau = '0' + aatau;
	}
	else if (aatau.size() > adan.size()) {
		for (i = 0 ; i < (ll)aatau.size()- (ll)adan.size(); i++)
			adan = '0' + adan;
	}
	ll ans = 0;
	j = 1;
	for (i = (ll)adan.size()-1; i >= 0 ; i--) {
		if (adan[i] == '0' && aatau[i] == '1') ans += j;
		j *= 2;
	}
	cout << ans << '\n';
	return 0;
}
