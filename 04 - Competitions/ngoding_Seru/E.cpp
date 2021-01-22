#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll now,n,m,i,j,mini,temp;
ll A[100005],B[5],ans;

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n,comp);
	i = 1;
	while (i<n-1) {
		if (A[now]-A[i]<A[i]-A[i+1]) {
			temp = A[now]-A[i];
			i++;
		}
		else if (A[now]-A[i]>A[i]-A[i+1]) {
			now = i;
			ans += temp;
			temp = 0;
			i++;
		}
		else i++;
	}
	ans += A[now]-A[i];
	cout << ans << '\n';
	return 0;
}