#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>=c||(b+c)>=a||(c+a)>=b){
		printf("valid triangle can be formed");
	}
	else{
		printf("valid triangle cannot be formed");
	}
	return 0;
}
