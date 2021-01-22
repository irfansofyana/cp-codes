#include <bits/stdc++.h>
using namespace std;
int A[200];

int main(){
	string s1,s2;
	int i,banyak=0;
	cin>>s1;
	memset(A,0,sizeof(A));
	for (i=0;i<s1.length();i++){
		A[int(s1[i])]++;		
	}
	cin>>s2;
	for (i=0;i<s2.length();i++){
		if (A[int(s2[i])]>=1) A[int(s2[i])]--;
		else banyak++;
	}
	cout<<banyak<<endl;
}
