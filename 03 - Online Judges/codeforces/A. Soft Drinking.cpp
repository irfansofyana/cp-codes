#include <bits/stdc++.h>
using namespace std;

int n,k,l,c,d,p,nl,np;

int min(int x,int y,int z){
	int minimal;
	if (x<y) minimal=x;
	else minimal=y;
	if (z<minimal) minimal=z;
	return minimal;
}

int main(){
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cout<<min(((k*l)/nl),c*d,(p/np))/n<<endl;
	return 0;
}
