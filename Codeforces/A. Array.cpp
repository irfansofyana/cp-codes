#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,x;
	int A[1000],B[1000],C[1000];
	int k=0,l=0,m=0;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>x;
		if (x>0){
			A[k]=x;
			k++;
		}
		else if (x==0){
			B[l]=x;
			l++;
		}
		else if (x<0){
			C[m]=x;
			m++;
		}
	}
	if (m%2==1){
			if (k==0){
					cout<<m-2<<" ";
						for (i=0;i<m-2;i++){
							if (i!=m-3) cout<<C[i]<<" ";
							else cout<<C[i]<<endl;
						}
					cout<<2<<" ";
						for (i=m-2;i<=m-1;i++){
							if (i!=m-1) cout<<C[i]<<" ";
							else cout<<C[i]<<endl;
						}
					cout<<l<<" ";
						for (i=0;i<l;i++){
							if (i!=l-1) cout<<B[i]<<" ";
							else cout<<B[i]<<endl;
						}
			}
			else{
					cout<<m<<" ";
		for (i=0;i<m;i++){
			if (i!=m-1) cout<<C[i]<<" ";
			else cout<<C[i]<<endl;
		}
		cout<<k<<" ";
		for (i=0;i<k;i++){
			if (i!=k-1) cout<<A[i]<<" ";
			else cout<<A[i]<<endl;
		}
		cout<<l<<" ";
		for (i=0;i<l;i++){
			if (i!=l-1) cout<<B[i]<<" ";
			else cout<<B[i]<<endl;
			} 
	}
}	
	else {  		//m bilangan genap
		if (k==0){
					cout<<m-3<<" ";
						for (i=0;i<m-3;i++){
							if (i!=m-4) cout<<C[i]<<" ";
							else cout<<C[i]<<endl;
						}
					cout<<2<<" ";
						for (i=m-3;i<=m-2;i++){
							if (i!=m-2) cout<<C[i]<<" ";
							else cout<<C[i]<<endl;
						}
					cout<<l+1<<" ";
						for (i=0;i<l;i++){
							cout<<B[i]<<" ";
						}
					cout<<C[m-1]<<endl;
		}
		else{
			cout<<m-1<<" ";
		for (i=0;i<m-1;i++){
			if (i!=m-2) cout<<C[i]<<" ";
			else cout<<C[i]<<endl;
		}
		cout<<k<<" ";
		for (i=0;i<k;i++){
			if (i!=k-1) cout<<A[i]<<" ";
			else cout<<A[i]<<endl;
		}
		cout<<l+1<<" ";
		for (i=0;i<l;i++)
			cout<<B[i]<<" ";
		cout<<C[m-1]<<endl;
		}
	}
}
