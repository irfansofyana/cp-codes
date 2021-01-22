#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,e;
	double rata;
	
	cin>>a>>b>>c>>d;
	cin>>e;
	a=a*0.2;
	b=b*0.3;
	c=c*0.4;
	d=d*0.1;
	
	rata=a+b+c+d;
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	
	cout<<"Media: "<<rata<<endl;
	if (rata>=7)
		cout<<"Aluno aprovado."<<endl;
	else if (rata<5)
		cout<<"Aluno reprovado."<<endl;
	else	
		cout<<"Aluno em exame."<<endl;
	cout<<"Nota do exame: "<<e<<endl;
	rata=((rata+(e))/2);
	if (rata>=5)
		cout<<"Aluno aprovado."<<endl;
	else if (rata<=4.9)
		cout<<"Aluno reprovado."<<endl;
	cout<<"Media final: "<<rata<<endl;
	return 0;
}