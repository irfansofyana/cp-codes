#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,i;
char temp;
bool cek=false;

int main(){
	cin>>a>>temp>>b;
	if (a==23){
		if (b<32) cout<<23<<':'<<32<<endl;
		else cout<<"00:00"<<endl;
	}
	else {
		i=a;
		c=i%10;
		d=i/10;
		if (10*c+d>b && 10*c+d<=59) {
			if (i<10 && 10*c+d<10) cout<<'0'<<i<<':'<<'0'<<10*c+d<<endl;
				else if (i<10) cout<<'0'<<i<<':'<<10*c+d<<endl;
				else if (10*c+d<10) cout<<i<<':'<<'0'<<10*c+d<<endl;
				else cout<<i<<':'<<10*c+d<<endl;
		}
		else{
		i++;
		while (!cek){
			c=i%10;
			d=i/10;
			if (i<=23 && 10*c+d<=59 ){
				cek=true;
				if (i<10 && 10*c+d<10) cout<<'0'<<i<<':'<<'0'<<10*c+d<<endl;
				else if (i<10) cout<<'0'<<i<<':'<<10*c+d<<endl;
				else if (10*c+d<10) cout<<i<<':'<<'0'<<10*c+d<<endl;
				else cout<<i<<':'<<10*c+d<<endl;
			}
			else i++;
		}
		}
	}
}
