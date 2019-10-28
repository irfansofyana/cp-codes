#include <bits/stdc++.h>
using namespace std;

int main(){
	int p,q,n,s,t,temp,sem;
	int i,j,jawaban=0;
	int A[100010];
	int B[100010];
	
	cin>>n>>s>>t;
	for (i=1;i<=n;i++) B[i]=i;
	temp=B[s];
	for (i=1;i<=n;i++) cin>>A[i];
	for (i=1;i<=n;i++){
		sem=B[i];
		B[i]=B[A[i]];
		B[A[i]]=sem;
		if (B[t]==temp && s!=t) jawaban++;
	}
	if (s==t && jawaban==0) cout<<0<<endl;
	else if (jawaban==0) cout<<-1<<endl;
	else cout<<jawaban<<endl;
}
