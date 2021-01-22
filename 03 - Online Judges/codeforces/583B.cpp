#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int langkah,udah,ans,dok;
int A[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	udah = n;
	i = 0; langkah = 1; dok = 0;
	while (udah>0) {
		if (langkah==1) {
			while (i < n &&(A[i]>dok)) i++;
			if (i<n) {
				A[i] = 1000000000;
				udah--;
				dok++;
				i++;
			}
			else {
				langkah = 0;
				ans++;
				i--;
			}
		}
		else {
			while (i>=0 &&(A[i]>dok) ) i--;
			if (i>=0) {
				A[i] = 1000000000;
				udah--;
				dok++;
				i--;
			}
			else {
				langkah = 1;
				ans++;
				i++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}