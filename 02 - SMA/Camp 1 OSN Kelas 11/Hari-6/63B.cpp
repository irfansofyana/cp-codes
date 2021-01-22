#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[105],B[105];
int ans,x;
bool bisa;

int main(){
	cin.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		A[x]++;
	}
	while (A[k]!=n) {
		ans++;
		bisa = false;
		for (i = 1 ; i <= k-1 ; i++) {
			if (i==1) {
				if (A[i]>=1) {
					A[i]--;
					A[i+1]++;
					bisa = true;
				}
			}
			else {
				if (!bisa && A[i]>=1) {
					A[i] --;
					A[i+1]++;
					bisa = true;
				} 
				else if (bisa && A[i]>=2) {
					A[i]--;
					A[i+1]++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}