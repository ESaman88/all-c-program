#include<stdio.h>
int main()
{
	int a,b,x,rev,org;
	scanf("%d",&x);
	org=x;
	a=x%10;
	x=x/10;
	b=x%10;
	x=x/10;
	
	rev=a*100+b*10+x;
	printf("%d",rev);
	if(rev==org)
	printf("the number is palindrome");
	else
	printf("the number is not palindrome");
	
}
		
	
		
		
		
	