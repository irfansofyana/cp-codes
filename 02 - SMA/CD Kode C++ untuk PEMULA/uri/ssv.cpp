 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
	int i,j;
	int valid=0,jum=0,valid2=0,jum2=0;
	double x,y;
	double media[1000];
	
	i=0;
	j=0;
	while (valid<=2)
		{
			cin>>x;
				if ((x>=0) && (x<=10))
					{
						valid++;
						jum=jum+x;
					}
				else
					i++;
		}
	media[1]=(jum/2)
	cin>>y;
	while ((y<1) || (y>2))
		{
			j++;
			cin>>y;
		}
	if (y==1)
		{
			while (valid2<=2)
				{
					cin>>x;
						if ((x>=0) && (x<=10))
						{
							valid2++;
							jum2=jum2+x;
						}	
				}
		}
 }