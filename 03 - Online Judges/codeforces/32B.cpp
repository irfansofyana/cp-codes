#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;

int main(){
	cin.tie(0);
	cin >> s;
	i = 0;
	while (i<s.size()) {
		if (s[i]=='.') cout<<"0";
		else if (s[i]=='-' && s[i+1]=='-') {
			cout<<"2";
			i++;
		}
		else if (s[i]=='-' && s[i+1]=='.') {
			cout<<"1";
			i++;
		}
		i++;
	}
	cout << "\n";
	return 0;
}
