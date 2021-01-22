#include <bits/stdc++.h>
using namespace std;

int main(){
	
int n,i,j;
char A[1010][1010];

	cin.tie(0);
	cin>>n;
	if (n%2==0) cout<<(n/2)*n<<endl;						//mencari banyak
	else cout<<(((n-1)*(n-1))/4)+(((n+1)*(n+1))/4)<<endl;
	
	for (i=0;i<n;i++){
		if (i%2==0){
			for (j=0;j<n;j++){
				if (j%2==0) A[i][j]='C';
				else A[i][j]='.';
			}
		}
		else{
			for (j=0;j<n;j++){
				if (j%2==1) A[i][j]='C';
				else A[i][j]='.';
			}
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (j!=n-1) cout<<A[i][j];
			else cout<<A[i][j]<<endl;
		}
	}
	return 0;
}
