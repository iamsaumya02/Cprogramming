  #include<stdio.h>
  void main()
   {
	   int n, n1, rem, num=0;
	   printf("Enter a number:");
	   scanf("%d",&n);
	   n1=n;
	   while(n1!=0)
	   {
		   rem=n1%10;
		   num+=rem*rem*rem;
		   n1/=10;
	   }
	   if(num==n)
		   printf(" Armstrong number= %d",n);
	   else
		   printf("Armstrong number is not = %d \n",n);
   }
