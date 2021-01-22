#include <bits/stdc++.h>
using namespace std;

int a,b;
char c;

int fpb(int p,int q){
	if (q==0) return p;
	else return fpb(q,p%q);
}
int main(){
	cin>>a>>c>>b;
	cout<<a<<'/'<<b<<" ";
	if (b==0) cout<<"Tidak terdefinisi"<<endl;
	else{
		a=a/fpb(a,b);
		b=b/fpb(a,b);
		cout<<a<<'/'<<b<<endl;
	}
}
