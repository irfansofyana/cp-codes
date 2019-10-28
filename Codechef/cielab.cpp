#include <bits/stdc++.h>
using namespace std;

int a,b;
string s;
string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	int hasil = a-b;
	s = ubah(hasil);
	if (s[0]=='9') cout << '8';
	else cout << char((int)s[0]+1);
	cout << s.substr(1,(int)s.size()-1) << '\n';
	return 0;
}