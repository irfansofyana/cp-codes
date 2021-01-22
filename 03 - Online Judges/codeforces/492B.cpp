#include<bits/stdc++.h>
using namespace std;

int n,panjang,a[1010];
double dd,d;

int main(){
	scanf("%d%d",&n,&panjang);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	d = (double)a[0];
	for(int i=1;i<n;i++){
		dd = (double)((double)a[i]-(double)a[i-1])/2;
		d = max ( d,dd);
	}
	dd = (double)((double)panjang-(double)a[n-1]);
//	cout<<dd<<endl;
	d = max ( d,dd);
	printf("%.10lf\n",d);
}
