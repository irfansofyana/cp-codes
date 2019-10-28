#include <bits/stdc++.h>
using namespace std;
int r,c,i,j,temp,idx;
char A[100][100];
int isi[100],pos[100];
bool ngecek(int x){
	int a,b=0;
	for (a=0;a<c;a++){
		if (A[x-1][a]==1 && A[x][a]==0) b++;
	}
	if (b==isi[x-1]) return true;
	else return false;
}
void mengkosongkan(){
	int banyak=0;
	for (i=0;i<r;i++){
		banyak=0;
		for (j=0;j<c;j++) if (A[i][j]=='1') banyak++;
		if (banyak==c) 
			for (j=0;j<c;j++) A[i][j]=0;
	}
}
void finish(){
	for (i=r-2;i>=0;i--){
		if (isi[i]!=0){
			temp=i+1;
			while (ngecek(temp) && (temp>=0 && temp<r)){
				for (j=0;j<c;j++){
					if (A[temp][j]=='0' && A[temp-1][j]=='1') {
						A[temp-1][j]='0'; A[temp][j]='1';
					}
				}
			}
		}
	}
}
void isi(){
	int tot=0;
	for (i=0;i<r;i++){
		tot=0;
		for (j=0;j<c;j++){
			if (A[i][j]=='1') tot++;
		}
		isi[i]=tot;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>r>>c;
	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			cin>>A[i][j];
		}
	}
	mengkosongkan();
	isi();
	
}
