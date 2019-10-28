#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char temp,kucing[510][510],bebek[510][510];
int banyak;
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int k,b;
bool uk=false,ub=false;

void dfsk(int x,int y){
	if (kucing[x][y]=='K') k++; 
	for (int z=0;z<4;z++){
		if ((x+dx[z]>=0 && x+dx[z]<m) && (y+dy[z]>=0 && y+dy[z]<n)){
			if (kucing[x+dx[z]][y+dy[z]]=='.') {
				k++;
				kucing[x+dx[z]][y+dy[z]]='#';
				dfsk(x+dx[z],y+dy[z]);
			}
		}
	}
}
void dfsb(int x,int y){
	if (bebek[x][y]=='B') b++; 
	for (int z=0;z<4;z++){
		if ((x+dx[z]>=0 && x+dx[z]<m) && (y+dy[z]>=0 && y+dy[z]<n)){
			if (bebek[x+dx[z]][y+dy[z]]=='.') {
				b++;
				bebek[x+dx[z]][y+dy[z]]='#';
				dfsb(x+dx[z],y+dy[z]);
			}
		}
	}
}
int main(){
	cin.tie(0);
	cin>>n>>m;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>temp; kucing[i][j]=temp;
			bebek[i][j]=temp;
		}
	} uk=false; ub=false;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (kucing[i][j]=='K' && !uk){
				uk=true;
				dfsk(i,j);
			}
			else if (bebek[i][j]=='B' && !ub){
				ub=true;
				dfsb(i,j);
			}
		}
	}
	if (k>b) cout<<'K'<<" "<<k-b<<endl;
	else if (b>k) cout<<'B'<<" "<<b-k<<endl;
	else cout<<"SERI"<<endl;
	return 0;
}
