#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m,q,k,l;
	int A[100][100],B[100][100];
	bool p=true;
	
	cin>>n>>n;
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				cin>>A[i][j];
		}
	cin>>n>>n;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				cin>>B[i][j];
		}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (A[i][j]!=B[i][j]){
				p=false;
				break;
			}
		}
		if (p==false)
			break;
	}
	if (p){
		cout<<"identik"<<endl;
		return 0;
	}
	else{
		p=true;
		k=n-1;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (A[i][j]!=B[k][j]){
					p=false;
					break;
				}	
			}
			k=k-1;
			if (p==false)
				break;
		}
		if (p){
			cout<<"horisontal"<<endl;
			return 0;
		}
		else{
			p=true;
			for (i=0;i<n;i++){
				k=n-1;
				for (j=0;j<n;j++){
					if(A[i][j]!=B[i][k]){
						p=false;
						break;
					}
					else
						k=k-1;
				}
				if (p==false)
					break;
			}
			if (p){
				cout<<"vertikal"<<endl;
				return 0;
			}
			else{
				p=true;
				for (i=0;i<n;i++){
					for (j=0;j<n;j++){
						if (A[i][j]!=B[j][i]){
							p=false;
							break;
						}
					}
					if (p==false)
						break;
				}
				if (p){
					cout<<"diagonal kanan bawah"<<endl;
					return 0;
				}
				else{
					p=true;
					k=n-1;
					l=n-1;
					for (i=0;i<n;i++){
						k=n-1;
						for (j=0;j<n;j++){
							if (A[i][j]!=B[k][l]){
								p=false;
								break;
							}
							else
								k=k-1;
						}
						if (p==false)
							break;
						else
							l=l-1;
					}
				if (p){
					cout<<"diagonal kiri bawah"<<endl;
					return 0;
				}
				else{
					cout<<"tidak identik"<<endl;
					return 0;
				}	
			}
			}
		}
	}
}
