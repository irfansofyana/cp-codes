#include <bits/stdc++.h>

using namespace std;
int main()
{
	int a;
	const int pas=2002;
	int i;
	
	i=1;
	cin>>a;
	while (a!=pas)
		{
			cout<<"Senha Invalida"<<endl;
			cin>>a;
		}
		
	if (a=pas)
		cout<<"Acesso Permitido"<<endl;
	return 0;
}