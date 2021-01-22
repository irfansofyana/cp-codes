#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll andi[150005],budi[150005],coki[150005];
ll ans,tmp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		cin >> andi[i];
		andi[i] += andi[i-1];
	}
	for (i = 1 ; i <= n ; i++) {
		cin >> budi[i];
		budi[i] += budi[i-1];
	}
	for (i = 1 ; i <= n ; i++) {
		cin >> coki[i];
		coki[i] += coki[i-1];
	}
	ans = (ll)2e11;
	for (i = 1 ; i <= n-2 ; i++) {
		for (j = i+1 ; j <= n-1;  j++) {
			//pembagian : 
			//i untuk pertama, j-i untuk kedua, n-j untuk ketiga
			tmp = andi[i];
			tmp += budi[j]-budi[i];
			tmp += coki[n]-coki[j];
			ans = min(ans,tmp);
			
			tmp = andi[i];
			tmp += coki[j]-coki[i];
			tmp += budi[n]-budi[j];
			ans = min(ans,tmp);
			
			tmp = budi[i];
			tmp += andi[j]-andi[i];
			tmp += coki[n]-coki[j];
			ans = min(ans,tmp);
			
			tmp = budi[i];
			tmp += coki[j]-coki[i];
			tmp += andi[n]-andi[j];
			ans = min(ans,tmp);
			
			tmp = coki[i];
			tmp += andi[j]-andi[i];
			tmp += budi[n]-budi[j];
			ans = min(ans,tmp);
			
			tmp = coki[i];
			tmp += budi[j]-budi[i];
			tmp += andi[n]-andi[j];
			ans = min(ans,tmp);
		}
	}
	cout << ans << '\n';
	return 0;
}