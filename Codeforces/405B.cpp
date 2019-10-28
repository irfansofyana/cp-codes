#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
char kartu[3005];
bool pertama;

int main(){
	scanf("%d", &n);
	scanf("%s", &kartu);
	i = 0; pertama = true;
	while (i<n) {
		if (kartu[i]=='.') i++;
		else if (kartu[i]=='L' && pertama) {
			for (j=i;j>=0;j--) kartu[j] = 'U';
			pertama = false;
			i++;
		} 
		else if (kartu[i]=='R') {
			j = i+1;
			kartu[i] = 'U';
			while (j<n && kartu[j]=='.') {
				kartu[j] = 'U';
				j++;
			}
			kartu[j] = 'U';
			if (j==n) break;
			else if ((j-i+1)%2==1) {
				kartu[(j+i)/2] = '.';
			}
			i = j+1;
		}
	}
	for (i=0;i<n;i++)
		if (kartu[i]=='.') ans++;
	printf("%d\n", ans);
	return 0;
}
