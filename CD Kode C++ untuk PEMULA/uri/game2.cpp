#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,b1,b2;
	int a3,b3;
	
	scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
	
	if (a1>=b1) 
		{
			a1=a1-12;
			b1=b1+12;
			if (a2>=b2)
				{
					b2=b2+60;
					b1=b1-1;
					b3=b2-a2;
					a3=b1-a1;
				}
			else
			{
			b3=b2-a2;
			a3=b1-a1;
			}
				
		}
	else 
	{
		if (a2>=b2)
		{
		b2=b2+60;
		b1=b1-1;
		b3=b2-a2;
		a3=b1-a1;
		}
		else
		{
		b3=b2-a2;
		a3=b1-a1;
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a3,b3);
	return 0;
}