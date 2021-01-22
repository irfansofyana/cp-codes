#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,b1,b2;
	int i,menit,jam,total;
	
	cin>>a1>>a2>>b1>>b2;
	while (((a1!=0) || (a2!=0)) || ((b1!=0) || (b2!=0)))
		{
			if (a1<=b1)
				{
					if (a1<b1) {
					if (a2<=b2)
						{
						menit=b2-a2;
						jam=b1-a1;
						total=menit+60*jam;
						}
					else
						{
						menit=(60+b2)-a2;
						b1=b1-1;
						jam=b1-a1;
						total=menit+60*jam;
						}
					}
					else if (a1==b1)
						{
							if (a2<=b2)
								total=(24*60)+b2-a2;
							else{
								menit=(60+b2)-a2;
								total=23*60+menit;
							}
						}
				}	
			else if (a1>b1){
				if (b1==0){
					b1=24;
					if (a2<=b2)
						{
						menit=b2-a2;
						jam=b1-a1;
						total=menit+60*jam;
						}
					else
						{
						menit=(60+b2)-a2;
						b1=b1-1;
						jam=b1-a1;
						total=menit+60*jam;
						}
				}	
			}
			printf("%d\n",total);
			cin>>a1>>a2>>b1>>b2;
		}
}