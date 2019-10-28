#include <bits/stdc++.h>
using namespace std;
int  main(){
	string s1,s2;
	int n,i,j;
	int A[1000],B[1000];
	bool p=true;
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	
	getline(cin,s1);
	getline(cin,s2);
	for (i=0;i<s1.length();i++){
		A[int(s1[i])]++;	
	}
	for (i=0;i<s2.length();i++){
		B[int(s2[i])]++;
	}
	for (i=65;i<=90;i++){
		if (B[i]>A[i])
			p=false;
	}
	if (p==false){
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		for (i=97;i<=122;i++){
			if (B[i]>A[i])
				p=false;
		}
		if (p)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
