#include <bits/stdc++.h>
using namespace std;

string s,temp,hasil;
int n,i,j;
int idx;

int main(){
	cin >> s >> temp ;
	hasil = "";
	sort(s.begin(),s.end());
	for (i = 0 ; i < s.size() ; i++) {
		if (s[i]=='0') j++;
		else {
			idx = i;
			break;
		}
	}
	hasil = hasil+s[idx];
	for (i = 0 ; i < j ; i++) hasil = hasil+'0';
	for (i = idx+1 ; i < s.size() ; i++) hasil = hasil+s[i];
	if (hasil==temp && temp.size()==s.size() || (s=="0" && temp=="0")) puts("OK");
	else puts("WRONG_ANSWER");
	return 0;
}