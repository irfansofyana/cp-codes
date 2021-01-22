#include <bits/stdc++.h>
using namespace std;
int main(){
	int b1,b2,b3,b4,b5;
	string s1,s2,s3,s4;
	double d1,d2;
	char c1,temp1,temp2;
	
	cin>>b1>>temp1>>b2>>temp2>>b3>>s1>>d1>>s2>>c1>>b4>>b5>>s3>>s4>>d2;
	cout<<"First name : "<<s3<<endl;
	cout<<"Last name : "<<s4<<endl;
	cout<<"Address : "<<s2<<" "<<c1<<endl;
	cout<<"No : "<<b3<<endl;
	cout<<"City : "<<s1<<" "<<b5<<endl;
	cout<<"Birth : "<<b3<<" "<<temp2<<" "<<b2<<" "<<temp1<<" "<<b1<<endl;
	cout<<"sum: "<<d1<<" "<<"+"<<" "<<d2<<" "<<"="<<" "<<d1+d2<<endl;
}