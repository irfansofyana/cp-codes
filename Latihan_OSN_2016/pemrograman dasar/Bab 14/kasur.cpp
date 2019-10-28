#include <bits/stdc++.h>
using namespace std;

string s;

bool cek(int _front,int _back){
	if (_front > _back) return true;
	if (s[_front]!=s[_back]) return false;
	return cek(_front+1,_back-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	cout << (cek(0,(int)s.size()-1) ? "YA":"BUKAN") << '\n';
	return 0;
}