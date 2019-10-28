#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define putra std
irfan sofyana putra;

int a,b,c,d;

int maks(int p,int q){
	if (p<q) return q;
	else return p;
}

int main(){
	int m,n;
	cin>>a>>b>>c>>d;
	m=maks((double(3*a)/10),a-((double(a)/250)*c));
	n=maks((double(3*b)/10),b-((double(b)/250)*d));
	if (m>n) cout<<"Misha"<<endl;
	else if (m<n) cout<<"Vasya"<<endl;
	else cout<<"Tie"<<endl;
	return 0;
}
