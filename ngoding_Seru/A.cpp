#include <bits/stdc++.h>
using namespace std;

vector<int> neg,nol,pos;
int n,i,j,x;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		if (x<0) neg.push_back(x);
		else if (x==0) nol.push_back(x);
		else pos.push_back(x);
	}
	for (i = 0 ; i < neg.size(); i++) cout << neg[i] << '\n';
	for (i = 0 ; i < nol.size(); i++) cout << nol[i] << '\n';
	for (i = 0 ; i < pos.size(); i++) cout << pos[i] << '\n';
	return 0;
 }