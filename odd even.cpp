#include <stdio.h>
int main()
{
	int a;
	printf("enter any number:\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("you have entered even number");
	}
	else{
		printf("you have entered odd number");

	}
	return 0;
}
