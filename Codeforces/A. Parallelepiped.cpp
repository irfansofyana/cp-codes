#include <bits/stdc++.h>
using namespace std;
int main(){
	long long i;
	long long a,b,c,r,s,t;
	long long k;
	
	cin>>a>>b>>c;
	r=static_cast<long long>(sqrt((b*c)/a));
	q=static_cast<long long>(sqrt((a*b)/c));
	p=static_cast<long long>(sqrt((a*c)/b));
	cout<<3*(p+q+r)<<endl;
}