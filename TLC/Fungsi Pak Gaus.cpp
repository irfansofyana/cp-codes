#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	long long n,i,j,k;
	long long hasil;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a>>b>>c;
		hasil=1;
		for (j=1;j<=a;j++){
			hasil=(hasil*j)%c;
		}
		k=1;
		for (j=1;j<=b;j++){
			k=(k*hasil)%c;
		}
		cout<<k<<endl;
	}
}
