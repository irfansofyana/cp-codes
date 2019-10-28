#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int idx;
bool arah;

bool cek(int k){
	if (k%7==0) return true;
	while (k>0) {
		if (k%10==7) return true;
		k/=10;
	}	
	return false;
}

int main() {
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		arah = true;  //true==arah kanan
		idx = 0;
		for (i=1;i<=n;i++) {
			if (idx==n && arah) idx = 1;
			else if (idx==1 && !arah) idx = n;
			else if (arah) idx++;
			else if (!arah) idx--;
			if (cek(i)) arah = !arah;
		}
 		printf("%d\n",idx);
	}
}
