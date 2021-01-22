#include <bits/stdc++.h>
using namespace std;

int n,i;
string res;

string _biner(int n){
	if (n==0) return "";
	return  _biner(n/2) + (n%2==0?'0':'1');
}

int main(){
	cin >> n;
	cout << _biner(n) << '\n';
	return 0;
}