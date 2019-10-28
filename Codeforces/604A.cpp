#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int A[5],B[5],skor[]={500,1000,1500,2000,2500};
int s,g,i,j;
int ans;

int main(){
	OPTIMASI
	for (i = 0 ; i < 5; i++) cin >> A[i];
	for (i = 0 ; i < 5 ; i++) cin >> B[i];
	cin >> s >> g;
	for (i = 0 ; i < 5 ; i++) {
		int temp = ((250-A[i])*skor[i])/250;
		ans += max((3*skor[i])/10,temp-50*B[i]);
	}
	ans += 100*s; ans -= 50*g;
	cout << ans << '\n';
	return 0;
}