#include <bits/stdc++.h>
using namespace std;
int x[1000];

int bsearch(int l,int k,int d){
	int q;
	q=(l+k)/2;
	if (l>k)
		return -1;
	if (x[q]==d)
		return q+1;
	else{
		if (x[q]>d)
			return bsearch(l,q-1,d);
		else if (d>x[q])
			return bsearch(q+1,k,d);
	} 
		
}

int main(){
	int n,k,a,b,i;
	int p;
	cin>>n;
	a=0;
	b=n-1;
	for (i=0;i<n;i++)
		cin>>x[i];
	cin>>k;
	p=bsearch(a,b,k);
	cout<<p<<endl;	
}
