#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool _CAN[1000005];
ll frek[1000005];
ll depan[1000005],belakang[1000005];
ll bdepan[1000005],bbelakang[1000005];
ll n,m,i,j,maks,ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	memset(_CAN,true,sizeof _CAN);
	for (i = 0 ; i < n ; i++) {
		ll x;
		cin >> x;
		_CAN[x] = false;
		frek[x]++;
	}
	for (i = 1; i <= m ; i++) {
		if (_CAN[i]) break;
	}
	if (i==m+1) {cout << -1 << '\n';}
	else {
		bdepan[0] = 0; depan[0] = 0;
		for (i = 1 ; i <= m ; i++) {
			bdepan[i] = bdepan[i-1] + frek[i];
			depan[i] = depan[i-1] + frek[i] * i;
		}
		bbelakang[m+1] = 0; belakang[m+1] = 0;
		for (i = m ; i >= 1 ; i--) {
			bbelakang[i] = bbelakang[i+1] + frek[i];
			belakang[i] = belakang[i+1] + frek[i]*i;
		}
		maks = -1000000000; ans = 0;
		for (i = 1 ; i <= m ; i++) {
			if (_CAN[i]) {
				ll temp = 0;
				temp += i*bdepan[i-1] - depan[i-1];
				temp += belakang[i+1] - bbelakang[i+1]*i;
				if (temp > maks) {
					maks = temp;
					ans = i;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}