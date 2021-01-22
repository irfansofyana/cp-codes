#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	double jawaban;
	
	cin>>a>>b>>c>>d;
	jawaban=(int(a)/b)*(int(1)/(1-((1-int(a)/b)*(1-int(c)/d)));
	cout<<setprecision(13);
	cout<<jawaban<<endl;
}