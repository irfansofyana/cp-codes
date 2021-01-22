#include <bits/stdc++.h>
using namespace std;

int dx[]= {1,1,1,-1};
int dy[]= {1,-1,1,1};
int n,i,j,t;
int A[10003][10003];
int px,py;

void isi(){
	memset(A,-1,sizeof A);
	px = 0 ; py = 0;
	A[0][0] = 0;
	for (i = 1; i<=10000; i++) {
		if (i%4==0) {
			px += dx[3]; py += dy[3];
		}
		else {
			px += dx[(i%4)-1]; py += dy[(i%4)-1];
		}
		A[px][py] = i;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		int x,y;
		cin >> x >> y;
		if (A[x][y]==-1) cout << "No Number" << '\n';
		else cout << A[x][y] << '\n';
	}
	return 0;
}