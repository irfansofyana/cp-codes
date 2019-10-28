#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,j;
	string s;
	string jawaban;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>s;
		jawaban="";
		for (j=0;j<s.length();j++){
			if (j%2==0)
				jawaban=jawaban+char(int(s[j])-32);
			else
				jawaban=jawaban+s[j];
		}
		cout<<jawaban<<endl;
	}
}
