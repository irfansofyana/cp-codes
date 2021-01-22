#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,jumlah=0;
	int i,j;
	int A[101][101];
	
	cin>>n;
	for (i=0;i<n;i++){
		for (j=0;j<3;j++){
			cin>>A[i][j];
			jumlah=jumlah+A[i][j];
		}
	}
	if (jumlah==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}