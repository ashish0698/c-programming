#include <stdio.h>
int main()
{
	int m;
	printf("enter any number:\n");
	scanf("%d",&m);
	if(m>0){
		printf("%d",1);
	}
	else if(m==0){
		printf("%d",0);
	}
	else{
		printf("%d",-1);
	}
	return 0;
}
