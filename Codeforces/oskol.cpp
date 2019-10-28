#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	int A[1000],x,y;
	
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>A[i];
	cin>>m;
	for (i=1;i<=m;i++){
		cin>>x>>y;
			if ((x!=1) && (x!=n)){
				A[x-1]=A[x-1]+y-1;
				A[x+1]=A[x+1]+A[x]-y;
				A[x]=0;
			}
			else if ((x==1)){
				A[x+1]=A[x+1]+A[x]-y;
				A[x]=0;
			}
			else if ((x==n)){
				A[x-1]=A[x-1]+y-1;
				A[x]=0;
			}
	}
	for (i=1;i<=n;i++)
		cout<<A[i]<<endl;\
	return 0;
}
