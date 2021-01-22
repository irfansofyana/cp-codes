#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3,h1;
	int b1,b2,b3,h2;
	int hari,menit,detik;
	int s1,s2,s3;
	string s;
	char p;
	
	cin>>s>>h1;
	cin>>a1>>p>>a2>>p>>a3;
	cin>>s>>h2;
	cin>>b1>>p>>b2>>p>>b3;
	
	if (b1<a1)
		{
			hari=h2-h1-1;
				if (a3<b3)
					{
						a3=a3+60;
						a2=a2-1;
						s3=a3-b3;
					}
				else
					s3=a3-b3;
				if (a2<b2)
					{
						a2=a2+60;
						a1=a1-1;
						s2=a2-b2;
					}
				else
					s2=a2-b2;
				s1=a1-b1;
				s1=23-s1;
				s2=59-s2;
				s3=60-s3;
				if (s3==60)
					{
						s3=0;
						s2=s2+1;
					}
		}
	else
		{
			hari=h2-h1;
				if (b3<a3)
					{
						b3=b3+60;
						b2=b2-1;
						s3=b3-a3;
					}
				else
					s3=b3-a3;
				if (b2<a2)
					{
						b2=b2+60;
						b1=b1-1;
						s2=b2-a2;
					}
				else
					s2=b2-a2;
				s1=b1-a1;
		}
	cout<<hari<<" dia(s)"<<endl;
	cout<<s1<<" hora(s)"<<endl;
	cout<<s2<<" minuto(s)"<<endl;
	cout<<s3<<" segundo(s)"<<endl;
	return 0;
}