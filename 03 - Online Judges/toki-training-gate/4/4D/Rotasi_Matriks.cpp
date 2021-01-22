#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[80][80],B[80][80];

bool cek_nol(){
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			if (A[i][j]!=B[i][j]) return false;
	}
	return true;
}
bool cek_snol(){
	int k = n-1;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (A[i][j]!=B[j][k]) return false;
		}
		k--;
	}
	return true;
}
bool cek_sdl(){
	int k,l;
	k = n-1; l = n-1;
	for (i=0;i<n;i++){
		l = n-1;
		for (j=0;j<n;j++){
			if (A[i][j]!=B[k][l]) return false;
			else l--;
		}
		k--;
	}
	return true;
}
bool cek_dt(){
	int k,l;
	k = n-1; l = 0;
	for (i=0;i<n;i++){
		k = n-1;
		for (j=0;j<n;j++){
			if (A[i][j]!=B[k][l]) return false;
			else k--;
		}
		l++;
	}
	return true;
}
int main(){
	scanf("%d %d",&n,&n);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
	scanf("%d %d",&n,&n);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			scanf("%d",&B[i][j]);
	}
	if (cek_nol()) printf("0\n");
	else if (cek_sdl()) printf("180\n");
	else if (cek_snol()) printf("90\n");
	else if (cek_dt()) printf("270\n");
	else printf("tidak sama\n");
	return 0;
}