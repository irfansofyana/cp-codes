#include <bits/stdc++.h>
using namespace std;

int n,i,j;
vector <vector<char> > A;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
int ans;
char temp;

int main(){
	cin.tie(0);
	cin >> n;
	A.assign(n*n,vector<char> ());
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			cin >> temp; 
			A[i].push_back(temp);
		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			if (A[i][j]=='O') {
				A[i][j] = 'X';
				for (int z=0;z<4;z++) {
					if (i+dx[z]>=0 && i+dx[z]<n && j+dx[z]>=0 && j+dx[z]<n) {
						if (A[i+dx[z]][j+dy[z]]=='O') {
							ans++;
						}
					}
				}
			}
		}
	}
	if (ans%2==0) cout<<ans<<" Budi\n";
	else cout<<ans<<" Andi\n"; 
}
