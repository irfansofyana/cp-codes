#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,k,l,c,d,p,nl,np;
	int jawaban,a,b,e;
	int min;
	
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	a=k*l;
	a=(a/n);
	b=c*d;
	e=p/np;
	if (a<b)
		min=a;
	else
		min=b;
		
	if (min<e)
		jawaban=min/n;
	else if (min>e)
		jawaban=e/n;
	else
		jawaban=0;
	cout<<jawaban<<endl;
}