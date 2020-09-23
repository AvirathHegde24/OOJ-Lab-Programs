#include <stdio.h> 
int sumaver(int a,int b)
{
 int sum;
 sum=a+b;
 printf("Sum= %d \n",sum);
 return sum/2;

}
void printeven(int a,int b)
{
 int small,big;
 if(a>b)
 {
 small=b;
 big=a;
 }
 else
 {
 small=a;
 big=b;
 }
 printf("Even numbers between two numbers are:\n");
 int i;
 for(i=small+1;i<big;i++)
 {
 if(i%2==0) 
 printf("%d \n",i);
 }
}
int main()
{
 int a,b,c,avg,g1,g2;
 printf("Enter three numbers:\n");
 scanf("%d%d%d",&a,&b,&c);
 if(c<a && c<b)
 {
 g1=a;
 g2=b;
 }
 else if(b<a && b<c)
 {
 g1=a;
 g2=c;
 }
 else
 {
 g1=b;
 g2=c;
 }

 avg=sumaver(g1,g2); 
 printf("Average of two numbers is : %d \n",avg);
 printeven(g1,g2);

} 
