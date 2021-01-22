#include <bits/stdc++.h>
using namespace std;

int v[5]={1,2,3,4,5};
int maks,n,i,j,temp;
int A[7][7];
bool pertama=true;

int main(){
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf("%d",&A[i][j]);
	do{
		temp = 0;
		for (i=0;i<4;i++){
			for (j=i;j<4;j+=2) 
				temp += A[v[j]-1][v[j+1]-1]+A[v[j+1]-1][v[j]-1];
		}
		if (pertama) {
			maks = temp;
			pertama = false;
		}
		else if (temp>maks) maks = temp;
	} while (next_permutation(v,v+5));
	printf("%d\n",maks);
}
