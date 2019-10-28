#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int x,y,ans;
string perintah;
bool A[10005],pertama;

int main(){
	cin.tie(0);
	cin >> n >> k;
	memset(A,false,sizeof A);
	pertama = true; ans = n;
	while (k--) {
		cin >> perintah;
		if (perintah=="HUBUNG") {
			cin >> x >> y;
			if (pertama) {
				n--;
				cout << n << endl;
				A[x] = true; A[y] = true;
				pertama = false;
			}
			else {
				if (!A[x] && !A[y]) {
					n--;
					cout << n < endl;
					A[x] = true; A[y] = true;
				}
			}
		}
		else 
	}
	return 0;
}