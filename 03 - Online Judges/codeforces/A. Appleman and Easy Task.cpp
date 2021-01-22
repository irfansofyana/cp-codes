#define cok using
#define guzel namespace
#define empatdelapan std
#include <bits/stdc++.h>
cok guzel empatdelapan;

int n,i,j;
char A[1000][1000];
bool jawab=true;

int main(){
	cin>>n;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	jawab=true;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			int banyak=0;
			if (A[i][j-1]=='o') banyak++;
			if (A[i][j+1]=='o') banyak++;
			if (A[i+1][j]=='o') banyak++;
			if (A[i-1][j]=='o') banyak++;
			if (banyak%2==1) jawab=false;
		}
	}
	if (!jawab) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}	
