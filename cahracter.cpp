#include <stdio.h>
int main()
{
	char ch;
	printf("enter character of your choice\n");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
		printf("alphabet");
	}
	else if(ch>='0'&&ch<='9'){
		printf("digits");
	}
	else{
		printf("special character");
	}
	return 0;
}
