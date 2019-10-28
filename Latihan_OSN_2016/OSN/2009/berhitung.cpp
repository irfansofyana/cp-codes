#include <bits/stdc++.h>
using namespace std;

int n,m,x;
int i,j;
vector<int> A;
	
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> x;
	for (i = 0 ; i < n ; i++) A.push_back(i);
	i = 0;
	while (x-- && A.size() > 1) {
		for (j = 0 ; j < m ; j++) {
			i++;
			if (i==n+1) i = 1;
		}
		A.erase(A.begin() + i-1);i--; n--;
	}
	for (i = 0 ; i < A.size(); i++) cout << A[i] + 1 << '\n';
	return 0;
}