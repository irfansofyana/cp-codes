#include <bits/stdc++.h>
using namespace std;
int n,i,j,m,q,k,l;
string data[5]={"AB","BBA","CAC","DBA","DB"};
string input,temp,tanya;
string jawab;
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>input; jawab="";
		for (j=0;j<input.length();j++){
			jawab=jawab+data[int(input[j])-49];
		}
		cin>>m;
		for (j=1;j<=m;j++){
			cin>>q>>tanya;
			if (tanya=="kanan"){
				for (l=1;l<=q;l++){
					temp="";
					temp=temp+jawab[jawab.length()-1];
					for (k=0;k<=jawab.length()-2;k++) temp=temp+jawab[k];
					jawab=temp;
				}
			}
			else if (tanya=="kiri"){
				for (l=1;l<=q;l++){
					temp="";
					temp=temp+jawab[1];
					for (k=2;k<=jawab.length()-1;k++) temp=temp+jawab[k];
					temp=temp+jawab[0];
					jawab=temp;
				}
			}
		}
		cout<<jawab<<endl;
	}
	return 0;
}
