#include <bits/stdc++.h>
using namespace std;

int n,i,j,maks;
int A[25],dp[25];
bool pertama;

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) 
		cin >> A[i];
	for (i = 0 ; i < n ; i++) dp[i] = 1;
	for (i = 0 ; i < n ; i++) {
		pertama = true;
		maks = 0;
		for (j = 0 ; j <= i-1 ; j++) {
			if (A[j]<A[i]) {
				if (pertama) {
					maks = dp[j];
					pertama = false;
				}
				else if (dp[j]>maks) maks = dp[j];
			}
		}
		dp[i] = maks+1;
	}
	maks = -1;
	for (i = 0 ; i < n ; i++)
		maks = max(maks,dp[i]);
	cout << maks << endl;
	return 0;
}	