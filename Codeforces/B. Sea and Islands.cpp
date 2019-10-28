#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
bool ganti;

int main(){
	cin.tie(0);
	
	cin >> n >> k;
	if (n%2==0 && k>(n/2)*n) puts("NO");
	else if (n%2==1 && k>((n+1)/2)*((n+1)/2)+((n-1)/2)*((n-1)/2)) puts("NO");
	else {
		puts("YES");
		for (i=0;i<n;i++){
			if (i%2==0) ganti = false;
			else ganti = true;
			for (j=0;j<n;j++) {
				if (!ganti && k>0) {
					cout<<'L';
					ganti = true;
					k--;
				}
				else if (ganti || k<=0) {
					cout<<'S';
					ganti = false;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
