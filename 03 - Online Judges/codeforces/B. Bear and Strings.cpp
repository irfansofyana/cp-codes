#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define putra std
irfan sofyana putra;
string s,temp;
int n,i,j;
int banyak;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>s;
	banyak=0;
	for (i=0;i<=s.length()-2;i++){
		for (j=i+1;j<=s.length()-1;j++){
			temp=s.substr(i,j-i+1);
			if (temp.find("bear")>=0 && temp.find("bear")<temp.length()) banyak++;
		}
	}
	cout<<banyak<<endl;
}
