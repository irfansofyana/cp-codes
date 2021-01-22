#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j;
	string s;
	char A[1000];
	int banyak=0;
	
	cin>>t;
	for (i=0;i<t;i++){
		cin>>s;
		for (j=0;j<s.length();j++){
			A[j]=s[j];
		}
		sort(A,A+s.length());
		banyak=1;
		for (j=0;j<s.length()-1;j++){
			if (A[j]!=A[j+1])
				banyak++;
		}
		cout<<banyak<<endl;
	}
}
