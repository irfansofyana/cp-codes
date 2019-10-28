#include <bits/stdc++.h>
#define MAXN 1000000000
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int x,temp;
int ans,i;
vector<int> A;

int main(){
	OPTIMASI
	cin >> x; 
	while (x>0) {
		A.push_back(x);
		x/=2;
	}
	reverse(A.begin(),A.end());
	ans = 1;
	for (i = 1 ; i < A.size(); i++) {
		if (A[i]!=2*A[i-1]) {
			ans += A[i]-2*A[i-1];
		}
	}
	cout << ans << '\n';
	return 0;
}