#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int kanan,kiri,bka,bki;

int main(){
	scanf("%d", &n);
	for (i = 1; i <= n ; i++) {
		if (i==1) {
			kiri = kanan = n;
			for (j = 1 ; j <= kanan ; j++) {
				if (j==kiri || j==kanan) printf("*\n");
				else printf(" ");
			}
			kiri --; kanan++;
		}
		else if (i<((n+1)/2) && i!=1) {
			for (j = 1 ; j <= kanan ; j++) {
				if (j==kiri) printf("*");
				else if (j==kanan) puts("*");
				else printf(" ");
			}
			kiri --; kanan++;
		}
		else if (i==((n+1)/2)) {
			for (j=1;j<=n-((n+1)/2);j++) printf(" ");
			for (j = 1 ; j <= n ; j++) {
				if (j==n) printf("*\n");
				else printf("*");
			}
		}
		else if (i==((n+1)/2)+1) {
			bki = kiri-1; bka = kanan+1;
			kiri ++; kanan --;
			for (j = 1 ; j <= bka ; j++) {
				if (j==bka) puts("*");
				else if (j==bki) printf("*");
				else if (j==kiri || j==kanan) printf("*");
				else printf(" ");
			}
			bki--; bka++; kiri++; kanan--;
		}
		else if (i>((n+1)/2)+1 && i!=n) {
			for (j = 1 ; j <= bka ; j++) {
				if (j==bka) printf("*\n");
				else if (j==bki) printf("*");
				else if (j==kiri || j==kanan) printf("*");
				else printf(" ");
			}
			bki--; bka++; kiri++; kanan--;
		}
		else if (i==n) {
			for (j = 1 ; j <= 2*n-1 ; j++) {
				if (j==2*n-1) printf("*\n");
				else printf("*");
			}
		}
	}
	return 0;
}
