#include <bits/stdc++.h>
using namespace std;

int n,k,sumall,sumk,l,r;
int i,j,temp;
int ans[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> l >> r >> sumall >> sumk;
	
	//cout << n << " " << k << " " << l << " " << r << " "<< sumall << " " << sumk << '\n';
	for (i = 1 ; i <= n ; i++) ans[i] = l;
	
	if (n!=k) {
		
		temp = (sumall-sumk)-(n-k)*l;
		temp /= (n-k);
		for (i = k+1; i <= n ; i++) {
			ans[i] += temp;
		}
		//for (i = 1 ; i <= n ; i++) {
			//cout << ans[i] << " ";
		//}
		j = k+1;
		for (i = 1; i<= (sumall-sumk)%(n-k); i++){
			ans[j]++;
			j++;
		}
		temp = sumk-k*l;
		temp /= k;
		for (i = 1; i <= k ; i++) {
			ans[i] += temp;
		}
		j = 1;
		for (i = 1 ; i <= (sumk-k*l)%k; i++){
			ans[j]++;
			j++;
		}
	}
	else if (n==k){
		temp = sumall-l*n;
		temp /= n;
		for (i = 1 ; i <= n ; i++) {
			ans[i] += temp;
		}
		temp = (sumall-l*n)%n;
		for (i = 1 ; i <= temp ; i++) {
			ans[i]++;
		}
	}
	for (i = 1 ; i <= n ; i++) {
			cout << ans[i];
			(i==n) ? cout << '\n' : cout << ' ';
	}
	return 0;
}