#include<stdio.h>
#include<stdlib.h>
int city[1001][1001];
int main()
{
    int t;
    scanf("%d",&t);
    int k=t;
    t=t-1;
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        city[x][y]=1;
    }
    t=k;
    int a[t+1];
    for(int i=0;i<=t;i++)
    a[i]=0;
        for(int j=2;j<=t;j++)
        {
            if(city[1][j]==1)
            {
                a[j]=city[1][j];
            }
        }
        for(int i=2;i<=t;i++)
        {
            if(a[i]!=0)
            {
              for(int j=2;j<=t;j++)
              {
                  if(city[i][j]==1)
                  {
                      a[j]=a[i]+1;
                  }
              }
            }
        }
        int q,min=1000,c=0;
        scanf("%d",&q);
        while(q--)
        {
            int t;
            scanf("%d",&t);
            if(min>a[t])
            {
                min=a[t];
                c=t;
            }
        }
        printf("%d",c);
}