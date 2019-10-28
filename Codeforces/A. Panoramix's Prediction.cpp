#include <bits/stdc++.h>
using namespace std;
bool cekprima(int q){
	bool p=true;
	int j;
	if (q<=1)
		return false;
	else{
		j=2;
		while ((j<=int(sqrt(q))) && (p)){
			if (q%j==0)
				p=false;
			else
				j++;
		}
		return p;	
	}
}
int main(){
	int n,m,temp1,temp2;
	int i,j;
	int A[10000];
	bool x=true;
	j=1;
	cin>>n>>m;
	if (cekprima(m)==false)
		x=false;
	else{
	for (i=n+1;i<=m-1;i++){
		if (cekprima(i)){
			x=false;
			break;
		}
	}
	}
	if (x)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
