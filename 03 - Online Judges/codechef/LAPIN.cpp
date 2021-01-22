#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	string s,p,q;
	int A[1000],B[1000];
	bool cek;
	
	cin>>n;
	for (i=0;i<n;i++){
		s="";
		cin>>s;
		cek=true;
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		if (s.length()%2==0){
			for (j=0;j<s.length()/2;j++)
				A[int(s[j])]++;
			for (j=s.length()/2;j<s.length();j++)
				B[int(s[j])]++;
			for (j=97;j<=122;j++){
				if (A[j]!=B[j]){
					cek=false;
					break;
				}
			}
			if (cek)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			for (j=0;j<s.length()/2;j++)
				A[int(s[j])]++;
			for (j=s.length()/2+1;j<s.length();j++)
				B[int(s[j])]++;
			for (j=97;j<=122;j++){
				if (A[j]!=B[j]){
					cek=false;
					break;
				}
			}
			if (cek)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}
