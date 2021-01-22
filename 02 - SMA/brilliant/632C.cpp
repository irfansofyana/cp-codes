#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
vector<string> nama;

bool comp(string a,string b){
	string s1 = "";
	string s2 = "";
	s1 = s1+a; s1 = s1+b;
	s2 = s2+b; s2 = s2+a;
	if (s1 < s2) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n  ; i++) {
		cin >> s;
		nama.push_back(s);
	}
	sort(nama.begin(),nama.end(),comp);
	s = "";
	for (i = 0 ; i < n ; i++) {
		//cout << nama[i] << '\n';
		s = s+nama[i];
	}
	cout << s << '\n';
	return 0;
}