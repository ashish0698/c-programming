#include <stdio.h>
int main()
{
	int id,unit;
	char name[10];
	printf("enter your id and unit\n");
	scanf("%d%d",&id,&unit);
	printf("enter your name");
	scanf("%s",&name);
	if(unit==199){
		printf("you charged 1.20");
	}
	else if(unit>200||unit<400){
		printf("you charged 1.50");
	}
	else if(unit>400||unit<600){
	    printf("you charged 1.80");
	}
	else if(unit>600){
		printf("you charged 2.00");
	}
	return 0;
}
