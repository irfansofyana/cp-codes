#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	double jum=0;
	double rata;
	int frek=0,jumlah=0,nilai;
	
	getline(cin,s);
	cin>>nilai;
	frek++;
	while (cin)
	{
		jumlah=jumlah+nilai;
		getline(cin,s);
	    cin>>nilai;
		frek++;
	}
	rata=double(jumlah)/frek;
	printf("%.1lf",rata);
	return 0;
	
}