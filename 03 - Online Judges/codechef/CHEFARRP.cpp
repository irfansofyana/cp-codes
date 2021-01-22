#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

int T,n,i,j;
int A[55];
ll sum[55],kali[55];

int main(){
	OPTIMASI
	cin >> T;
	while (T--) {
		memset(sum,0,sizeof sum); memset(kali,0,sizeof kali);
		cin >> n;
		kali[0] = 1;
		for (i = 1 ; i <= n ; i++){
			cin >> A[i];
			sum[i] = A[i]+sum[i-1];
			kali[i] = A[i]*kali[i-1];
		}
		int ans = 0;
		for (i = 1 ; i <= n ; i++) {
			for (j = i ; j <= n ; j++) {
				if (sum[j]-sum[i-1]==(kali[j]/kali[i-1])) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}