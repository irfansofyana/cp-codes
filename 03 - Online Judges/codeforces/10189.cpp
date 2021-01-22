#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
char A[105][105];
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};

bool cek(int x,int y){
	if (x>=0 && x<n && y>=0 && y <m) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tc = 0;
	while (cin >> n >> m) {
		if (n==0 && m==0) return 0;
		if (tc!=0) cout << '\n'; 
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++)
				cin >> A[i][j];
		cout << "Field #" << ++tc << ":\n";
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < m ; j++ ){
				if (A[i][j]=='*') cout << '*';
				else {
					int x = 0;
					for (int k = 0 ; k < 8 ; k++) {
						if (cek(i+dx[k],j+dy[k]) && A[i+dx[k]][j+dy[k]]=='*') x++;
					}
					cout << x;
				}
			}
			cout << '\n';
		}
	}
	return 0;
}