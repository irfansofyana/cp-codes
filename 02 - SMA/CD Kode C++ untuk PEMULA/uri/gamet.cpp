#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a,b,c;
	cin >>a>>b;
		if (a>=b)
			{
				a=a-12;
				b=b+12;
				c=b-a;
				printf("O JOGO DUROU %d HORA(S)\n",c);
			}
		else if (a<b)
		{
		c=b-a;
		printf("O JOGO DUROU %d HORA(S)\n",c);
		}
	return 0;
}