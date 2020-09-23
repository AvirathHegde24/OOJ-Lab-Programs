#include<stdio.h>
int main()
{
 int c,a,b,i;
 while(1)
 {
 printf("PRESS THE NUMBER TO CHOOSE THE OPERATION :\n");
 printf("1) Add\n");
 printf("2)Subtract\n");
 printf("3)Multiply\n");
 printf("4)Divide\n");
 printf("5)Modulus\n");
 printf("6)Greater than\n");
 printf("7)Lesser than\n");
 printf("8)Equal to\n");
 printf("9)Not equal to\n");
 printf("10)Increement\n");
 scanf("%d",&i);
 printf("Enter two numbers to perform the selected operation:\n");
 scanf("%d%d",&a,&b);
 switch(i)
 {
 case 1:printf("%d + %d = %d \n",a,b,a+b);break; 
 case 2:printf("%d - %d = %d \n",a,b,a-b);break;
 case 3:printf("%d x %d = %d \n",a,b,a*b);break;
 case 4:printf("%d / %d = %d \n",a,b,a/b);break;
 case 5:printf("%d mod %d = %d \n",a,b,a%b);break;
 case 6:if(a>b)
 {
 printf("%d > %d \n",a,b);

 }
 else
 {
 printf("%d > %d \n",b,a);
 }
 break;
 case 7:if(a<b)
 {
 printf("%d < %d \n",a,b);

 }
 else
 {
 printf("%d < %d \n",b,a);
 }
 break;
 case 8:if(a==b)
 { 
 printf("%d = %d \n",a,b);

 }
 else
 {
 printf("%d != %d \n",b,a);
 }
 break;
 case 9:if(a!=b)
 {
 printf("%d != %d \n",a,b);

 }
 else
 {
 printf("%d = %d \n",b,a);
 }
 break;
 case 10:
 printf("%d++ = %d \n",a,a+1);
 printf("%d++ =%d \n",b,b+1);
 break;
 default:printf("WRONG INPUT!\n");
 }
 printf("Press 1 to perform calculation again\nPress any other key to exit\n");
 scanf("%d",&c); 
 if(c!=1)
 {
 break;
 }
 }
}
