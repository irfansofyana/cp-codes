#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int temp;
vector<int> A;

int main(){
	OPTIMASI
	
	while (cin >> n >> m){
	A.clear();
	if (n==1) {
		A.push_back(0); A.push_back(m);
	}
	else {
		while (n!=1) {
			A.push_back(n/m);
			n -= m*(n/m);
			if (n==1) {
				A.push_back(m);
				break;
			}
			temp = n;
			n = m;
			m = temp;
		}
	}
	cout << "[" << A[0] << ';';
	for (i = 1 ; i < A.size(); i++) {
		if (i==A.size()-1) {
			cout << A[i] << ']';
		}
		else cout << A[i] << ',';
	}
	cout << '\n';
	}
	return 0;
}