#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int pos=0,negatif=0,banyak=0;
	int x;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x;
		if (x>0)
			pos=pos+x;
		else if ((x==-1) && (i==0)){
			banyak++;
			negatif=0;
		}
		else if ((x==-1) && (i!=0))
			{
				negatif++;
				if (pos<negatif)
					banyak++;
				else {
					pos=pos-negatif;
				}
				negatif=0;
			}
	}
	printf("%d\n",banyak);
}