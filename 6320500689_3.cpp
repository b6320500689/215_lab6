#include<stdio.h>
int main()
{
	int i,j,k,n,q,b,c,max,l;
	scanf("%d %d",&n,&q);
	char a;
	int x[n],y[n];
	
	for(j=0; j<n; j++)
    {
        x[j]=0;
        y[j]=0;
    }
	for (j=0; j<q; j++)
	{
		scanf (" %c %ld %ld",&a,&b,&c);
		if (a == 'U')
		{
			x[i-1] = c;
		}
		else if (a == 'P')
		{
			max = x[i-1];
			for (k=i; k<c; k++)
			{
				if (max < x[c])
				{
					max = x[c];
				}
			}
			y[l]=max;
            l++;
		}
		printf ("%ld\n",max);
	}
	return 0;
}
