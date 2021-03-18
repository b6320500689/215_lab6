#include <stdio.h>
#include <string.h>
int main ()
{
	int n,i,j,k=0;
	scanf ("%d",&n);
	if (n>=1 && n<=10000)
	{
		char a[n][100];
		char b[n][100];
		for (i=0; i<n; i++)
		{
			scanf (" %[^\n]s",a[i]);
		
		}
		for (i=0; i<n; i++)
			for (j=0; j<i; j++)
			{
				for (k=0; k<1000; )
				{
					if (a[i][k] > a[j][k])
					{
						strcpy (b[i],a[j]);
						strcpy (a[j],a[i]);
						strcpy (a[i],b[i]);
						break;
					}
					else if (a[i][k] == a[j][k])
                    {
                        k++;
                    }
                    else break;
				}
			}
			for (i=0; i<n; i++)
			{
				printf ("%s\n",a[i]);	
			}
	}
	return 0;
}
