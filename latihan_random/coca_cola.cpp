#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,n,k,i,j;
	int p=0,q=0;
	int banyak=0;
	
	cin>>k>>m>>n;
	while (p<n){
		if (q<k){
			q++;
			banyak++;
			p++;
		}
		else if (q==k){
			p+=m;
			q=m;
		}
	}
	cout<<banyak<<endl;
}
