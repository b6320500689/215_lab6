#include<stdio.h>
int main()
{
	long i,j,k,n,q,max,b=0;
	scanf("%ld %ld",&n,&q);
	char a[n];
	long c[n]={};
	long x[q],y[q];
	
	for(i=0; i<n; i++)
    {
        a[i]=0;
        c[i]=0;
    }
	for (i=0; i<q; i++)
	{
		scanf (" %c %ld %ld",&a[i],&x[i],&y[i]);
	}
	for (i=0; i<q; i++)
	{
		if (a[i] == 'U')
		{
			c[x[i]] = y[i];
		}
		else if (a[i] == 'P')
		{
			max = c[x[i]];
			for (j=x[i]; j<=y[i]; j++)
			{
				if (max < c[j])
				{
					max = c[j];
				}
			}
			y[b]=max;
            b++;
			
		}
		printf ("%ld\n",max);
	}
	return 0;
}
