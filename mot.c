#include<stdio.h>
int main()
{
int a,b,c;
printf("type the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
  if(a>c)
{
  printf("the max is a");
}
  else
  printf("the max is c");
}
  else
    if(b>c)
    {
     printf("b is greatest");
    }
    else
      printf("c is greatest");   
}  

