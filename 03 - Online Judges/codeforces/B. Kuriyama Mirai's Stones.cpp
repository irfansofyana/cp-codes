#include <bits/stdc++.h>
using namespace std;

long long n,i,j,m,l,r;
long long A[100010];
long long B[100010];
int type;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
		B[i]=A[i];
	}
	cin>>m;
	sort(B,B+n);
	/*sort(A+2,A+4);
	for (i=0;i<n;i++) cout<<A[i]<<" ";
	cout<<endl; */ 
	for (i=1;i<=m;i++){
		cin>>type;
		if (type==2) {
			cin>>l>>r; long long jum=0;
			for (j=l-1;j<r;j++) jum+=B[j];
			cout<<jum<<endl;
		}
		else if (type==1) {
			long long jum=0;
			cin>>l>>r;
			for (j=l-1;j<r;j++) jum+=A[j];
			cout<<jum<<endl; 
		}
	}
}
