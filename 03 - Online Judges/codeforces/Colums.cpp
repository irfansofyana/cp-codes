#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k;
int ans;
char A[105][105],prev;
string sebelum[105],temp;
bool pertama;

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			cin >> A[i][j];
	for (i=0;i<101;i++) sebelum[i]="";
	pertama = false;
	for (i=0;i<m;i++) {
		if (!pertama){
			for (j=0;j<n;j++) {
				if (j==0) prev = A[j][i];
				else if (int(A[j][i])-'a'>=int(prev)-'a') prev=A[j][i];
				else if (int(A[j][i])-'a'<int(prev)-'a') {
					ans++;
					pertama = true;
					break;
				}
			}
			if (!pertama) {
				pertama = true;
				for (j=0;j<n;j++) 
					sebelum[j] = sebelum[j]+A[j][i];
			}
			else pertama = false;
		}
		else {
			temp = sebelum[0]+A[0][i];
			k = 0;
			for (j=1;j<n;j++) {
				if (sebelum[j]+A[j][i]<temp) {
					ans++;
					break;
				}
				else if (sebelum[j]+A[j][i]>temp || sebelum[j]+A[j][i]==temp) {
					temp = sebelum[j]+A[j][i];
					k++;
				}  
			}
			if (k==n-1) {
				for (j=0;j<n;j++)
					sebelum[j] = sebelum[j]+A[j][i];
			}
		}
	}
	cout << ans << endl;
}
