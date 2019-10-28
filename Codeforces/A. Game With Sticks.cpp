#include <bits/stdc++.h>
using namespace std;

int n,m,i,banyak;
int A[100000];
int start,nilai;
bool cek=false;

int main(){
	cin>>n>>m;
	memset(A,0,sizeof(A));
	for (i=1;i<=n*m;i++) A[i]=i;
	if (m!=1){
		start=1;
		cek=false;
		while (!cek){
			if (A[1+(start-1)*(m+1)]!=0 && (start<=m)){
				start++;
				banyak++;
			}
			else cek=true;
		}
		if (banyak%2==0) cout<<"Malvika"<<endl;
		else cout<<"Akshat"<<endl;
	}
	else if (m==1) cout<<"Akshat"<<endl;
}
