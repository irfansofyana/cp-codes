#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
int a,b;

int main(){
	cin.tie(0);
	cin >> n >> s;
	for (i=0;i<s.size();i++) {
		if (s[i]=='1') a++;
		else b++;
	}
	cout << s.size()-2*min(a,b) << endl;
}
