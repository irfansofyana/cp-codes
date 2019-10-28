#include <bits/stdc++.h>
using namespace std;

int x,y,a,b;
int panjang;

int main(){
	cin>>x>>y>>a>>b;
	if (y==b){
		panjang=abs(a-x);
		cout<<x<<" "<<y+panjang<<" "<<a<<" "<<b+panjang<<endl;
	}
	else{
		if (x==a){
			panjang=abs(b-y);
			cout<<x+panjang<<" "<<y<<" "<<a+panjang<<" "<<b<<endl;
		}
		else{
			if (abs(b-y)!=abs(a-x)) cout<<-1<<endl;
			else cout<<x<<" "<<b<<" "<<a<<" "<<y<<endl;
		}
	}
	return 0;
}
