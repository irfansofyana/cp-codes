#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int a,b,c,d;
	int k=0;
	
	for (a=1;a<=8;a++){
		k++;
		for (b=1;b<=4;b++){
			k++;
			for (c=1;c<=5;c++){
				k++;
			}
		}	
	}
	cout<<k<<endl;
}
