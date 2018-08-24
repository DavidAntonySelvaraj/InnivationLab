#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,p,q,s,t,u;
printf("type the value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-4*a*c;
  if(d>0)
{
 p=0-b+sqrt(d/2*a);
 q=0-b-sqrt(d/2*a);
 printf("if d>0%f",p);
}
  else
    {
            if(d==0)
           {
           s=b/(2*a);
           printf("if d==o%f",s);
           }
           else
            t=0-b*2*a;
             u=0-d*2*a;
         printf("d<0%f",t);
          printf("d<0%f",u);
    }
return 0;
}


