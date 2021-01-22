#define cok using
#define guzel namespace
#define empatdelapan std
#include <bits/stdc++.h>
long long cewe,n,m,t,i,j;
long long A[50][50];
long long jawaban;
cok guzel empatdelapan;
void factorial(){
	A[0][0]=1;
	for (i=1;i<=40;i++){
		A[i][0]=1;
		A[i][i]=1;
	}
	for (i=1;i<=40;i++){
		for (j=1;j<=i-1;j++){
			A[i][j]=A[i-1][j-1]+A[i-1][j];
		}
	}	
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	factorial();
	cin>>n>>m>>t;
	jawaban=0;
	for (i=4;i<=t-1;i++){
		cewe=t-i;
		if (n>=i && m>=cewe) jawaban+=A[n][i]*A[m][cewe];
	}
	cout<<jawaban<<endl;
}
