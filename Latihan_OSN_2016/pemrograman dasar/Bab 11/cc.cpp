#include <bits/stdc++.h>
using namespace std;

string s;
int i,k;

int main(){
	cin >> s >> k;
	for (i = 0 ; i < s.size(); i++)
		cout << char('a'+(int(s[i])-'a'+k)%26);
	cout << '\n';
}