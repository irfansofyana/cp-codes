#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,n,d,i,j;
	bool p;
	int jumlah[101];
	
	cin>>n>>d;
	while ((n!=0)||(d!=0)){
	for (i=1;i<=n;i++)
		jumlah[i]=0;
	for (i=1;i<=d;i++){
		for (j=1;j<=n;j++){
			cin>>x;
			jumlah[j]=jumlah[j]+x;
		}
	}
	i=1;
	p=false;
	while ((i<=n) and (not p)){
		if (jumlah[i]==d)
			p=true;
		else
		i++;
	}
	if (p==true) 
		printf("yes\n");
	else
		printf("no\n");
	cin>>n>>d;
	}
	return 0;
}