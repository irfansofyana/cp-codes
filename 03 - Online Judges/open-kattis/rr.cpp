#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j,maks;
string s;
vector<int>  A;

int sqr(int x){
	return x*x;
}

int main(){
	OPTIMASI
	while (getline(cin,s)) {
		maks = max(maks,(int)s.size());
		A.push_back((int)s.size());
	}
	//for (i = 0 ; i < A.size(); i++) cout << A[i] << endl;
	//cout << endl;
	int ans = 0;
//	cout << maks << '\n' ;
	for (i = 0 ; i < A.size()-1 ; i++) {
		ans += sqr(maks-A[i]);
	}
	cout << ans << '\n';
	return 0;
}