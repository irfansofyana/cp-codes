#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector<string> A;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0; i < n ; i++) {
		cin >> s;
		A.push_back(s);
	}
	bool cek = true;
	for (i = 1 ; i < n ; i++) {
		if (A[i]>A[i-1]){}
		else {
			cek = false; break;
		}
	}
	if (cek) cout << "INCREASING\n";
	else {
		bool cek = true;
		for (i = 1 ; i < n ; i++) {
			if (A[i]<A[i-1]){}
			else {cek = false; break;}
		}
		if (cek) cout << "DECREASING\n";
		else cout << "NEITHER\n";
	}
	return 0;
}