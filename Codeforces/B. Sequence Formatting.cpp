#include <bits/stdc++.h>
using namespace std;

string s,ans="";
int i,j,k;

int main() {
	getline(cin,s);
	i = 0;
	ans = "";
	while (i<s.size()) {
		if (s[i]==',') {
			if (i==s.size()-1) ans=ans+',';
			else ans=ans+", ";
			i++;
		}
		else if (s[i]=='.'){
			if (ans[ans.size()-1]==' ') ans=ans+"...";
			else if (i!=0) ans=ans+" ...";
			else ans=ans+"...";
			i+=3;
		}
		else if (s[i]>='0' && s[i]<='9' && s[i-1]==' ' && i>=1){
			j = i-1;
			while (s[j]==' ') j--;
			if (s[j]==',' || s[j]=='.') {
				ans=ans+s[i];
				i++;
			}
			else {
				ans=ans+" "+s[i];
				i++;
			}
		}
		else if (s[i]>='0' && s[i]<='9') {
			ans=ans+s[i];
			i++;
		} 
		else i++;
	}
	cout << ans << endl;
}
