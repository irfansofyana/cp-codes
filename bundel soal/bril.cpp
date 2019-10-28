#include <bits/stdc++.h>
using namespace std;

int i,j,k;
int ans;
int l;

int main(){
	for (i=0;i<=45;i++) {
		for (j=0;j<=45;j++) {
			for (k=0;k<=45;k++) {
				for (l=0;l<=45;l++) {
					if (i+j+k+l>=90) ans++;
				}
			}
		}
	}	
}
