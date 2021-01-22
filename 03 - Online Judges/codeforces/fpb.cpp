#include <bits/stdc++.h>
using namespace std;
int fpb(int p,int q){
	if (q==0)
		return p;
	else
		return fpb(q,p%q);
}
int main(){
	int a,b;
	int c;
	cin>>a>>b;
	c=fpb(a,b);
	cout<<c<<endl;
}
