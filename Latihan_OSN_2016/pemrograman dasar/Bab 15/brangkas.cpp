#include <bits/stdc++.h>
using namespace std;

int n,k;
int i,j;
int A[10];
int ambil[10];

void kombinasi(int udah,int _last){
	if (udah==k) {
		for (int z = 0 ;z < k ;z++) {
			cout << ambil[z];
			cout << (z==k-1 ? '\n':' ');
		}
	}
	else {
		for (int z = _last+1 ; z < n-(k-udah)+1 ; z++) 
			ambil[udah] = A[z];
			kombinasi(udah+1,z);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) A[i] = i+1;
	kombinasi(0,-1);
	return 0;
}