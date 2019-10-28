#include <bits/stdc++.h>

using namespace std;
int n,t,i,j;
int awal,akhir;
int A[20][20];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
pair<int,int> x1,x2;
void reset(){
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++){
			A[i][j] = (i+1)*(j+1);
		}
	}
}
void jelajah(pair<int,int> x,pair<int,int> y){
	for (int z=0;z<4;z++){
		if (A[x.first+dx[z]][x.second+dy[z]]!=-1 && cek_border(x)) {
			A[x.first+dx[z]][x.second+dy[z]] = -1;
			
		}
	}
} 
bool cek_border(pair<int,int> pi){
	if (pi.first<0 || pi.first>=n || pi.second<0 || pi.second>=n) return false;
	return true;
}
int main(){
	scanf("%d",&n);
	scanf("%d",&t);
	//reset();
	while (t--) {
		reset();
		scanf("%d %d",&awal,&akhir);
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (A[i][j]==awal) {
					x1 = make_pair(i,j);
				}
				else if (A[i][j]==awal) {
					x2 = make_pair(i,j);
				}
			}
		}
		jelajah(x1,x2);
	}
}