#include <bits/stdc++.h>
using namespace std;
int main(){
	long long  a,b;
	long long  i,nilai;
	
	cin>>a>>b;
	while ((a!=0)||(b!=0)) {
		if (a>=b)
			{
				nilai=3*b-(a+b);
			}
		else
			nilai=3*a-(a+b);
		cout<<nilai<<endl;
		cin>>a>>b;
	}
	return 0;
	
}