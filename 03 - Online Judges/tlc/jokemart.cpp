#include <bits/stdc++.h>
using namespace std;
string convert(long long k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	double a,b,c,d;
	double j;
	int l;
	string s,y;
	cin>>a>>b>>c>>d;
	j=(a+b+c+d)/4;
	s=convert((j));
	l=100*(j-static_cast<long long>(j));
	y=convert(l);
	if (l==0)
		cout<<"Rp "<<s<<","<<"00"<<endl;
	else
		cout<<"Rp "<<s<<","<<l<<endl;
}
