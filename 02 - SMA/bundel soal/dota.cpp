#include <bits/stdc++.h>

using namespace std;
int n,gold,i,j;
int A[1000005];
int ans;
bool temu;
int main(){
	scanf("%d %d",&n,&gold);
	for (i=0;i<n;i++) scanf("%d",&A[i]);
	sort(A,A+n);
	i = 0;
	temu = false;
	for (i=0;i<n;i++) if (gold%A[i]==0) temu = true;
//	if (temu) printf("temu\n");
	if (!temu){
		i=0;
		while (i<n) {
			if (i==0) {
				if (A[i]<gold) {gold-=A[i]; i++;}
				else if (A[i]>gold) {
					ans += A[i]-gold;
					break;
				}
			}
			else {
				if (gold>A[i]) {gold-=A[i]; i++;}
				else if (abs(gold-A[i])<abs(gold-A[i-1])) {ans +=abs(gold-A[i]); break;}
				else if (abs(gold-A[i-1])<abs(gold-A[i])) i--;
			}
		}
	}
	printf("%d\n",ans);
}