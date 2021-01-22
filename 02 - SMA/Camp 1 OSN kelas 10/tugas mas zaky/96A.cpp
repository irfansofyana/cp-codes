#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,temp,j;
	string s;
	bool p=true;
	char set;
	
	cin>>s;
	i=0;
	while (i<s.length()){
		set=s[i];
		p=true;
		j=i+1;
		temp=j;
		while (j<=temp+5){
			if (s[j]!=set){
				i=j;
				p=false;
				break;
			}
			else
				j++;
		}
		if (p){
			cout<<"YES"<<endl;
			break;
		}
	}
	if (p==false)
		cout<<"NO"<<endl;
	return 0;
}
