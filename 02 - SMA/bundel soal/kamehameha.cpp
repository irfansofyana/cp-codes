#include <bits/stdc++.h>
using namespace std;
string s,temp;
int t,n;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		s=""; temp="";
		cin>>n;
		for (int i=1;i<=5;i++){
			temp="";
			if (i%2==1) {
				for (int j=1;j<=n;j++) temp=temp+'a';
			}
			else if (i%2==0) for (int j=1;j<=n;j++) temp=temp+'e';
			if (i==1) s=s+'k'+temp;
			else if (i==2) s=s+'m'+temp;
			else if (i==3) s=s+'h'+temp;
			else if (i==4) s=s+'m'+temp;
			else s=s+'h'+temp;
		}
		cout<<s<<endl;
	}
}
