#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,p;
	string s;
	int jumlah=0;
	int A[50];
	
	cin>>s;
	cin>>n;
	for (i=0;i<26;i++)
		cin>>A[i];
	for (i=0;i<s.length();i++){
		jumlah+=(i+1)*A[int(s[i])-97];
	}
	p=i+1;
	sort(A,A+26);
	for (i=s.length();i<s.length()+n;i++){
		jumlah+=p*A[25];
		p++;
	}
	cout<<jumlah<<endl;
}
