#include <bits/stdc++.h>
using namespace std;

double a,b,c,d;
double rata;
long long banyak;
string temp,jawaban;

string konvert(double p){
	stringstream ss;
	ss<<p;
	return ss.str();
}
int main(){
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	rata=((a+b+c+d)/4);
	temp=konvert(rata);
	cout<<temp.find('.');
}
