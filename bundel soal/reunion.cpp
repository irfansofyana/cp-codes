#include <bits/stdc++.h>
using namespace std;

int t,n;
int ans[1000];
int i;

int binary_search(int depan,int ujung,int bil){
	int tengah=(depan+ujung)/2;
	if (depan>ujung) return -1;
	else if (ans[tengah]==bil) return tengah;
	else if (ans[tengah]<bil) return binary_search(tengah+1,ujung,bil);
	else if (ans[tengah]>bil) return binary_search(depan,tengah-1,bil);
}

int main(){
	scanf("%d",&t);
	for (i=1;i<=1000;i++) 
		ans[i] = (i*(i-1))/2;
	while (t--) {
		scanf("%d",&n);
		printf("%d\n",binary_search(1,1000,n));
	}
	return 0;
}
