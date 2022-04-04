/*wap to enter 5 string in array and count total number of vowels in each string*/
#include<stdio.h>
#include<conio.h>
void main()
{
   char name[5][10];
   int i,j,c=0;
   clrscr();
   for(i=0;i<5;i++)
   {
       printf("\n enter a name %d:",i=1);
       flushall();
       gets(name[i]);
   }
   for(i=0;i<5;i++)
       printf("\n\tname%d:%s",i+1,name[i]);

   printf("\n");
   for(i=0;i<5;i++)
   {
     for(j=0;c=0;j<9;j++)
     {
	switch(name[i][j])
	{
	     case 'a':
	     case 'A':
	     case 'e':
	     case 'E':
	     case 'i':
	     case 'I':
	     case 'o':
	     case 'O':
	     case 'u':
	     case 'U':
		  printf("%c",name[i][j]);
		  c++;
		  break;
	}
     }
     printf("\n number of vowels in name %d is %d \n",i+1,c);
   }
   getch();
}