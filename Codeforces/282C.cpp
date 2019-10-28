#include <bits/stdc++.h>

using namespace std;

string a, b;

bool cek(string s){
	for (int i = 0 ; i < s.size(); i++) 
		if (s[i] == '1') return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	if (a.size() != b.size()) cout << "NO\n";
	else if (a == b) cout << "YES\n";
	else if (!cek(a) || !cek(b)) cout << "NO\n";
	else cout << "YES\n"; 
	return 0;
}