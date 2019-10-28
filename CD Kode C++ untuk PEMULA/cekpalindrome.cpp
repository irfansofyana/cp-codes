#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int i,j;
	bool cek;
	
	cek=true;
	cin>>a;
	i=0;      //indeks mulai dari 0
	j=a.length()-1;
	while ((i<=j) && (cek))
		{
			if (a[i]!=a[j])
				cek=false;
			else
			{
				i++;
				j--;
			}
		}
	if (cek)
		printf("Benar,ini polindrom");
	else	
		printf("Salah,ini bukan polindrom");
		
}