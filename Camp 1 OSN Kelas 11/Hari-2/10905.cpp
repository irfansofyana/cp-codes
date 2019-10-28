#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string A[55];

bool comp(string a,string b) {
	string temp1="",temp2="";
	temp1 = temp1+a; temp1 = temp1+b;
	temp2 = temp2+b; temp2 = temp2+a;
	return temp1>temp2;
}

int main(){
	cin.tie(0);
	while (cin >> n && n!=0) {
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n,comp);
		for (i = 0 ; i < n ; i++) cout << A[i];
		cout << endl;
	}
	return 0;
}