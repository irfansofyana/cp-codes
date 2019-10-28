#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	long long hasil,ganjil;
	
	cin>>n>>k;
	if ((n%2)==1)
		{
			ganjil=((n/2)+1);
			if (k<=ganjil)
				hasil=2*k-1;
			else if (k>ganjil)
				hasil=2*(k-ganjil);
		}
	else 
		{
			ganjil=(n/2);
			if (k<=ganjil)
				hasil=2*k-1;
			else 
				hasil=2*(k-ganjil);
		}
	cout<<hasil<<endl;
	return 0;
}