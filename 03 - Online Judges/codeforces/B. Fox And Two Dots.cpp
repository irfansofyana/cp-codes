#include<bits/stdc++.h>
using namespace std;

bool used[55][55],mapped[55][55];
string MAP[55];
int n,m,status=0;

void cari(int x,int y,int ax,int ay){
	if(MAP[x][y]!=MAP[ax][ay]){
		return;
	}
	mapped[x][y]=true;
	if(used[x][y]){
		status=1;
		return;
	}
	used[x][y]=true;
	if(x>0&&x-1!=ax)cari(x-1,y,x,y);
	if(x<n-1&&x+1!=ax)cari(x+1,y,x,y);
	if(y>0&&y-1!=ay)cari(x,y-1,x,y);
	if(y<m-1&&y+1!=ay)cari(x,y+1,x,y);
}

int main(){
	ios::sync_with_stdio(false);
	memset(mapped,false,sizeof(mapped));
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++){
		cin>>MAP[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(!mapped[i][j]){
				memset(used,false,sizeof(used));
				cari(i,j,i,j);
			}
		}
	}
	if(status==0)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
