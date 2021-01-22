#include <bits/stdc++.h>
using namespace std;
int main(){
	int lilin,a,b,j;
	int jam;
	
	cin>>a>>b;
	j=1;
	lilin=a;
	jam=0;
	while (lilin!=0){
		if (j%b==0){
			lilin=lilin-1;
			lilin=lilin+1;
			jam++;
		}
		else{
			lilin=lilin-1;
			jam++;
		}
		j++;
	}
	printf("%d\n",jam);
	return 0;
}