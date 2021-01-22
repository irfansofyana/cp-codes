#include<bits/stdc++.h>
using namespace std;

string s[1000],temp;
int n,m,i,j,k,jawaban;
int pos;
bool cek;

int main(){
	cin>>m>>n;
	for (i=0;i<n;i++) s[i]="";
	cin>>s[0];
	i=1;
	cek=true;
	pos=1;
	while (i<n){
		cin>>temp;
		for (j=0;j<=i-1;j++){
			if (s[j]==temp && cek==true){
				cek=false;
				jawaban=pos;
				break;			
			}
		}
		if (cek==true){
		s[i]=temp;
		pos++;	
		}
		if ((i+1)%m==0){
			for (j=0;j<=i;j++) s[j]="";
			i++;
		}
		else 
			i++;
	}
	if (cek==false){
		cout<<"BELI BARU"<<endl;
		cout<<jawaban+1<<endl;
	}
	else
		cout<<"BENAR"<<endl;
	return 0;
}
