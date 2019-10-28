#include <bits/stdc++.h>
using namespace std;
int main(){
	int b,n,t,j,i;
	string s;
	int idx[100];
	char temp;
	
	cin>>n>>t;
	cin>>s;
	while (t>0){
		b=1;
		for (i=0;i<=s.length()-1;i++){
			if ((s[i]=='G') && (s[i-1]=='B'))
				{
					idx[b]=i;
					b++;
				}
		}
		for (j=1;j<=b-1;j++){
			temp=s[idx[j]];
			s[idx[j]]=s[idx[j]-1];
			s[idx[j]-1]=temp;
		}
		t=t-1;
	}
	cout<<s<<endl;
}