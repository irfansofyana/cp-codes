#include <bits/stdc++.h>
using namespace std;
string s;
int i;

int main(){
	getline(cin,s);
	for (i = 0 ; i < s.size() ; i++) {
		if (i%2==0) cout << s[i];
	}
	cout << endl;
	return 0;
}