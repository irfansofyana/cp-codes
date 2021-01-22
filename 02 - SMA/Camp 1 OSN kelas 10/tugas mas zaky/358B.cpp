#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,i,j;
	string p,bener="";
	string s;
	
	cin>>n;
	bener+="<3"; 
	for (i=0;i<n;i++){
		cin>>s;
		bener+=s+"<3";
	}
	cin>>p;
	j=0;
	for (i=0;i<p.length()&&j<bener.length();i++){
		if (p[i]==bener[j]){
			j++;
		}
	}
	if (j==bener.length())
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
