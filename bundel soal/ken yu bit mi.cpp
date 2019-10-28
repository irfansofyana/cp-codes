#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,p,q,fx,fy,idx,temp;
int kekuatanA,kekuatanB;
int A[3505][3505];
int ans[3550];
bool kunjungan[3505][3505];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
void dfsA(int x,int y,int k){
	for (int z=0;z<4;z++){
		if (x+dx[z]>=0 && x+dy[z]<n && y+dy[z]>=0 && y+dy[z]<m && A[x+dx[z]][y+dy[z]]<k && !kunjungan[x+dx[z]][y+dy[z]]){
			k-=1;
			if (x+dx[z]==fx-1 && y+dy[z]==fy-1){
				printf("a %d %d %d\n",x+dx[z],y+dy[z],k);
				ans[idx]=k;
				idx++;
				kunjungan[x+dx[z]][y+dy[z]]=true;
			}
			else{
				kunjungan[x+dx[z]][y+dy[z]]=true;
				dfsA(x+dx[z],y+dy[z],k);
				printf("b %d %d %d\n",x+dx[z],y+dy[z],k);
			}
		}
	}
}
void dfsB(int x,int y,int k){
	for (int z=0;z<4;z++){
		k=temp;
		if (x+dx[z]>=0 && x+dy[z]<n && y+dy[z]>=0 && y+dy[z]<m && A[x+dx[z]][y+dy[z]]<k && !kunjungan[x+dx[z]][y+dy[z]]){
			k-=1;
			kunjungan[x+dx[z]][y+dy[z]]=true;
			if (x+dx[z]==fx-1 && y+dy[z]==fy-1){
				ans[idx]=k;
				k=temp;
				idx++;
			}
			else dfsA(x+dx[z],y+dy[z],k);
		}
	}
}
int main(){
	scanf("%d %d %d %d %d %d",&n, &m, &p, &q, &fx, &fy);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	memset(kunjungan,false,sizeof(kunjungan));
	idx=0;
	dfsA(0,0,p);
	sort(ans,ans+idx);
	kekuatanA=ans[0];
	memset(ans,0,sizeof(ans));
	idx=0;
	memset(kunjungan,false,sizeof(kunjungan));
	dfsB(0,0,q);
	sort(ans,ans+idx);
	kekuatanB=ans[0];
	if (kekuatanA>kekuatanB) {
		printf("Lala Menang\n");
		printf("%d %d\n",kekuatanA,kekuatanB);
	}
	else if (kekuatanA<kekuatanB){
		printf("Joke Menang\n");
		printf("%d %d\n",kekuatanA,kekuatanB);
	}
	else {
		printf("SERI\n");
		printf("%d %d\n",kekuatanA,kekuatanB);
	}
}
