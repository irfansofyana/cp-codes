#include <bits/stdc++.h>
using namespace std;

int a,b,n;
int k,i;
bool neg;

int pangkat(int a,int b){
	int rs=1;
	for (int z=1;z<=b;z++)
		rs*=a;
	return rs;
}

int main(){
	cin.tie(0);
	cin >> a >> b >> n;
	if (a==0 || b==0) {
		if (b==0 && a!=0) cout << 0 << endl;
		else if (b==0 && a==0) cout << 2 << endl;
		else if (a==0 && b!=0) puts("No solution"); 
	}
	else if (b%a!=0) puts("No solution");
	else {
		k = b/a;
		if (k<0) neg = true;
		else neg = false;
		k = abs(k);
		for (i=1;i<=1000;i++) {
			if (pangkat(i,n)==k) {
				int bil = i;
				if (neg) bil*=-1;
				if (a*pangkat(bil,n)==b) {
					cout << bil << endl;
					break;
				}
			}
		}  
		if (i==1001) puts("No solution");
	}
	return 0;
}

