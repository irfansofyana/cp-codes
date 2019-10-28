#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	int jawaban;
	
	cin>>n>>a>>b>>c;
	if (a+b+c==n)
		cout<<3<<endl;
	else{
		if ((a+b==n) || (b+c==n) || (a+c==n))
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}
}
