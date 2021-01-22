#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,l;
	int t,i,jarak;
	int biaya=0;
	
	scanf("%d",&t);
	for (i=0;i<t;i++){
		biaya=0;
		scanf("%d %d %d",&a,&b,&l);
		if (l<=2000) biaya=a;
		else{
			biaya=a;
			jarak=l-2000;
			biaya=biaya+(jarak/100)*b;
		}
		printf("%d\n",biaya);
	}
	return 0;
}
