#include <bits/stdc++.h>
using namespace std;
string s,ans;
int n,i,j,idx;
bool ada=false,jwb=false;
int main(){
	cin.tie(0);
	cin>>s;
	i=0;
	while (i<s.size()-1){
		if ((int(s[i])-48)%2==0){
			ada=true;
			if (s[i]>s[s.size()-1]) {
				idx=i;
				i++;
			}
			else {
				jwb=true;
				ans=s.substr(0,i)+s[s.size()-1]+s.substr(i+1,s.size()-2-(i+1)+1)+s[i];
				break;
			}
		}
		else i++;
	}
	if (!ada) cout<<-1<<endl;
	else if (!jwb){
		cout<<s.substr(0,idx)+s[s.size()-1]+s.substr(idx+1,s.size()-2-(idx+1)+1)+s[idx]<<endl;
	}
	else cout<<ans<<endl;
}
