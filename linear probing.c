#include<stdio.h>
int main()
{
	int t,size;
	scanf("%d",&size);
	int arr[size],a[1000],b[size],v=0,k=0;
	for(int i=0;i<size;i++){
  arr[i]=-1;
	b[i]=-1;
	}
	scanf("%d",&t);
	while(t--)
	{
      int n;
	  scanf("%d",&n);
	  if(n==1)
	  {
        int key;
		scanf("%d",&key);
	     a[v]=key;
			 v++;
			 for(int i=0;i<size;i++)
			 {
				 int hash=(key+i)%size;
				 if(arr[hash]==-1)
				 {
					 arr[hash]=key;
					 break;
				 }
			 }
	  }
	  else if(n==2)
	  {
        int key;
		scanf("%d",&key);
		for(int i=0;i<v;i++)
		{
			if(a[i]==key)
			a[i]=-1;
		}
			for(int i=0;i<v;i++)
			{
				for(k=0;k<size;k++)
				{
					if(a[i]!=-1)
					{
						int hash=(a[i]+k)%size;
						if(b[hash]==-1)
						{
							b[hash]=a[i];
							break;
						}
					}
				}
			}
		for(int i=0;i<size;i++)
		{
			arr[i]=b[i];
			b[i]=-1;
		}
	  }
	  else if(n==3)
	  {
           for(int i=0;i<size;i++)
       {
	  printf("%d ",arr[i]);
       }
				 printf("\n");
	  }
	}
}