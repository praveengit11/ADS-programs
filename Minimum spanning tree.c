#include<stdio.h>
#include<stdbool.h>
#define max 99999
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int main()
{
	int n,v;
	scanf("%d %d",&n,&v);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<v;i++)
	{
		int u,v,l;
		scanf("%d %d %d",&u,&v,&l);
		a[u][v]=l;
		a[v][u]=l;
	}
	bool f[n];
	int dis[n];
	for(int i=0;i<n;i++)
	{
		f[i]=false;
		dis[i]=max;
	}
	dis[0]=0;
	int res=0;
	for(int i=0;i<n;i++)
	{
		int u=-1;
		for(int k=0;k<n;k++)
		{
			if(!f[k]&&(u==-1||dis[k]<dis[u]))
			u=k;
		}
		f[u]=true;
		res+=dis[u];
		for(int j=0;j<n;j++)
		{
			if(!f[j]&&a[u][j]!=0)
			dis[j]=min(dis[j],a[u][j]);
		}
	}
	printf("%d\n",res);
}