#include <bits/stdc++.h>
using namespace std;

int x,n,i,j;
vector<int> A;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> x){
		A.push_back(x);
		sort(A.begin(),A.end());
		int y = (int)A.size();
		if (y%2==0) cout << (A[y/2]+A[(y/2)-1])/2 << '\n';
		else cout << A[y/2] << '\n';
	}
	return 0;
}