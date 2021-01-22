#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e4 + 5;

int n,m,i,j;
int A[MAXN],B[MAXN];
int prefixA[MAXN],prefixB[MAXN];
int startA,startB,numb;

int binser(int lleft, int rright){
	int mid = (lleft + rright)/2;
	if (lleft > rright) return -1;
	else if (B[mid] == numb) return mid;
	else if (B[mid] > numb) return binser(lleft,mid-1);
	else if (B[mid] < numb) return binser(mid+1,rright);
}

int cari(int temp[],int ki,int ka){
	return (ki == 0 ? temp[ka] : temp[ka]-temp[ki-1]);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		else {
			for (i = 0 ; i < n ; i++) {
				cin >> A[i];
				if (i == 0) prefixA[i] = A[i];
				else prefixA[i] = prefixA[i-1] + A[i];
			}
			cin >> m;
			for (i = 0; i < m ; i++) {
				cin >> B[i];
				if (i == 0) prefixB[i] = B[i];
				else prefixB[i] = prefixB[i-1] + B[i];
			}
			startA = startB = 0;
			/*for (i = 0 ; i < n ; i++) {
				cout << prefixA[i] << " ";
			}cout << '\n';
			for (i = 0 ; i < m ; i++) {
				cout << prefixB[i] << " ";
			}cout << '\n';*/
			int ans = 0;
			for (i = 0 ; i < n ; i++) {
				numb = A[i];
				if (binser(0,m-1) != -1) {
					int posisi = binser(0,m-1);
					int pilihA = cari(prefixA,startA,i);
					int pilihB = cari(prefixB,startB,posisi);
					ans += max(pilihA,pilihB);
					startA = i+1;
					startB = posisi+1;
				}
			}
			ans += max(cari(prefixA,startA,n-1),cari(prefixB,startB,m-1));
			cout << ans << '\n';
		}
	}
	return 0;
}