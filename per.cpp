#include <stdio.h>
int main()
{
	int roll,sub1,sub2,sub3;
	float per;
	char name[10];
	printf("enter your name:\n");
	scanf("%s",&name);
	printf("enter your roll no:\n");
	scanf("%d",&roll);
	printf("enter marks in three subjects\n");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	per=(sub1+sub2+sub3)/3;
	printf("your percentage is %f",per);
	if(per>=90){
		printf("topper");
	}
		else if(per>=80){
		printf("distinction");
	}
		else if(per>=70){
		printf("1st div");
	}
		else if(per>=60){
		printf("2nd div");
	}
		else if(per>=40){
		printf("3rd div");
	}
	else{
		printf("fail");
	}
	return 0;
}
