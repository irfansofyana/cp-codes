#include <bits/stdc++.h>
using namespace std;
string s;
int n,i,j,d,ganti;
int main(){
	cin>>n;
	cin>>s;
	i=0; d=1;
	while (i<s.length()) {
		if (s[i]=='0' && d==1) {
			s[i]='1'; d=0; ganti++; i++;
		}
		else if (s[i]=='0') i++;
		else if (s[i]=='1' && d==1) {
			s[i]='0'; d=1; ganti++; i++;
		}
		else if (s[i]=='1') i++;
	}
	cout<<ganti<<endl;
}
