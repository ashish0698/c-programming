#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=20)
	{
		printf("you can vote\n");
	}
	else{
		printf("you cannot vote\n");
	}
	return 0;
}
