#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,a[100005]={0},i,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==25)
        {
            c1++;
        }
        else if(a[i]==50)
        {
            if(c1>0)
            {
                c1--;
                c2++;
                continue;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        else
        {
            if(c2>0&&c1>0)
            {
                c2--;
                c1--;
                c3++;
                continue;
            }
            else if(c1>=3)
            {
                c1-=3;
                c3++;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}