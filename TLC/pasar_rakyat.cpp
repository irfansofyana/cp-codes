#include <bits/stdc++.h>
using namespace std;
int m,n,i,j,k;
int A[100000];
bool cek;
int fpb(int a,int b){
	int c;
	while (b!=0){
		c=a;
		a=b;
		b=c%b;
	}
	return a;
}

int main(){
	cin>>n;
	for (i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	m=fpb(A[0],A[1]);
	m=(A[0]*A[1])/m;
	for (i=1;i<=50000000;i++){
		cek=true;
		k=m*i;
		for (j=2;j<n;j++){
			if (k%A[j]!=0){
				cek=false;
				break;
			}
		}
		if (cek==true){
			cout<<k<<endl;
			break;
		}
	}	
}
