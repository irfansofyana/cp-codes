#include <bits/stdc++.h>
using namespace std;
long long n;
double hasil;
int main(){
	cin>>n;
	hasil=(0.5*(1-(double(1)/(n*n+n+1))));
	cout<<fixed<<showpoint;
	cout<<setprecision(5);
	cout<<hasil<<endl;
}
