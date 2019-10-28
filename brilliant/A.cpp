#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[5010];

int main(){
	cin >> n;
	if (n%2==0) {
		j=n;
		for (i=1;i<=(n/2);i++){
			if (i==(n/2)-1) A[i]=2;
			else if (i==(n/2)) A[i]=4;
			else {
				A[i]=j;
				j-=2;
			}
		}
		int k=1;
		for (j=(n/2)+1;j<=n;j++){
			A[j]=k;
			k+=2;
		}
		if (n==2) {
			cout<<1<<endl;
			cout<<1<<endl;
		}
		else {
			cout<<n<<endl;
			for (i=1;i<=n;i++){
				if (i==n) cout<<A[i]<<endl;
				else cout<<A[i]<<" ";
			}
		}
	}
	else {
		if (n==1) {
			cout<<1<<endl;
			cout<<1<<endl;
		}
		else if (n==3) {
			cout<<2<<endl;
			cout<<1<<" "<<3<<endl;
		}
		else {
			j=n-1;
			for (i=1;i<=(n/2);i++){
				if (i==(n/2)-1) A[i]=2;
				else if (i==(n/2)) A[i]=4;
				else {
					A[i]=j;
					j-=2;
				}
			}
			int k=1;
			for (i=(n/2)+1;i<=n;i++){
				A[i]=k;
				k+=2;
			}
			cout<<n<<endl;
			for (i=1;i<=n;i++) {
				if (i==n) cout<<A[i]<<endl;
				else cout<<A[i]<<" ";
			}
		}
	}
	return 0;
}
