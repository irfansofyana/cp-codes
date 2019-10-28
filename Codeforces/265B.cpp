#include <bits/stdc++.h>
using namespace std;

int n,i,j,tinggi;
int h[100005];
int ans;

int main(){
	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d",&h[i]);
	for (i=0;i<n;i++) {
		ans+=(h[i]-tinggi+1);
		tinggi = h[i];
		if (i!=n-1) {
			if (h[i+1]<=tinggi) {
				ans+=tinggi-h[i+1]+1;
				tinggi = h[i+1];
			}
			else if (h[i+1]>tinggi) {
				ans++;
			}
		} 
	}
	printf("%d\n", ans);
	return 0;
}
