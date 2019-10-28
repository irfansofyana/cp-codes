#include <bits/stdc++.h>
using namespace std;
int n,m,awal;
int i,j,gratis;

int main(){
	cin.tie(0);
	cin>>n>>m;
	if (m==1) cout<<1<<endl;
	else{
		if (n==m) cout<<n<<endl;
		else if (n<m) cout<<n+1<<endl;
		else if (n>m){
			gratis=0;
			awal=n;
			while (n>=m){
				gratis++;
				n=n-m;
			}
			cout<<awal+1-gratis<<endl;
		}
			
	}
	return 0;
}
