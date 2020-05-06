#include <stdio.h>
int main()
{
	int math,phy,chem,tot;
	printf("enter the marks of maths,physics,chemistry:\n");
	scanf("%d%d%d",&math,&phy,&chem);
	tot=math+phy+chem;
	if(math>=65&&phy>=55&&chem>=50&&tot>=180){
		printf("you can admission");
	}
	else if((math+phy)>=140||(math+chem)>=140){
		printf("you can admission");
	}
	else{
		printf("you cant admission");
	}
	return 0;
}
