#include<iostream>
#include<string>

using namespace std;
int main(){
	long long r,g,b;
	cin>>r>>g>>b;
	long long num=0;
	for(int i=0;i<3;i++){
		if(r-i>=00&&g-i>=0&&b-i>=0)
		num=max(num,i+(r-i)/3+(g-i)/3+(b-i)/3);
	}
	cout<<num<<endl;

}
