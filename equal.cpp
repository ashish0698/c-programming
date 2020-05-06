#include <stdio.h>
int main()
{
	int a,b;
	printf("enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("the numbers are equal");
	}
	else{
		printf("numbers are not equal");
	}
	return 0;
}
