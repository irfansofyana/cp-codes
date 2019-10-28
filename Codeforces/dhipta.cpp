#include <bits/stdc++.h>
using namespace std;
long long simpan[2000];
int main(){
	ios::sync_with_stdio(0);
	long long x=1;
	long long a=1;
	long long b;
	long long y=0;
	for (int i=1;i<60;i++){
		x = x << 1;
		x++;
		for (int j=1;j<=i;j++){
			a=1;
			a = a << j-1;
			simpan[y]=x&~a;
			y++;
		}
	}
 
	cin>>a>>b;
	int c=0;
	for (int i=0;i<y;i++){
		if ((simpan[i]>=a)&&(simpan[i]<=b)){
			c++;
		}
	}
	cout<<c<<endl;
}