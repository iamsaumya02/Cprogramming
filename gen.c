   #include<stdio.h>
   #include<string.h>
   int main()
  {
	  char name[10];
	  char Gender[10];
	  char *s1 = "male";
	  char *s2 = "female";
	  printf("Enter name:");
	  scanf("%s",name);
	  {
	  
		  printf("Enter the Gender:");
		  scanf("%s", Gender);
		  if(strcmp(s1, s2) < 0)
		printf("Result: Mr. %s", name);
	  else
		 
	    printf("Result: Ms. %s", name);
  } 
  }	  
