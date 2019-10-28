#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j;
int A[100005];
int ans;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	i = 0;
	while (i<n) {
		j = i+1;
		int temp = 1;
		while (A[j]>=A[j-1] && j<n) {
			temp++;
			j++;
		}
		ans = max(ans,temp);
		i = j;
	}
	cout << ans << '\n';
	return 0;
}