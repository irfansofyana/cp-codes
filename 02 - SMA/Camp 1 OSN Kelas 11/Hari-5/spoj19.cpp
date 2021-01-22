#include <bits/stdc++.h>
using namespace std;

int n,i,j,acuan;
int A[105];
bool sudah[105],pertama;

int main(){
	cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> A[i];
	}
	sort(A,A+n);
	i = 0;
	memset(sudah,false,sizeof sudah);
	while (i < n ){
		sudah[i] = true;
		j = i+1;
		while (A[j]==A[i] && j < n) j++;
		i = j;
	}
	/*for (i = 0; i < n ; i++) {
		if (sudah[i]) cout << i << " ";
	}
	cout << endl;*/
	pertama = true;
	for (i = n-1; i >= 0 ; i--) {
		if (!sudah[i] && pertama) {
			acuan = A[i];
			pertama = false;
		}
		else if (!sudah[i]) {
			if (A[i]>=acuan) {
				puts("No");
				return 0;
			}
			else acuan = A[i];
		}
	}
	puts("Yes");
	return 0;
}