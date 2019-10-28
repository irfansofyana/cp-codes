#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int B[100],A[100];
bool ans;

void solusi(int udah,int prev){
	int z;
	A[udah] = prev;
	if (udah==m) {
		for (z = 1 ; z <= m ; z++) {
			if (A[z]==B[z]) break;
		}
		if (z==m+1) ans = true;
		if (ans) {
			for (z = 1 ; z <= m ; z++) cout << A[z] << " ";
			cout << endl;
			exit(0);
		}
	}
	if (udah!=m){
		if (prev==1) {solusi(udah+1,prev+1);}
		if (prev==n) {solusi(udah+1,prev-1);}
		if (prev >= 2 && prev <= n-1) {solusi(udah+1,prev+1); solusi(udah+1,prev-1);}
	}
}

int main(){
	OPTIMASI
	cin >> n >> m;
	for (i = 1 ; i <= m ; i++) {
		cin >> B[i];
	}
	for (i = 1 ; i <= n ; i++) {
		ans = false;
		solusi(1,i);
	}
	if (!ans) puts("menyerah");
	return 0;
}