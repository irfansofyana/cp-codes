#include <bits/stdc++.h>
using namespace std;

int n,i,j,a,b,c;
int x,y,z,bil;
int maks=-1000000;
int main(){
	cin >> n >> a >> b >> c;
	for (i=0;i<=n;i++){
		if (i%c==0) {
			z=i/c;
			bil=n-i;
			for (j=0;j<=n-i;j++){
				if (j%b==0) {
					y=j/b;
					if ((n-i-j)%a==0) {
						x=(n-i-j)/a;
						if (x+y+z>maks) maks=x+y+z; 
					}
				}
			}
		}
	}
	cout << maks << endl;
}
