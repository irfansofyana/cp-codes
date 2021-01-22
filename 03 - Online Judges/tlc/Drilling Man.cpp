#include <bits/stdc++.h>
using namespace std;
int t,n,i,j,banyak,minimal,ans1,ans2,ans;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
char A[100][100];
int kunjungan[100][100];
bool pertama=true;
void kunci(int x,int y){
	for (int k=0;k<4;k++){
		if ((x+dx[k]>=0 && x+dx[k]<n) && (y+dy[k]>=0 & y+dy[k]<n)){
			if (A[x+dx[k]][y+dy[k]]=='S' && kunjungan[x+dx[k]][y+dy[k]]==0){
				kunjungan[x+dx[k]][y+dy[k]]=1;
				break;
			}
			else if (A[x+dx[k]][y+dy[k]]=='#' && kunjungan[x+dx[k]][y+dy[k]]==0){
				banyak++; kunjungan[x+dx[k]][y+dy[k]]=1;
				kunci(x+dx[k],y+dy[k]);
			}
			else if (A[x+dx[k]][y+dy[k]]=='.' && kunjungan[x+dx[k]][y+dy[k]]==0){
				kunjungan[x+dx[k]][y+dy[k]]=1;
				kunci(x+dx[k],y+dy[k]);
			}
			else if (A[x+dx[k]][y+dy[k]]=='E' && kunjungan[x+dx[k]][y+dy[k]]==0){
				kunjungan[x+dx[k]][y+dy[k]]=1;
				kunci(x+dx[k],y+dy[k]);
			} 
		}
	}
}
void exit(int x,int y){
	bool belum=false;
	for (int k=0;k<4;k++){
		if ((x+dx[k]>=0 && y+dy[k]<n) && (x+dx[k]>=0 && y+dy[k]<n)){
			if (A[x+dx[k]][y+dy[k]]=='.' && kunjungan[x+dx[k]][y+dy[k]]==0) {
				kunjungan[x+dx[k]][y+dy[k]]=1; belum=true;
				exit(x+dx[k],y+dy[k]); 
			}
			else if (A[x+dx[k]][y+dy[k]]=='E' && kunjungan[x+dx[k]][y+dy[k]]==0){
				kunjungan[x+dx[k][y+dy[k]]]=1; break;
			}
			else if (A[x+dx[k]][y+][y+dy[k]]=1;
				exit(x+dx[k],y+ddy[k]]=='K' && kunjungan[x+dx[k]][y+dy[k]]==0){
				kunjungan[x+dx[k]y[k]);
			}
		}
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	for (int z=1;z<=t;z++){
		cin>>n; banyak=0; pertama=true;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (A[i][j]=='K' && pertama){
					banyak=0;
					kunci(i,j);
					memset(kunjungan,0,sizeof(kunjungan));
					if (pertama){
						minimal=banyak;
						ans1=i; ans2=j;
					}
				}
				else if (A[i][j]=='K'){
					banyak=0;
					kunci(i,j);
					memset(kunjungan,0,sizeof(kunjungan));
					if (banyak<minimal) {
						minimal=banyak; ans1=i; ans2=j;
					} 
				}
			}
		}
		ans=0;
		exit(ans1,ans2);
	}
}
