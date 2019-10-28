#include <bits/stdc++.h>
using namespace std;

int t,i,j,a,b,c;
long long A[10010];

int kuadrat(int x){
	return x*x;
}
int pangkat(int p,int q,int r){
	if (q==0) return 1;
	else if (q==1) return p%r;
	else if (q%2==0) return kuadrat(pangkat(p,q/2,r)%r)%r;
	else if (q%2==1) return p*kuadrat(pangkat(p,(q-1)/2,r)%r)%r;
}
int main(){
	cin.tie(0);
	cin>>t;
	while (t--){
		cin>>a>>b>>c;
		memset(A,0,sizeof(A));
		A[0]=1; A[1]=1;
		for (i=2;i<=a;i++){
			A[i]=((i%c)*A[i-1])%c;
		}
		cout<<pangkat(A[i-1],b,c)<<endl;
	}
}
