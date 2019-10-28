#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, m, k = 0, temp;
	scanf ("%d %d", &a, &m);
	temp = a%m;
	do {
		a = a+(a%m);
		a = a%m;
		k++;
	}
	while (a!=0 && a!=temp && k<=m);
	if (a==0) 
		printf ("Yes\n");
	else
		printf ("No\n");
	return 0;
}
