#include <bits/stdc++.h>
using namespace std;
int n,i,j,depan,belakang;
int A[110];
int main(){
	while (scanf("%d",&n)&&n!=0){
		for (i=0;i<n;i++) cin>>A[i];
		sort(A,A+n);
		depan=0; belakang=n-1;
		while (depan<=belakang){
			if (depan==belakang) printf("%d\n",A[depan]);
			else printf("%d %d ",A[depan],A[belakang]);
			depan++;
			belakang--;
		}
		if (n%2==0) printf("\n");
	}
	return 0;
}
