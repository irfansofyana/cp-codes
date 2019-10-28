#include <bits/stdc++.h>
using namespace std;

int a,b,n,m,i,j,x,y,c,mini=1000000;
int A[110][110];
int jarak[110][110];
bool kunjungan[110][110];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
queue< pair<int,int> > q;

bool cek(int x,int y){
	if (x<0 || y<0 || x>n || y>m ) return false;
	return true;
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) 
			cin>>A[i][j];
	cin >> a >> b;
	memset(jarak,0,sizeof(jarak));
	memset(kunjungan,false,sizeof(kunjungan));
	jarak[a-1][b-1]=1;
	kunjungan[a-1][b-1]=true;
	q.push(make_pair(a-1,b-1));
	while (!q.empty()){
		x=q.front().first;
		y=q.front().second;
		c=jarak[x][y];
		q.pop();
		for (i=0;i<4;i++){
			if (cek(x+dx[i],y+dy[i]) && A[x+dx[i]][y+dy[i]]==0 && !kunjungan[x+dx[i]][y+dy[i]]){
				kunjungan[x+dx[i]][y+dy[i]]=true;
				jarak[x+dx[i]][y+dy[i]]=c+1;
				q.push(make_pair(x+dx[i],y+dy[i]));
			}
		}
	}
	for (i=0;i<n;i++){
		if (jarak[i][0]!=0 && jarak[i][0]<mini ) mini=jarak[i][0];
	}
	for (i=0;i<n;i++){
		if (jarak[i][m-1]!=0 && jarak[i][m-1]<mini) mini=jarak[i][m-1];
	}
	for (i=1;i<m-1;i++){
		if (jarak[0][i]!=0 && jarak[0][i]<mini) mini=jarak[0][i];
	}
	for (i=1;i<m-1;i++){
		if (jarak[n-1][i]!=0 && jarak[n-1][i]<mini) mini=jarak[n-1][i];
	}
	cout << mini << endl;
	return 0;
}
