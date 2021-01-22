#include <bits/stdc++.h>
using namespace std;

int n,i,j;
char A[105][105];
bool used[105][105],ans;
int pagar;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0}
int main(){
	cin >> n;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			cin >> A[i][j];
			if (A[i][j]=='#') pagar++;
		}
	if (pagar%5!=0) puts("NO");
	else {
		ans = true;
		memset(used,false,sizeof used);
		for (i=0;i<n;i++) {
			for (j=0;j<n;j++) {
				if (A[i][j]=='#') {
					for (int z=0;z<4;z++) {
						if (i+dx[z]>=0 && i+dx[z]<n && j+dy[z]>=0 && j+dy[z]<n) {
							if (A[i+dx[z]][j+dy[z]]=='#' && used[i+dx[z]][j+dy[z]]==false) 
							
						}
					}
				}
			}
		}
	}
}
