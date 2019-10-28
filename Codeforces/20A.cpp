#include <bits/stdc++.h>
using namespace std;

string s,temp="";
int i,j;

int main(){
	cin.tie(0);
	cin >> s;
	i = 0;
	while (i<s.size()) {
		temp = temp+s[i];
		if (s[i]=='/') {
			j = i+1;
			while (s[j]==s[i]) j++;
			i = j;
		}
		else i++;
	}
	if (temp[temp.size()-1]=='/' && temp.size()>1) temp.erase(temp.size()-1,1);
	cout << temp << endl;
}
