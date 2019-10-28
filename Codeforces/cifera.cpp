#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long n,l,banyak=0;
	bool p=true;
	
	cin>>n;
	cin>>l;
	if (l%n!=0)
		p=false;
	else{
		while (l%n==0){
			banyak++;
			l=l/n;
		}
		if (l!=1){
			p=false;
		}
		else{
			p=true;
		}
	}
	if (p==false){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		cout<<banyak-1<<endl;
	}
	return 0;
}
