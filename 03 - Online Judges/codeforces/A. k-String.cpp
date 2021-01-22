#include <bits/stdc++.h>
using namespace std;
string s,jw;
int n,k,i;
bool ans=true;
int A[30];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>k;
	cin>>s;
	for (i=0;i<s.length();i++){
		A[int(s[i])-96]++;
	}
	if (s.size()%k!=0) cout<<-1<<endl;
	else {
		ans=true;
		for (i=1;i<=26;i++){
			if (A[i]!=0 && A[i]%k!=0){
				cout<<-1<<endl;
				ans=false;
				break;
			}
		}
		if (ans) {
			for (i=1;i<=26;i++){
				if (A[i]!=0){
					for (int j=1;j<=A[i]/k;j++) jw=jw+char(i+96);
				}
			}
			for (i=1;i<=k;i++) cout<<jw;
			cout<<endl;
		}
	}
}
