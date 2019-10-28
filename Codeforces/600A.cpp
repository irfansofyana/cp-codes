#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,temp,smt;
vector<string> A,B;
int n,m,i,j,idx;
vector<int> pos;

bool isbil(string s){
	int it;
	if (s.size()==0) return false;
	for (it = 0; it<s.size(); it++) {
		if (it==0 && s[it]=='0' && s.size()>1) return false;
		else if (!(s[it]>='0' && s[it]<='9')) return false;
	}
	return true;
}

int main(){
	OPTIMASI
	cin >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]==','|| s[i]==';') pos.push_back(i);
	}
	for (i = 0 ; i < pos.size(); i++) {
		temp = s.substr(idx,pos[i]-1-idx+1);
		if (isbil(temp)) A.push_back(temp);
		else B.push_back(temp);
		idx = pos[i]+1;
	}
	temp = s.substr(idx,s.size()-1-idx+1);
	if (isbil(temp)) A.push_back(temp);
	else B.push_back(temp);
	if (A.size()==0) cout << '-' << '\n';
	else {
	cout << '"' ; for (i = 0 ; i < A.size(); i++) {
		cout << A[i];
		if (i==A.size()-1) cout << '"' << '\n';
		else cout << ',';
	}
	}
	if (B.size()==0) cout << '-' << '\n';
	else {
	cout << '"' ; for (i = 0 ; i < B.size(); i++) {
		cout << B[i];
		if (i==B.size()-1) cout << '"' << '\n';
		else cout << ',';
	}
	}
	return 0;
}