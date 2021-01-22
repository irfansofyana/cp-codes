#include <bits/stdc++.h>
using namespace std;

int i,j,ans;
vector<int> A,B;

int main(){
	for (i = 1 ; i<= 100; i++) {
		for (j = 1 ; j<= 100 ; j++) {
			for (int k = 1 ; k<=100; k++) {
				if (i*j*k==72) ans++;
			}
		}
 	}
	cout << ans << '\n';
}