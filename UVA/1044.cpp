#include <bits/stdc++.h>
using namespace std;

int n,q,i,j,temp[1000],acuan;
int A[1000];
int jawaban[1000];

int binary_search(int x,int y,int k){
	int tengah=(x+y)/2;
	if (x>y) return -1;
	if (A[tengah]==k) return tengah;
	else if (A[tengah]>k) return binary_search(x,tengah-1,k);
	else if (A[tengah]<k) return binary_search(tengah+1,y,k);
}
int main(){
	while (scanf("%d %d",&n,&q) && (n!=0 && q!=0)){
		for (i=0;i<n;i++) scanf("%d",&A[i]);
		sort(A,A+n);
		for (i=0;i<q;i++) {
			scanf("%d",&temp[i]);
			if (binary_search(temp[i])==-1) jawaban[i]=-1;
			else {
				acuan=binary_search(temp[i]);
				while (A[acuan]==A[acuan-1] && acuan>0) acuan--;
				jawaban[i]=acuan;
			}
		}
		printf("CASE# %d:\n");
		for (i=0;i<q;i++){
			if (jawaban[i]==-1) printf("%d not found\n",temp[i]);
			else printf("%d found at %d\n",temp[i],jawaban[i]);
		}
	}
	return 0;
}
