#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
int a[6];

int gcd(int a,int b){
	return (b==0?a:gcd(b,a%b));
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		for (i = 0 ; i < 5 ; i++) cin >> a[i];
		int ans = 1;
		for (i = 0 ; i <5 ; i++) {
			ans = (ans*a[i])/gcd(ans,a[i]);
		}
		cout << "Case #" << ++tc << ": " << ans+2000 << '\n';
	}
	return 0;
}