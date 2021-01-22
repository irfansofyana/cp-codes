#include <bits/stdc++.h>
using namespace std;
int a, b, s, jarak;
int main () {
	scanf ("%d %d %d", &a, &b, &s);
	jarak = abs(a)+abs(b);
	if (jarak<=s)
		if ((s-jarak)%2==0) printf ("Yes\n");
		else printf ("No\n");
	else printf ("No\n");
	return 0;
}
