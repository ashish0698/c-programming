#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
     if(marks<50)
    {
        printf("Grade F");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade A");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade G");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade V");
    }
    else
    {
        printf("Grade E");
    }
}
