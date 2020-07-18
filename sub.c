   #include<stdio.h>
   #include<conio.h>
    int subtract();
    void main()
      {
	      clrscr();
	      subtract();
	      getch();
      }
        int subtract()
	 {
		 int a,b,c;
		 printf("enter two number:");
		 scanf("%d%d",&a,&b);
		 c=a-b;
		 printf("sum=%d",c);
	 }

