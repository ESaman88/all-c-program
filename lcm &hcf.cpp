#include<stdio.h>
int main()
{
   int a,b,l,h;
   scanf("%d%d",&a,&b);
   for(int i=a;i>=1;--i){
   if(a%i==0&&b%i==0){
   h=i;
   break;
}
   l=(a*b)/h;
   printf("%d%d",l,h);
   return 0;
}
	
	
}