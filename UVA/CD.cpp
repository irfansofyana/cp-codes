#include <bits/stdc++.h>
using namespace std;

int maks,temp,sum,banyak;
int n,i,j,durasi,ans;
int A[30];
bool found = false;

int main() {
	while (cin>>durasi>>n) {
		for (i=0;i<n;i++) 
			cin >> A[i];
		found = false; 
		for (i=1;i<(1<<n);i++) {
			temp = 0;
			sum = 0;
			for (j=0;j<n;j++) {
				if ((i&(1<<j))!=0) {
					sum += A[j];
					temp++;
				}
			}
			if (sum<=durasi && !found) {
				banyak = temp;
				maks = sum;
				ans = i;
				found = true;
			}
			else if (sum<=durasi) {
				if (temp>banyak) {
					if (sum>=maks) {
						maks = sum;
						ans = i;
						banyak = temp;
					}
				}
				else if (temp==banyak) {
					if (sum>maks) {
						maks = sum;
						ans = i;
					}
				}
				else if (temp<banyak ){
					if (sum>maks) {
						maks = sum;
						ans = i;
						banyak = temp;
					}
				}
			}
		}
		for (j=0;j<n;j++) 
			if ((ans&(1<<j))!=0) cout << A[j] << " ";
		cout << "sum:"<< maks << endl; 	
	}
}
