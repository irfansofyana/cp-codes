#include <bits/stdc++.h>
using namespace std;
int n,i,j,ans;
string s;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>s;
	if (s.length()<3) cout<<-1<<endl;
	else {
		if (s[0]==s[1] && s[1]==s[2]) ans=-1;
		else if (s[0]==s[1]) ans=-1;
		else if (s[0]==s[2]) ans=-1;
		else if (s[1]==s[2]) ans=-1;
		else {
			for (i=0;i<s.length();i++){
				if (i<3) ans++;
				else if (i>=3){
					if (s[i]!=s[i-3]) break;
					else ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}
