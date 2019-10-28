#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,jawaban,idx,nilai[1000],p;
	string temp;
	string acuan[1000];
	int pos;
	bool cek=true;
	
	memset(nilai,0,sizeof(nilai));
	for (i=0;i<=100;i++) acuan[i]="";
	cin>>m>>n;
	i=0;
	pos=1;
	idx=0;
	while (i<n){
		cin>>temp;
		if (i<=m-1){
			for (j=0;j<=m-1;j++){
				if (acuan[j]==temp && cek){
					cek=false;
					jawaban=pos;
					break;
				}
			} 
			if (cek){
				acuan[idx]=temp;
				pos++;
				idx++;
			}
			i++;
		}
		else if (i>m-1){
			if (cek){
				p=0;
				for (j=0;j<=m-1;j++){
					if (temp==acuan[j] && nilai[j]==0) nilai[j]++;
					else if (temp==acuan[j] && nilai[j]>0){
						cek=false;
						jawaban=pos;
						break;
					}
					else if (temp!=acuan[j]) p++;
				}
			}
			if (p==m){
				cek=false;
				jawaban=pos;
			}
			if (cek) pos++;
			i++;
		}	
	}
	if (cek) cout<<"BENAR"<<endl;
	else{
		cout<<"BELI BARU"<<endl;
		cout<<jawaban<<endl;
	}
}
