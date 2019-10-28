#include <bits/stdc++.h>
using namespace std;
string s,t,temp="";
string ans="";
int i,j,bawa,sum;
string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	for (int mm=1;mm<=50;mm++){
	cin>>s>>t;
	if (s.length()<=t.length()){
		for (j=0;j<t.length()-s.length();j++){
			temp=temp+'0';
		}
		s=temp+s;
		for (j=s.length()-1;j>=0;j--){
			sum=int(s[j])-48+int(t[j])-48+bawa;
			bawa=sum/10;
			if (j==0 && sum>=10) {
				ans=ubah(sum)+ans;
			}
			else ans=char(int(sum%10)+48)+ans;
		}
		cout<<ans<<endl;
	}
	else {
		for (j=0;j<s.length()-t.length();j++){
			temp=temp+'0';
		}
		t=temp+t;
		for (j=t.length()-1;j>=0;j--){
			sum=int(t[j])-48+int(s[j])-48+bawa; 
			bawa=sum/10;
			if (j==0 && sum>=10) {
				ans=ubah(sum)+ans;
			}
			else ans=char(int(sum%10)+48)+ans;
		}
		cout<<ans<<endl;
	}
	}
}
