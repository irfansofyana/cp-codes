#include <bits/stdc++.h>
using namespace std;

int n,i,j,q;
int A[100010];
int atas,bawah;
pair <int,int> vi[100010];

int binary_search(int a,int b,int c){
	int tengah = (a+b)/2;
	if (a>b) return -1;
	else if (vi[tengah].first<=c && c<=vi[tengah].second) return tengah;
	else if (c<vi[tengah].first) return binary_search(a,tengah-1,c);
	else if (c>vi[tengah].second) return binary_search(tengah+1,b,c);
}

int main(){
	scanf("%d",&n);
	bawah = 1;
	for (i=0;i<n;i++) {
		scanf("%d",&A[i]);
		atas+=A[i];
		vi[i] = make_pair(bawah,atas);
		bawah+=A[i];	
	}
	scanf("%d",&q);
	while (q--) {
		scanf("%d",&j);
		printf("%d\n",binary_search(0,n-1,j)+1);
	}
	return 0;
}
