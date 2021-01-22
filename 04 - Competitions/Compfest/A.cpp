#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;

int n,i,j,awal,akhir;
string s;

bool cek(char c){
	return (c == 'a' || c == 'A' || c == 'I' || c=='i' || c=='u' || c=='U' || c=='e' || c == 'E' || c=='o' || c=='O');
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n ;
	getline(cin,s);
	getline(cin,s);
//	cout << s << '\n';
	i = 0;
	while (i < s.size() && !cek(s[i])) {
		i++;
	}
	awal = i;
	i = (int)s.size()-1;
	while (i >= 0 && !cek(s[i])) {
		i--;
	}
	akhir = i;
	cout << s.substr(awal,akhir-awal+1) << '\n';
	return 0;
}
