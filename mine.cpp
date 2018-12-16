#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k,c,d,t=0,r=0,h=0,o,p,g1=0;
	printf("\t****WELCOME TO BOMBS MINE****\t\n");	
	printf("\nEnter Size\n");
	scanf("%d",&n);
	int a[n][n],b[n][n],a1[n],b1[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=42;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%c	",a[i][j]);
		printf("\n\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		b[i][j]=0;
	}
	g1=0;
	c=rand()%n;
	d=rand()%n;
	a1[h]=c;
	b1[h]=d;
	h=h+1;
	int s1=0;
	while(g1!=n)
	{	
	s1=0;
		c=rand()%n;
		d=rand()%n;	
		for(o=0;o<h;o++)
		{
			if(c==a1[o] && d==b1[o])
			s1=1;
		}
		if(s1==0)
		{
		a1[h]=c;
		b1[h]=d;
		h=h+1;
		b[c][d]=100;
		for(k=c-1;k<=c+1;k++)
		{
			for(j=d-1;j<=d+1;j++)
			{
			if(k==c && j==d || b[k][j]==100 || k<0 || k>n || j<0 || j>n)
			{
				continue;
			}
			else
			{							
				b[k][j]=b[k][j]+1;		
			}
			}
		}		
		g1=g1+1;	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(b[i][j]!=100)
				r=r+b[i][j];
			}
		}
}
	}
	int y=0,u=0;
	while(t!=1)
	{
		printf("enter the points starting from 0 0\n");
		scanf("%d %d",&c,&d);
		if(c>=n || d>=n)
		{
			printf("wrong input\n");
			continue;
		}
		else
		{
			if(b[c][d]==100)
			{
				printf("\n\tGAME OVER\n\n");
				t=1;
				break;
			}
			else
			{
				a[c][d]=b[c][d];
				y=y+b[c][d];
				u=u+1;
				if(y==r || u==(n*n-n))
				{
					t=1;
					printf("\nYou Won\n\n");
					break;
				}
				else
				{
					int jj=42;
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(a[i][j]<42)
						printf("%d	",a[i][j]);
						else if(a[i][j]==42)
						printf("%c	",a[i][j]);
						else
						printf("%c	",jj);
					}
					printf("\n\n");
				}	
				}
		}		
	}
}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j]!=100)
			printf("%d	",b[i][j]);
			else
			printf("BOMB	");
		}
		printf("\n\n");
	}
	
}
