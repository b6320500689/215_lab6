#include <stdio.h>
int main ()
{
	int n,i,j,x=0,y=0;
	scanf ("%d",&n);
	
	if (n>=4 && n<=9)
	{
		char a[2][n];
		for (i=0; i<2; i++)
		{
			scanf ("%[^\n]s",a[i]);
		}
		for (j=0; j<n; j++)
		{
			if (a[0][j] == a[1][j])
				x++;
			else
				y++;
		}
		printf ("%d %d",x,y);
	}
}
