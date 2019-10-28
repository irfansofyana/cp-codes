#include <bits/stdc++.h>
using namespace std;

long long sum,n,i,j,ans;
long long A[100005];

int main(){
	cin >> n;
	for (i=0;i<n;i++) cin >> A[i];
	sort(A,A+n);
	i = 0;
	while (i<n) {
		if (A[i]>=sum) {
			ans++;
			sum+=A[i];
			i++;
		}
		else i++;
	}
	cout << ans << endl;
}
