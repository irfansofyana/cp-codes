#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s[1000];
	int i,j,k;
	int banyak=0;
	bool p=true;
	for (i=0;i<3;i++){
		getline(cin,s[i]);
		banyak=0;
		for (j=0;j<s[i].length();j++){
			if (s[i][j]=='o' || s[i][j]=='i' || s[i][j]=='a' || s[i][j]=='u' || s[i][j]=='e')
				banyak++;
		}
		if (i==0){
			if (banyak!=5){
				p=false;break;
			}
		}
		else if (i==1){
			if (banyak!=7){
				p=false;break;
			}
		}
		else if (i==2){
			if (banyak!=5){
				p=false;break;
			}
		}
	}
	if (p)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
