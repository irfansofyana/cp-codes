#include <bits/stdc++.h>
using namespace std;
const int xmin=-10,maxx=10,ymin=-10,maxy=10;

int code(int p,int q){
	int c;
	c=0;
	if (p<xmin) c=c||8;
	else if (p>maxx) c=c||1;
	if (q<ymin) c=c||4;
	else if (q>maxy) c=c||2;
	return c;
}

int main(){
	int c;
	cout<<code(-12,-12)<<endl;
	c=code(-12,-12) && code(20,5);
	cout<<c<<endl;
}
