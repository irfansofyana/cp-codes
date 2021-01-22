#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		sort(arr,arr+n);
		if(l==r)
		cout<<-1<<endl;
		else
		{
			if(arr[n-1]==l && arr[n-1]+1<=r)
			{
				arr[n-1]+=1;
				sort(arr,arr+n);
				for(int i=0;i<n;i++)
				cout<<arr[i]<<" ";
				cout<<endl;
			}
			else if(arr[n-1]==l && arr[n-1]+1>r)
			cout<<-1<<endl;
			else
			{
				arr[n-1]=l;
				sort(arr,arr+n);
				for(int i=0;i<n;i++)
				cout<<arr[i]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
} 