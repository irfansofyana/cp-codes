#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,x,y,a,b,k;
int p[1000000],A[1000000],B[1000000];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(p,-1,sizeof(p));
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a>>b;
		for (j=1;j<=b;j++){
			cin>>k;
			p[k]=a;	
		}
	}
	cin>>m;
	for (i=1;i<=m;i++){
		cin>>a;
		if (a==-1){
			cin>>b;
			cout<<A[b]<<" "<<B[b]<<endl;
		}
		else{
			cin>>x>>y;
			do{
				A[a]+=x;
				B[a]+=y;
				a=p[a];
			}while (a!=-1);
		}
	}
	return 0;
}
