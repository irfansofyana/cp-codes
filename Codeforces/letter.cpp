#include <bits/stdc++.h>
using namespace std;
int main(){
	int bintang=0,awal,akhir,maks=-1;
	int i,j,m,n,k=0,temp1,temp2;
	char A[100][100];
	bool ada=false,kunci=false;
	int  B[100],depan,ujung=-1;
	
	memset(B,0,sizeof(B));
	cin>>n>>m;
	depan=m+1;
	for (i=0;i<n;i++){
		ada=false;
		for (j=0;j<m;j++){
			cin>>A[i][j];
			if (A[i][j]=='*' && !ada){
				temp1=j;
				ada=true;
				temp2=j;
			}
			else if (A[i][j]=='*' && ada){
				temp2=j;
			}
		}
		if (ada){
			if (temp1<=depan)
				depan=temp1;
			if (temp2>=ujung)
				ujung=temp2;
			if (!kunci){
				awal=i;
				akhir=i;
				kunci=true;
			}
			akhir=i;
		}
	}
	for (i=awal;i<=akhir;i++){
		for (j=depan;j<=ujung;j++){
			cout<<A[i][j];
		}
		cout<<endl;
	}
}
