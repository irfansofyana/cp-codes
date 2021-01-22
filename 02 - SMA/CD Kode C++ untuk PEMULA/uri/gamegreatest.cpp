#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a,b,i;
	int menang1=0,menang2=0;
	
	cin>>n;
	while (n!=0){
		menang1=0;
		menang2=0;
		for (i=1;i<=n;i++){
			cin>>a>>b;
			if (a>b)
				menang1++;
			else if (a<b)
				menang2++;
		}
		printf("%d %d\n",menang1,menang2);
		cin>>n;
	}
}