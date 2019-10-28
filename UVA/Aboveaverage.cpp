#include <bits/stdc++.h>
using namespace std;
int c,n;
double nilai[1010];

int main(){
	scanf("%d",&c);
	while (c--){
		scanf("%d",&n); double sum=0;
		for (int i=0;i<n;i++){
			cin>>nilai[i];
			sum+=nilai[i];
		}
		double rata=sum/n; int banyak=0;
		for (int i=0;i<n;i++){
			if (nilai[i]>rata) banyak++;
		}
		double p=(double(banyak)/n)*100;
		printf("%.3lf%\n",p);
	}
	return 0;
}
