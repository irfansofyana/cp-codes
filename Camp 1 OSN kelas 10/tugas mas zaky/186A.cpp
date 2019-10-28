#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,banyak=0;
	string s1,s2;
	int A[100000],B[100000];
	bool p=true;
	
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	cin>>s1;
	cin>>s2;
	for (i=0;i<s1.length();i++){
		A[int(s1[i])]++;
	}
	for (i=0;i<s2.length();i++){
		B[int(s2[i])]++;
	}
	if (s1.length()!=s2.length())
		cout<<"NO"<<endl;
	else{
	for (i=97;i<=122;i++){
		if (B[i]!=A[i]){
			p=false;
			break;
		}
	}
	if (p==false)
		cout<<"NO"<<endl;
	else{
		banyak=0;
		for (i=0;i<s1.length();i++){
			if (s1[i]!=s2[i])
				banyak++;
		}
		if (banyak>2)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	}
	return 0;
}
