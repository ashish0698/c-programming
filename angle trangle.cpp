#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter three angles of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c)==180){
		printf("it forms a valid triangle");
	}
	else{
		printf("it doesnot forms a triangle");
	}
	return 0;
}
