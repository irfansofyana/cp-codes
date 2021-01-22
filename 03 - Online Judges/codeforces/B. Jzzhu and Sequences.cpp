#include <bits/stdc++.h>
using namespace std;
long long x,y,n;
long long maks=1000000007 ;

long long modulo(long long x){
	long long bantuan;
	if (x<0){
		bantuan=abs(x)/maks+1;
		return (bantuan*maks+x)%maks;
	} 
	else return (x%maks);
}

int main(){
	cin.tie(0);
	cin>>x>>y;
	cin>>n;
	switch(n%6){
		case 0: cout<<modulo(-y+x)<<endl;break;
		case 1: cout<<modulo(x)<<endl;break;
		case 2: cout<<modulo(y)<<endl;break;
		case 3: cout<<modulo(y-x)<<endl;break;
		case 4: cout<<modulo(-x)<<endl;break;
		case 5: cout<<modulo(-y)<<endl;break;
	}
	return 0;
}
