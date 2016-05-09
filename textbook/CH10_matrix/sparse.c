#include<stdio.h>
typedef struct
{
	int data[100][100];
	int m,n;
}matrix;
typedef int spmatrix[100][3];
void init(matrix *A)
{
	A->m = A->n =0;
}
void compressmatrix(matrix A,spmatrix B)
{
	int i,j,k=1;
	for(i = 0;i<A.m;i++)
	{
		for(j = 0;j<A.n;j++)
		{
			if(A.data[i][j] != 0)
			{
				B[k][0] = i;
				B[k][1] = j;
				B[k][2] = A.data[i][j];
				k++;
			}
		}
	} B[0][0] = A.m;
	B[0][1] = A.n;
	B[0][2] = k-1;

}
void input(matrix *s)
{
	int i,j;
	int a;

	printf("Please input the row and cloumn of matrix:");
	scanf("%d,%d",&s->m, &s->n);
	printf("Please input the number:\n");

	for(i=0;i<s->m;i++)
	{
		for(j=0;j<s->n;j++)
		{
			scanf("%d",&a);
			s->data[i][j]=a;
		}			
	}

}
void transpmatrix(spmatrix B,spmatrix C)
{
	int i,j,t,m,n; 
	int x[100];
	int y[100];             
	m=B[0][0];
	n=B[0][1];
	t=B[0][2];
	C[0][0]=n;
	C[0][1]=m;
	C[0][2]=t;
	if(t>0)
	{
		for(i=0;i<n;i++)
			x[i]=0;
		for(i=1;i<=t;i++)
			x[B[i][1]]=x[B[i][1]]+1;
		y[0]=1;
		for(i=1;i<n;i++)
			y[i]=y[i-1]+x[i-1];
		for(i=1;i<=t;i++)
		{
			j=y[B[i][1]];
			C[j][0]=B[i][1];
			C[j][1]=B[i][0];
			C[j][2]=B[i][2];
			y[B[i][1]] = j+1;
		}
	}

}
void outputorignal(matrix s)
{
	int i,j;
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			printf("%5d",s.data[i][j]);
			
		}
		printf("\n");
	}
}
void output(spmatrix s)
{
	int i,j;
	for(i=0;i<s[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",s[i][j]);
			
		}
		printf("\n");
	}
}
int main()
{
	matrix A;

	spmatrix B;
	spmatrix C;
	init(&A);
	input(&A);
	outputorignal(A);
	printf("matrix three trangle:\n");
	compressmatrix(A,B);
	output(B);
	printf("matrix reverse:\n");
	transpmatrix(B,C);
	output(C);
	printf("\n");
	getchar();
	return 0;

}
