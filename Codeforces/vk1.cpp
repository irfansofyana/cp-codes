#include <bits/stdc++.h>
using namespace std;

int a,b,c;
double akar1,akar2;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	cin>>a>>b>>c;
	akar1 = (-1*b+(sqrt(b*b-4*a*c)))/(2*a);
	akar2 = (-1*b-(sqrt(b*b-4*a*c)))/(2*a);
	if (akar1==akar2) cout<<akar1<<endl;
	else if (akar1<akar2) cout<<akar1<<" "<<akar2<<endl;
	else cout<<akar2<<" "<<akar1<<endl;
	return 0;
}
