#include <bits/stdc++.h>
using namespace std;
int main(){
	int set,n,i,j;
	string s[100000],k="";
	bool p=false;

	cin>>n;
	for (i=0;i<n;i++){
		cin>>s[i];	
	}
	j=0;
	while (s[0][j]==s[1][j]){
		j++;
	}
	set=j-1;
	for (i=0;i<=j-1;i++)
		k=k+s[0][i];
	while (p==false){
		for (j=2;j<n;j++){
			
		}
	}
}
