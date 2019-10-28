#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,sebelumx,sebelumy,maks=0;
	int A[100000],B[100000];
	int banyak=1;
	
	cin>>n;
	cin>>A[0]>>B[0];
	sebelumx=A[0];
	sebelumy=B[0];
	for (i=1;i<n;i++)
		{
			cin>>A[i]>>B[i];
			if ((A[i]==sebelumx) && (B[i]==sebelumy))
				banyak++;
			else
				if (banyak>maks)
					maks=banyak;
			sebelumx=A[i];
			sebelumy=B[i];
		}
	printf("%d\n",maks+1);
}