#include <bits/stdc++.h>
using namespace std;
int t,n,i,j,depan,belakang;
string A[100010],s,temp;
int banyak[100010];
int ubah(char c){
	if (c=='A' || c=='B' || c=='C') return 2;
	else if (c=='D' || c=='E' || c=='F') return 3;
	else if (c=='G' || c=='H' || c=='I') return 4;
	else if (c=='J' || c=='K' || c=='L') return 5;
	else if (c=='M' || c=='N' || c=='O') return 6;
	else if (c=='P' || c=='S' || c=='R') return 7;
	else if (c=='T' || c=='U' || c=='V') return 8;
	else if (c=='W' || c=='X' || c=='Y') return 9;
} 
int main(){
	cin>>t;
	cout<<endl;
	for (i=1;i<=t;i++){
		cin>>n;
		for (j=1;j<=n;j++){
			cin>>s; depan=0; belakang=0; temp="";
			for (int k=0;k<s.length();k++){
				if (s[k]!='-') {
					if (depan<3) depan++;
					if (s[k]>='A' && s[k]<='Z') temp=temp+char(ubah(s[k])+48);
					else temp=temp+s[k];
					if (depan==3){
						temp=temp+'-';
						depan++;
					}
				}  
			}
			cout<<temp<<endl;
			A[j]=temp;
		}
	}
}
