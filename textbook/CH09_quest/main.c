#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef struct 
{
	char str[MAXSIZE];
	int length;
}seqstring;
void init(seqstring *s)
{
	s->length=0;
}
void Creat(seqstring *s)
{
	char e;
	init(s);
	printf("Input the string :");
	scanf("%c",&e);
	while(e != '0')
	{
		
		s->str[s->length]=e;
		s->length++;
		scanf("%c",&e);
	}

	//s->str[s->length] = '\0';
	//s->length=i+1;
	//return s->length;
}
int index(seqstring p,seqstring t)
{
	int i,j,succ;
	i=0;
	succ=0;
	
	while((i<=t.length-p.length) && (!succ))
	{
		j=0;
		succ=1;
		while((j<=p.length-1) && succ)
			if(p.str[j] == t.str[i+j])
				j++;
			else
				succ=0;
		++i;
	}
	if(succ)
	{
		return (i);
	} 
	else 
		return -1;

}
void insert(seqstring *s,seqstring t,int i)
{
	int k;
	
	if(i<1 || i> s->length || s->length + t.length>MAXSIZE)
		printf("Cannot insert\n");
	else
	{
		for(k=s->length-1;k>=i-1;k--)
			s->str[t.length+k] = s->str[k];
		for(k=0;k<t.length;k++)
			s->str[i+k-1] = t.str[k];
		s->length = s->length + t.length;
		s->str[s->length] = '\0';
	} 
}
void output(seqstring *s)
{
	int i;
	printf("\n\n");
	printf("After insert string:");
	for(i=0;i<s->length;i++)
	{
		printf("%c",s->str[i]);

	}
	printf("\n");
}
int main()
{
	seqstring p;
	seqstring t;
	int m;
	Creat(&p);
	getchar();
	Creat(&t);
	m=index(p,t);
	printf("input the position:%d\n",m);
	insert(&t,p,3);//void insert(seqstring t,int i,seqstring *s)
	output(&t);
}
