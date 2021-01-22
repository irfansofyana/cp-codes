#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int i,j;
char A[1005][1005],c;
int x,y;

int main() {
	scanf("%d %d %d",&n,&m,&k);
	for (i=0;i<k;i++){
		scanf("%d %d %c",&x,&y,&c);
		printf("%c\n",c);
		A[x--][y--] = c;
	}
	int q;
	scanf ("%d",&q);
	return 0;
}