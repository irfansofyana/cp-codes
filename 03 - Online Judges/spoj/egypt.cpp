#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a[3];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while(cin >> a[0] >> a[1] >> a[2]) {
		sort(a,a+3);
		int i,nol;
		nol = 0;
		for (i = 0 ; i < 3; i++) {
			if (a[i]==0) nol++;
		}
		if (nol==3) return 0;
		else puts(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]?"right":"wrong");
	}
	return 0;
}