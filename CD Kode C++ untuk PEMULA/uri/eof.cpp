#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,frek=0;
	string y;
	int jumlah=0;
	double rata;
	
	while (getline(cin,y),cin>>x)
		{
			frek++;
			jumlah+=x;
		}
	rata=jumlah/frek;
	printf("%.2lf",rata);
	return 0;
	
}