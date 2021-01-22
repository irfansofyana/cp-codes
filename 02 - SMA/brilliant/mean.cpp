#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,l;
int a[]={1,2,3,4,5,6,7,8};

int main(){
	for (i = 0 ; i <  4 ; i++){
		for (j = i+1; j < 5; j++){
			for (k = j+1; k < 6; k++){
				for (l = k+1; l < 7 ; l++){
					for (m = l+1; m < 8 ; m++) {
						if (4*a[k]==a[i]+a[j]+a[l]+a[m]) n++;
					}
				}
			}
		}
	}
	cout << n << '\n';
}
