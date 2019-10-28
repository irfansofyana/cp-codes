    #include<bits/stdc++.h>
    using namespace std;
    long long x,y,a[1000000],total,i,j;
    int main()
    {
      long long mas=-999999999999;
      cin>>x>>y;
      for(i=0;i<x;i++){
		cin>>a[i];
      }
    for(i=0;i<=x-y;i++){
      if(i==0){
			for(j=0;j<y;j++)total+=a[j];
			}	else{
				total=total-a[i-1]+a[i+y-1];
      }
     
		if(total>mas)mas=total;
    }
		cout<<mas<<endl;
    }