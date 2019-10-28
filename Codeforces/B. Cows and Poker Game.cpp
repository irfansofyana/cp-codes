#include <bits/stdc++.h>
using namespace std;
int n,i,j,all,in,fold;
string s;
int banyak;
int main(){
	cin.tie(0);ios_base::sync_with_stdio(0);
	cin>>n;
	cin>>s;
	for (i=0;i<s.length();i++) {
		if (s[i]=='A') all++;
		else if (s[i]=='F') fold++;
		else if (s[i]=='I') in++;
	}
	for (i=0;i<s.length();i++){
		if (s[i]!='F') {
			if (s[i]=='A') {
				if (in==0) banyak++;
			}
			else if (s[i]=='I') {
				in--; if (in==0) banyak++;
				in++;
			}
		}
	}
	cout<<banyak<<endl;	
}
