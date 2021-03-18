#include<stdio.h>
int main()
{
	int i,j,k,n,q,b,c,max,l=0;
	scanf ("%d %d",&n,&q);
	char a;
	int x[n],y[n];
	
	for (j=0; j<n; j++)
    {
        x[j] = 0;
        y[j] = 0;
    }
	for (j=0; j<q; j++)
	{
		scanf (" %c %d %d",&a,&b,&c);
		if (a == 'U')
		{
			x[b-1] = c;
		}
		else if (a == 'P')
		{
			max = x[b-1];
			for (k=i; k<c; k++)
			{
				if (max < x[k])
				{
					max = x[k];
				}
			}
			y[l] = max;
            l++;
		}
		
	}
	for (j=0; j<l; j++)
	{
		printf ("%d\n",y[j]);
	}	
	return 0;
}
