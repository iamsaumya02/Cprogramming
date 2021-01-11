 #include<stdio.h>
 void main()
{
	int a;
	int *p= &a;
	char b;
	char *p1= &b;
	float c;
	float *p2= &c;
	double d;
	double *p3= &d;
	printf("print sizeof data types:");
	printf("sizeof (*p): =%zu\n",sizeof(*p));
	printf("sizeof (*p1): =%zu\n",sizeof(*p1));
	printf("sizeof (*p2): =%zu\n",sizeof(*p2));
	printf("sizeof (*p3): =%zu\n",sizeof(*p3));
}
