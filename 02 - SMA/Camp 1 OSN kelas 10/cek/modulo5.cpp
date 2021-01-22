#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	
	cin>>n;
	if (n%2==1){
		cout<<0<<endl;
	}
	else {
		if (n%4==2)
			cout<<0<<endl;
		else
			cout<<4<<endl;
	}
}
