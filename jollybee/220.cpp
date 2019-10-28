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
	i = n-1;
	while (i>=0) {
		ans++;
		j = i-1;
		while (j>=0 && A[i]-A[j]<=2) j--;
		i = j;
	}
	cout << ans << '\n';
	return 0;
}