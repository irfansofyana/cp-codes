#include <bits/stdc++.h>
using namespace std;

int hasil,temp;
int main(){
	cin.tie(0);
	hasil=1;
	for (int i=1;i<=42;i++){
		hasil=(hasil*6)%49;
	}
	cout<<hasil<<endl;
	temp=1;
	for (int i=1;i<=2015;i++){
		temp=(temp*8)%49;
	}
	cout<<(hasil+temp)%49<<endl;
}
