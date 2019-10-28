#include <bits/stdc++.h>
using namespace std;

long long i,a,b,pembagi;
long long banyak;

int main(){
	cin.tie(0);
	cin>>a>>b;
	if (a==b) cout<<"infinity"<<endl;
	else{
	banyak=0;
	for (i=1;i<=static_cast<long long>(sqrt(a-b));i++){
		if ((a-b)%i==0){
			pembagi=((a-b)/i);
			if (pembagi!=i){
				if (a%i==b) banyak++;
				if (a%pembagi==b) banyak++;
			}
			else if (pembagi==i){
				if (a%i==b) banyak++;
			}
		}
	}
	cout<<banyak<<endl;
	}
}
