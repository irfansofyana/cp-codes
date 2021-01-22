#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long n,m,i;
	double d;
	
	cin>>n;
	m=static_cast<long long>(sqrt(n));
	if (m*m==n)
		cout<<m<<endl;
	else
		cout<<0<<endl;
}
