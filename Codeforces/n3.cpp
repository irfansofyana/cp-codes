#include <bits/stdc++.h>
using namespace std;

int k,n1,n2,n3;

int main(){
	n1=8;n2=4;
	cin>>n3;
	for (int i=1;i<=n1;i++){
		k++;
		for (int j=1;j<=n2;j++){
			k++;
			for (int l=1;l<=n3;l++){
				k++;
			}
		}
	}
	 cout<<k<<endl;
}
