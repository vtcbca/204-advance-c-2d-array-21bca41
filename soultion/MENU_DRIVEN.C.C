/*write a menu driven program to perform following task using different function chatagory*/

#include<stdio.h>
#include<conio.h>
void prime();  //without argument without return type
void pellindrome(int,int); //with argument without return type
int reverse();  //without argument with return type
int evenseries(int,int); //with argument with return type
int menu();   //without argument with return type

void main()
{
	 int c,x,y,i,a;
	 char ch;
	 clrscr();
    do
    {
	 c=menu();

	 switch(c)
	 {

	 case 1:
		  prime();
		  break;

	 case 2:
		  printf("\n Enter a number to reverse:");
		  scanf("%d",&x);
		 // c=a;
		 pellindrome(p,q);
		  break;
	 case 3:
		 reverse();
		 break;
	 case 4:
		 print("\nEnter value:");
		 scanf("%d",&x);
		 evenserise(p,q);
		 break;
	 case 5:
		 exit(0);
	default:
	       printf("\n\n\t\t invaild choise. \n plese enter number between 1,2,3");
	       break;
	}
	printf("\n\n\t Do you want to continue?(yes=Y/y,no=N/n):");
	flushall();
	scanf("%d",&ch);
	}while(ch=='y'||ch=='Y');
    getch();
}
int menu()
       int a;
       printf("\n menu");
       printf("\n__________\n1.prime number\n2.pellindrome number\n.3reverse number\n.4even series\n5.exit\n");
       printf("\n\t Enter your choice:");
       scanf("%d",&a);
       return(a);

void prime()

      int x,y,i,count=0;
      clrscr();
      printf("\n enter any prime number:");
      scanf("%d",&x);
      for(i=2;i<=x/2;i++)
      {
	 if(x%i==0)
	 {
	     count=1;
	     break;
	 }
      }
      if(count==0)
	  printf("%d is prime number",x);
      else
	  printf("%d is not prime number",x);

void pellindrome(int x,int y)
{
   int x,b=0,y;
   clrscr();
   printf("\n Enter a number to reverse:");
   while(a!=0)
   {
      b=b*10;
      b=b+x%10;
      x=x/10;
   }
   if(y==b)
     printf("%d is a palindrome number:",c);
   else
     printf("%d is not a palindrome number:",c);

