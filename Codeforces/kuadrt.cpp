#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,l;
	int banyak=0;
	
	for (i=1;i<=30;i++){
		for (j=1;j<=30;j++){
			for (k=1;k<=30;k++){
				if (i*i+j*j+k*k==343) banyak++; 
			}
		}
	}
	cout<<banyak<<endl;
}
