#include <bits/stdc++.h>
using namespace std;
int n,i;
int A[27];
string s;
int main(){
	cin.tie(0);
	cin>>n;
	cin>>s;
	for (i=0;i<s.length();i++){
		if (s[i]>='a' && s[i]<='z'){
			A[int(s[i])-96]++;
		}
		else if (s[i]>='A' && s[i]<='Z'){
			A[int(s[i])-64]++;
		}
	} bool cek=true;
	for (i=1;i<=26;i++)
		if (A[i]==0){
			cek=false;
			cout<<"NO"<<endl;
			break;
		}
	if (cek) cout<<"YES"<<endl;
}
