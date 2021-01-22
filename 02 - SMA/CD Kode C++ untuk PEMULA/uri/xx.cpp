#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,i=0,g=0,s=0;
	int y=1;
	int k,l;
	
	cin>>m>>n;
	if (m>n)
		i++;
	else
	if (m<n)
		g++;
	else
		s++;
		
	cin>>k;
		while (k!=2)
		{
			y++;
			cin>>m>>n;
			if (m>n)
				i++;
			else
			if (m<n)
				g++;
			else
				s++;
			cin>>k;
		}
	for (l=1;l<=y;l++)
		printf("Novo grenal (1-sim 2-nao)\n");
	printf("%d grenais\n",(i+g+s));
	printf("Inter:%d\n",i);
	printf("Gremio:%d\n",g);
	printf("Empates:%d\n",s);
	if (i>g)
		printf("Inter venceu mais\n");
	else
		printf("Gremio venceu mais\n");
	return 0;
}