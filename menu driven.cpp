#include <stdio.h>
int main()
{
	int choice,length,base,height,radius;
	float area,t=0.5,pi=3.14;
	printf("enter 1 if you want to calculate area of square\n");
	printf("enter 2 if you want to calculate area of triangle\n");
	printf("enter 3 if you want to calculate area of circle\n");
	printf("enter number of your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("enter the length of square\n");
		    scanf("%d",&length);
		    area=length*length;
		    printf("the area of square is  %f",area);
		    break;
		case 2:
			printf("enter the base and height of triangle\n");
		    scanf("%d%d",&base,&height);
		    area=t*base*height;
		    printf("the area of triangle is  %f",area);
		    break;
		case 3:
			printf("enter the radius of circle\n");
		    scanf("%d",&radius);
		    area=pi*radius*radius;
		    printf("the area of circle is  %f",area);
		    break;
		default:
	     	printf("enter valid number");	     
	}
	return 0;
	
}
