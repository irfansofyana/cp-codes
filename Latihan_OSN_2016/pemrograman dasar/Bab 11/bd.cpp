#include <bits/stdc++.h>
using namespace std;

string s;
int i;

int main(){
	cin >> s;
	for (i = 0 ; i < s.size(); i++){
		if (s[i] >= 'a' && s[i] <= 'z') cout << char((int)s[i]-32);
		else cout << char((int)s[i]+32);
	}
	cout << '\n'; return 0;
}