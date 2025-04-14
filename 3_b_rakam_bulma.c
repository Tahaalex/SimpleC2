#include <stdio.h>
#include <math.h>
#include <locale.h>
 
 

int main() {
   for(int ab=0;ab<50;ab++)
   {
   int a,b,c,d,t,h;
   printf("3 basamakli sayinizi giriniz\n");
   scanf("%d",&a);
   b=a;
   c=b%10;
   d=b%100;
   d=d-c;
   t=d+c;
   b=b-t;
   b=b/100;
   d=d/10;
   printf("yuzler basamagindaki rakam %d \n",b);
   printf("onlar basamagindaki rakam %d\n",d);
   printf("birler basamagindaki rakam %d\n",c);
   printf("devam etmek istiyorsaniz 1  istemiyorsaniz 0 \n");
   scanf("%d",&h);
   if (h==0)
   {
      goto jump;
   }
   
   }
   jump:
   




}
