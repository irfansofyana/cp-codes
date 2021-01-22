#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ques,x,y;
char A[1005][1005],c;
int k;
pair<int,int> ans;
pair<int,int> jalan(int x,int y,int z){
	int p,q;
	p = x; q = y;
	if (p<0 || p>n || q>m || q<0) return make_pair(p,q); ;
	if (z==0) while (A[p][q]=='0' && p<n) p++;
	else if (z==1) while (A[p][q]=='0' && q>=0) q--;
	else if (z==2) while (A[p][q]=='0' && q<m) q++;
	else if (z==3) while (A[p][q]=='0' && p>=0) p--; 
	if ((!(p>=n || p<0 || q<0 || q>=m)) && A[p][q]=='\\') {
		if (z==0) return jalan(p,q+1,2);
		else if (z==1) return jalan(p-1,q,3);
		else if (z==2) return jalan(p+1,q,0);
		else if (z==3) return jalan(p,q-1,1);
	}
	else if ((!(p>=n || p<0 || q<0 || q>=m)) && A[p][q]=='/') {
		if (z==0) return jalan(p,q-1,1);
		else if (z==1) return jalan(p+1,q,0);
		else if (z==2) return jalan(p-1,q,3);
		else if (z==3) return jalan(p,q+1,2);
	}
	else if (((p>=n || p<0 || q<0 || q>=m))) return make_pair(p,q);
}
int main(){
	scanf("%d %d %d",&n,&m,&k);
	memset(A,'0',sizeof A);
	while (k--) {
		scanf("%d %d %c",&x,&y,&c);
		x--; y--;
	//	printf("%d %d\n",x,y);
		A[x][y] = c;
	//	printf("%c\n",c);
	}
//	printf("%c\n",A[2][2]);
	scanf("%d",&ques);
	while (ques--) {
		scanf("%d %d",&x,&y);
		x--; y--;
		//printf("%d %d\n",x,y);
		if (x==-1 && (y>=0 && y<m)) {
			if (A[0][y]=='0') ans = jalan(0,y,0);
			else if (A[0][y]=='/') ans = jalan(0,y-1,1);
			else if (A[0][y]=='\\') ans = jalan(0,y+1,2);
		}
		else if (x==n && (y>=0 && y<m)) {
			if (A[n-1][y]=='0') ans = jalan(n-1,y,3);
			else if (A[n-1][y]=='/') ans = jalan(n-1,y+1,2);
			else if (A[n-1][y]=='\\') ans = jalan(n-1,y-1,1);
		}
		else if ((x>=0 && x<n) && y==-1) {
			if (A[x][0]=='0') ans = jalan(x,0,2);
			else if (A[x][0]=='/') ans = jalan(x-1,0,3);
			else if (A[x][0]=='\\') ans = jalan(x+1,0,0);
		}
		else if ((x>=0 && x<n) && y==m) {
			if (A[x][m-1]=='0') ans = jalan(x,m-1,1);
			else if (A[x][m-1]=='/') ans = jalan(x+1,m-1,0);
			else if (A[x][m-1]=='\\') ans = jalan(x-1,m-1,3);
		}
		printf("%d %d\n",ans.first+1,ans.second+1);
	}
	return 0;
}