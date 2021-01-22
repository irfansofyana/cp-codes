#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, t, r, satu, dua, tambah;
int i,j,k,bip,udah;
char subtask[10];
char tanggapan[10];
int arr[1005];

int main(){
	scanf("%s", subtask);
	scanf("%d %d %d", &n, &t, &r);
	satu = -1, dua = -1;
	i = 1; udah = 0; j = 1;
	tambah = 1;
	while (bip < 2) {
		arr[j] = i;
		printf("%d\n", i);
		fflush(stdout);
		scanf("%s", tanggapan);
		if (tanggapan[0] == 'B') {
			bip++;
			if (satu == -1) satu =  j;
			else dua = j;
		}
		i += tambah;
		if (i > (n/2) && udah == 0) {
			i = n/2;
			tambah = -1;
		}
		else if (i == 0) {
			i = (n/2) + 1;
			udah = 1;
			tambah = 1;
		}
		else if (i > n) {
			i = n;
			tambah = -1;
		}
		else if (i == n/2 && udah == 1) {
			udah = 0;
			i = 1;
			tambah = 1;
		}
		j++;
	}
	while (arr[satu] != arr[dua]) {
		satu--; dua--;
	}
	while (bip < n) {
		printf("%d\n", arr[satu]);
		fflush(stdout);
		scanf("%s", tanggapan);
		if (tanggapan[0] == 'B') bip++;
	}
	return 0;
}
