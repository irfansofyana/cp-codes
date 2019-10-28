#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long x,i,j,a,b,bilangan;
	long long banyak=0;
	
	cin>>a>>b;
	bilangan=a-b;
	if (bilangan==0)
		cout<<"infinity"<<endl;
	else{
		banyak=0;
		for (i=1;i<=static_cast<long long>(sqrt(bilangan));i++){
			if (bilangan%i==0){
				x=(bilangan/i);
				if (x!=i){
					if (a%x==b && a%i==b) banyak=banyak+2;
					else if (a%x==b || a%i==b) banyak++;
				}
				else if (x==i){
					if (a%x==b || (a%i==b)) banyak++;
				}
			}
		}
		cout<<banyak<<endl;
	}
	return 0;
}
