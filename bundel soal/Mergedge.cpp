#include <bits/stdc++.h>
using namespace std;

int ans,r,c,i,j;
int A[205][205];
bool pake[205][205];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
char smt;

int main() {
	cin.tie(0);
	cin >> r >> c;
	for (i=0;i<r;i++) {
		for (j=0;j<c;j++) {
			cin >>	smt;
			if (smt=='1') A[i][j] = 4;
			else A[i][j] = 0;
		}
	}
	memset(pake,false,sizeof pake);
	for (i=0;i<r;i++) {
		for (j=0;j<c;j++) {
			if (A[i][j]==4) {
				pake[i][j] = true;
				int temp = 0;
				for (int z=0;z<4;z++) {
					if (i+dx[z]>=0 && i+dx[z]<r && j+dy[z]>=0 && j+dy[z]<c && A[i+dx[z]][j+dy[z]]==4 && !pake[i+dx[z]][j+dy[z]]) {
						temp++;
					}
				}
				ans+=4-temp;
			}
		}
	}
	cout << ans << endl;
}
