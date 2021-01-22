#include <bits/stdc++.h>
using namespace std;

int ambil[55];
int n, m;


void kombinasi(int pos,int bef){
	if (pos==m) {
		for (int z = 0 ; z < m ; z++) {
			cout << ambil[z]+1 ;
			cout << (z==m-1 ? '\n': ' ');
		}
	}
	else {
		for (int z = bef + 1 ; z < n-m+pos+1; z++){
			ambil[pos] = z;
			kombinasi(pos+1,z);
		}
	}
}

int main(){
	for (int i = 0; i < 6; i++) ambil[i] = i + 1;
	n = 6; m = 3;
	kombinasi(0, -1);
	return 0;
}