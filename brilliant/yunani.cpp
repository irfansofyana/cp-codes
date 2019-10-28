#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
string s;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int z(int l,int r){
	if (l < r) return z(l,(l+r)/2 - 1 ) + z((l+r)/2 + 1, r)+1;
	else return 1;
}

int main(){
	cout << z(1,10) << '\n';
}