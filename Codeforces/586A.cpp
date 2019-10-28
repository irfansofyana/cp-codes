#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[105];
int bawah,atas,ans;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	i = 0;
	while (A[i]==0 && i<n) i++;
	bawah = i;
	i = n-1;
	while (A[i]==0 && i>=0) i--;
	atas = i;
	i = bawah;
	while (i<=atas) {
		if (A[i]==1) {
			ans++;
			i++;
		}
		else {
			int frek = 1;
			j = i+1;
			while (j<=atas && A[j]==0) {
				frek++;
				j++;
			}
			if (frek>=2) i = j;
			else {
				ans++;
				i++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}