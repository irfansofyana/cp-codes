#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	int i;
		cin>>a>>b>>c;
	while (cin){
		if ((a==b) && (b!=c))
			printf("C\n");
		else if ((a==c) && (c!=b))
			printf("B\n");
		else if ((b==c) && (a!=c))
			printf("A\n");
		else if ((a==b) && (b==c))
			printf("*\n");
		cin>>a>>b>>c;
	}
	return 0;
}