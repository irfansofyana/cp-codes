#include <bits/stdc++.h>
using namespace std;

int n,i,j,a,b;
int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (i*j==((i%10)*10+(i/10))*((j%10)*10+(j/10))) cout<<i<<'*'<<j<<'='<<(i%10)*10+(i/10)<<'*'<<(i%10)*10+(i/10)<<endl;
		}
	}
	return 0;
}
