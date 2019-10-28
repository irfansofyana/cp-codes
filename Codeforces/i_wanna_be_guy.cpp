#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q,banyak=0,i;
	int x[101];
	int y[101];
	int frek[101];
	
	
	cin>>n;
	for (i=1;i<=n;i++)
		frek[i]=0;
		
	cin>>p;
	for (i=1;i<=p;i++){
		cin>>x[i];
		frek[x[i]]++;
	}
	cin>>q;
	for (i=1;i<=q;i++){
		cin>>y[i];
		frek[y[i]]++;
	}
	for (i=1;i<=n;i++)
		if (frek[i]==0)
			banyak++;
	if (banyak==0)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}