#include <bits/stdc++.h>
using namespace std;
int main(){
	double M[12][12];
	int i,j;
	double jumlah=0,average;
	char a;
	
	cin>>a;
	if (a=="S"){
		for (i=0;i<=11;i++)
			for (j=0;j<=11;j++){
				cin>>A[i][j];
				if (((i<=4)&&(j>=i+1)) && (j<=10-i))
					jumlah=jumlah+A[i][j];
			}
		printf("%.1lf\n",jumlah);
	}
	else if (a=="M"){
	for (i=0;i<=11;i++)
			for (j=0;j<=11;j++){
				cin>>A[i][j];
				if (((i<=4)&&(j>=i+1)) && (j<=10-i))
					jumlah=jumlah+A[i][j];
			}
		average=jumlah/30;
		printf("%.1lf\n",average);
	}
	return 0;
}