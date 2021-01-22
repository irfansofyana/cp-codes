#include <bits/stdc++.h>
using namespace std;

int n;
int pos,neg,ganjil,genap;

int main(){
	cin.tie(0);
	cin>>n;
	while (cin){
		if (n>0) pos++;
		else if (n<0) neg++;
		if (abs(n)%2==0) genap++;
		else if (abs(n)%2==1) ganjil++;
		cin>>n;
	}
	cout<<genap<<" valor(es) par(es)"<<endl;
	cout<<ganjil<<" valor(es) impar(es)"<<endl;
	cout<<pos<<" valor(es) positivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
	return 0;
}
