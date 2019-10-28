#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,uang,mini,maks;
int A[10010];
bool dipakai[10010];
bool pertama=true;

int binary_search(int x,int y,int k){
	int tengah=(x+y)/2;
	if (x>y) return -1;
	if (A[tengah]==k) return tengah;
	else if (A[tengah]>k) return binary_search(x,tengah-1,k);
	else if (A[tengah]<k) return binary_search(tengah+1,y,k);
}

int main(){
	while (scanf("%d",&n)!=EOF){
		for (i=0;i<n;i++) scanf("%d",&A[i]);
		scanf("%d",&uang);
		//printf("\n");
		sort(A,A+n);
		memset(dipakai,false,sizeof(dipakai));
		pertama=true;
		for (i=0;i<n;i++){
			if (!dipakai[i]){
				dipakai[i]=true;
				if (binary_search(0,n-1,uang-A[i])!=-1 && i!=binary_search(0,n-1,uang-A[i])){
					dipakai[binary_search(0,n-1,uang-A[i])]=true;
					if (pertama){
						maks=max(A[i],A[binary_search(0,n-1,uang-A[i])]);
						mini=min(A[i],A[binary_search(0,n-1,uang-A[i])]);
						pertama=false;
					}
					else {
						if (max(A[i],A[binary_search(0,n-1,uang-A[i])])-min(A[i],A[binary_search(0,n-1,uang-A[i])])<maks-mini){
							maks=max(A[i],A[binary_search(0,n-1,uang-A[i])]);
							mini=min(A[i],A[binary_search(0,n-1,uang-A[i])]);
						}
					}
				}
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n",mini,maks);
		printf("\n");
	}
	return 0;
}
