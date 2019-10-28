#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e;
	bool kiri,kanan;
	
	kiri=true;
	kanan=true;
	cin>>a>>b>>c>>d>>e;
	if (b>a || d>c)	
		kanan=false;
	if (c>b || e>d)
		kiri=false;
	
	if (kiri==true && kanan==true)
		cout<<2<<endl;
	else if (kiri==false && kanan==true)
		cout<<-1<<endl;
	else if (kiri==true && kanan==false)
		cout<<1<<endl;
	else
		cout<<0<<endl;
	return 0;

}