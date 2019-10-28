#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int tengah,depan,akhir;
int A[1000010],temp;
int acuan1,acuan2;
int maks;

int jarak(int c){
	int temp = 0;
	for (int z=0;z<n;z++) 
		temp+=abs(c-A[z]);
	return temp;
}

int main(){
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++) {
		scanf("%d",&temp);
		A[temp]++;
	}
	for (i=1;i<=m;i++) {
		if (A[i]==0) {
			depan = i;
			break;
		}
	}
	for (i=m;i>=1;i--) {
		if (A[i]==0) {
			akhir = i;
			break;
		}
	}
	maks = max(jarak(akhir),jarak(depan));
	while (!(depan>akhir)) {
		
	}
}
