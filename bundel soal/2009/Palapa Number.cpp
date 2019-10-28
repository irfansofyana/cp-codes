#include <bits/stdc++.h>
#define mod 9973
using namespace std;

int n,i,j;
int pangkat[105];
int t;

void isi_pangkat(){
	pangkat[0] = 1;
	for (i=1;i<=100;i++) {
		pangkat[i] = (10*(pangkat[i-1]%mod))%mod;
	}
}

int main(){
	isi_pangkat();
	scanf("%d",&t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", (5625*(pangkat[n-4]%mod))%mod);
	}
}
