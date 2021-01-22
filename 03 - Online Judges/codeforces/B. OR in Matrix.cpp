#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,p;
int A[1000][1000],B[1000][1000];
int keisi;
bool jawab=true;

void isi(){
	for (i=0;i<m;i++){
		for (j=0;j<n;j++)
			A[i][j]=2;
	}
}
bool cek(int p,int q){
	bool cek1=false;
	for (i=0;i<n;i++){
		if (A[p][i]==2){
			cek1=true;
			break;
		}
	}
	if (cek1)
		return true;
	else{
	for (i=0;i<m;i++){
		if (A[i][q]==2){
			cek1=true;
			break;
			}
	}
		return cek1;
	}
}

void cek1(){
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (B[i][j]==1){
				if (cek(i,j)==false){
					jawab=false;
					break;
				}		
			}
		}
		if (jawab==false)
			break;
	}
}	
void isinol(){
	
				for (k=0;k<n;k++){
					A[i][k]=0;
				}
				for (k=0;k<m;k++){
					A[k][j]=0;
				}
}
void cetak(){
	for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				if (j!=n-1){
					if (A[i][j]==0)
						cout<<0<<" ";
					else
						cout<<1<<" ";
				}
				else{
					if (A[i][j]==0)
						cout<<0<<endl;
					else
						cout<<1<<endl;
				}
				}
		}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin>>m>>n;
	isi();
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>B[i][j];
			if (B[i][j]==0){
				isinol();
			}
		}
	}
	jawab=true;
	cek1();
	if (jawab==false)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		cetak();
	}
}
