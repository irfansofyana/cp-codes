#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int tc,t,n,m,i,j;
vector<int> A;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		A.clear();
		for (i = 2; i <= (int)sqrt(n); i++) {
			if (n%i==0) {
				if (i!=(n/i)) {
					A.push_back(i); A.push_back(n/i);
				}
			}
			if (A.size()==4) break;
		}
		cout << "Case #" << ++tc << ": " << n << " = " << A[0] << " * " << A[1] << " = " << A[2] << " * " << A[3] << '\n';
	}
	return 0;
}