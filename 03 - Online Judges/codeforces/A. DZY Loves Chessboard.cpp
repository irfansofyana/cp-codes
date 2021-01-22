#include <bits/stdc++.h>
using namespace std;
int N, M, i, j, dx[10]={0,1,0,-1}, dy[10]={1,0,-1,0};
char A[105][105];
void Lala(int x, int y) {
	if (x%2==0)
		if (y%2==0)	A[x][y] = 'B';
		else A[x][y] = 'W';
	else
		if (y%2==0) A[x][y] = 'W';
		else A[x][y] = 'B';
}
int main () {
	scanf ("%d %d\n", &N, &M);
	for (i=0; i<N; i++) {
		for (j=0; j<M; j++)
			scanf ("%c", &A[i][j]);
		getchar();
	}
	for (i=0; i<N; i++) {
		for (j=0; j<M; j++) {
			if (A[i][j]=='.') {
				Lala(i,j);
			}
		}
	}
	for (i=0; i<N; i++) {
		for (j=0; j<M; j++) {
			printf ("%c", A[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
