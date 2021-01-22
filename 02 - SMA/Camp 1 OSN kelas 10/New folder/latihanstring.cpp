#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	char A[100][100];
	char sebelum1,sebelum2;
	bool p=true,q=true;
	
	cin>>n>>m;
	i=0;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++)
			cin>>A[i][j];
	}
	i=0;a
	while ((i<n) && (p)){
		j=0;
		while ((j<m) && (p)){
			if (j==0){
				sebelum1=A[i][j];
				j++;
			}
			else{
				if ((j%2==1) && (A[i][j]==sebelum1))
					p=false;
				else if (((j%2==1) && (A[i][j]!=sebelum1)) && (q)){
						sebelum2=A[i][j];
						q=false;
						j++;
				}
				else if (((j%2==1) && (A[i][j]!=sebelum2) && (q==false))){
					p=false;
					break;
				}
				else if (((j%2==1) && (A[i][j]==sebelum2)))
					j++;
				else if ((j%2==0) && (A[i][j]!=sebelum1)){
					p=false;
					break;
				}
				else if ((j%2==0) && (A[i][j]==sebelum1))
					j++;
			}
		}
		i++;
	}
	if (p)
		cout<<"Ya"<<endl;
	else
		cout<<"tidak"<<endl;
}
