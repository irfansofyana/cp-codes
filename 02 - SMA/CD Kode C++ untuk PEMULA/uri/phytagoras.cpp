#include <bits/stdc++.h>
using namespace std;

int fpb(int a,int b)
{
	if (b==0)
		return a;
	else
		return fpb(b,a%b);
}
int main(){
	int a,b,c;
	int maks,idx;
	
	cin>>a>>b>>c;
	while (cin){
		if (a>=b){
			maks=a;
			idx=1;}
		else{
			maks=b;
			idx=2;}
		if (c>maks)
			{
				if (c*c!=a*a+b*b)
					printf("tripla\n");
				else
					{
						if (fpb(fpb(a,b),c)==1)
							printf("tripla pitagorica primitiva\n");
						else
							printf("tripla pitagorica\n");
					}
			}
		else
			{
				if (idx==1)
					{
						if (a*a!=b*b+c*c)
							printf("tripla\n");
						else
							{
								if (fpb(fpb(c,b),a)==1)
									printf("tripla pitagorica primitiva\n");
							else
								printf("tripla pitagorica\n");
							}
					}
				else if (idx==2)
						{
							if (b*b!=a*a+c*c)
								printf("tripla\n");
							else
							{
								if (fpb(fpb(b,c),a)==1)
									printf("tripla pitagorica primitiva\n");
								else
									printf("tripla pitagorica\n");
							}
						}
			}
		cin>>a>>b>>c;
	}
}