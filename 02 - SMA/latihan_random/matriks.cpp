#include <bits/stdc++.h>
#define INF 2e9
#define EPS 1e-9
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int n,i,j;
int A[35];
int matriks[1000][1000];

int ukuran(int k){
	int rs=0;
	while (k!=1) {
		rs++;
		k/=4;
	}
	return rs;
}

int jelajah(pii awal,pii akhir,int x){
	pii a1,a2,b1,b2,c1,c2,d1,d2;
	if (x==1) {
		return matriks[akhir.first][akhir.second];
	}
	else {
		a1 = awal;
		a2 = make_pair(((awal.first+akhir.first)/2),((awal.second+akhir.second)/2));
		b1 = make_pair(a1.first,a1.first+(x/2));
		b2 = make_pair(a2.first,a2.second+(x/2));
		c1 = make_pair(a1.first+(x/2),a1.second);
		c2 = make_pair(a2.first+(x/2),a2.second);
		d1 = make_pair(b1.first+(x/2),b1.second);
		d2 = make_pair(b2.first+(x/2),b2.second);
		return matriks[akhir.first][akhir.second]+jelajah(a1,a2,(x/2))+jelajah(b1,b2,(x/2))+jelajah(c1,c2,(x/2))+jelajah(d1,d2,(x/2));
	}
}

int main(){
	int bil;
	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d", &A[i]);
	sort(A,A+n);
	n = ukuran(n);
	bil = 1;
	for (i=0;i<(1<<n);i++) {
		for (j=0;j<(1<<n);j++) {
			matriks[i][j] = bil;
			bil++;
		}
	}
	/*for (i=0;i<(1<<n);i++) {
		for (j=0;j<(1<<n);j++) 
			printf("%d ",matriks[i][j]);
		printf("\n");
	}*/
	printf("%d\n", jelajah(make_pair(0,0),make_pair((1<<n)-1,(1<<n)-1),(1<<n)));
	return 0;
}
