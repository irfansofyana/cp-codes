#include <bits/stdc++.h>

using namespace std;

int panjang, banyak;
int a, b;

int main() {
	cin>>panjang>>banyak;
	for(int i=0;i<banyak;i++) {
		cin>>a>>b;
		if(panjang%2==0) {
			a--;b--;
			if(a%(2*panjang)<panjang) a++;
			if(b%(2*panjang)<panjang) b++;
			if((a+b)%2==0) cout<<"tidak"<<endl;
			else cout<<"bisa"<<endl;
		}
		else {
			if((a%2==1)&&(b%2==1)) cout<<"bisa"<<endl;
			else cout<<"tidak"<<endl;
		}
	}
}
