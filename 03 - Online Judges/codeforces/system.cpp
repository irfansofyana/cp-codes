#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,m,solusia,solusib;
	int selisih,banyak,x,y;
	
	cin>>n>>m;
	if ((n>1) && (m>1)){
	selisih=abs(n-m);
	if (selisih==0){
		if (int(sqrt(4*n+1))*int(sqrt(4*n+1))==(4*n+1))
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	else{
	banyak=0;
	for (i=1;i<=selisih;i++){
		if (selisih%i==0)
			{
				x=i;
				y=(selisih/i);
				solusia=((x+y)+1)/2;
				solusib=solusia-x;
				if ((solusia>=0) && (solusib>=0))
					{
						if (((solusia*solusia+solusib==n) && (solusib*solusib+solusia==m))||(((solusia*solusia+solusib==m) && (solusib*solusib+solusia==n))))
							banyak++;
					}
			}
	}
	cout<<banyak<<endl;
}
}
else if ((n==1) && (m==1)){
	banyak=2;
	cout<<banyak<<endl;
}
else
cout<<0<<endl;
	return 0;
}