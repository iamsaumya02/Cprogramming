   #include<stdio.h>
    #include<conio.h>
     int add();
     void main()
{
	clrscr();
	add();
	getch();
}
 int add()
{
	int a,b,c;
	printf("enter two number");
	scanf("%d%d,&a,&b);
	c=a+b;
	printf("sum=%d",c);
        return 0;
}
