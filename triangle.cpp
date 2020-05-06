#include <stdio.h>
int main()
{
	int l1,l2,l3;
	printf("enter three lengths of a triangle\n");
	scanf("%d%d%d",&l1,&l2,&l3);
	if(l1==l2&&l2==l3){
		printf("the triangle is equilateral");
	}
	else if(l1==l2||l2==l3||l3==l1){
		printf("triangle is isosceles");
	}
	else{
		printf("triangle is scalen");
	}
	return 0;
}
