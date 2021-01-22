#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m,q,k,l;
	int A[100][100],B[100][100];
	bool p=true;
	
	cin>>n>>n;
	for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				cin>>A[i][j];
		}
	cin>>n>>n;
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				cin>>B[i][j];
		}
	i=0;
	j=0;
	while ((i<n) && (p)) 
		{
			while ((j<n) && (p))
				{
					if (A[i][j]!=B[i][j])
						p=false;
					else
					j++;
				}
			i++;
		}
	if (p){
		cout<<"identik"<<endl;
		return 0;
	}
	else
		{
			p=true;		
			i=0;
			k=n-1;
			while ((i<n) && (p))
				{
					j=0;
					while ((j<n) && (p))
						{
							if (A[i][j]!=B[k][j])
								p=false;
							else
							j++;
						}
					k=k-1;
					i++;
				}
			if (p)
				cout<<"horisontal"<<endl;
			else
				{
					p=true;  
					i=0;
					while ((i<n) && (p))
						{
							j=0;
							k=n-1;
							while ((j<n) && (p))
								{
									if (A[i][j]!=B[i][k])
										{
											p=false;
										}
									else
									{
										j++;
										k=k-1;
									}
								}
							i++;
						}
					if (p)
						cout<<"vertikal"<<endl;
					else
						{
							p=true; 
							i=0;
							while ((i<n) && (p))
								{
									j=0;
									while ((j<n) && (p))
										{
											if (A[i][j]!=B[j][i])
												p=false;
											else
											j++;
										}
									i++;
								}
							if (p)
								cout<<"diagonal kanan bawah"<<endl;
							else
							{
							p=true;
							i=0;
							k=n-1;
							l=n-1;
							while ((i<n) && (p))
								{
									j=0;
									k=n-1;
									while ((j<n) && (p))
										{
											if (A[i][j]!=B[k][l])
												p=false;
											else
											{
												j++;
												k=k-1;
											}
										}
									i++;
									l=l-1;
								}
							if (p)
								cout<<"diagonal kiri bawah"<<endl;
							else
								cout<<"tidak identik"<<endl;
							}
				}
		}
	return 0;
}
}
