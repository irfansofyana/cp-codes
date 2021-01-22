#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
ll t,n,i,j,tc,m;
vector<int> A;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		A.clear();
		while (n>0) {
			A.push_back(n%m);
			n/=m;
		}
		reverse(A.begin(),A.end());
		cout << "Case #" << ++tc << ": ";
		for (i = 0 ; i < A.size(); i++) 
			cout << A[i];
		cout << '\n';
	}
	return 0;
}