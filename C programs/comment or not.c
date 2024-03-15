#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[30];
	int len;
	printf("enter the line of text :");
	scanf("%[^\n]s",&a);
	len=strlen(a);
	if(a[0]=='/'&&a[1]=='/')
	{
		printf("single line comment");
	}
	else if(a[0]=='/' && a[1]=='*'&&a[len-1]=='/' && a[len-2]=='*')
	{
		printf("Multi line comment");
	}
	else
	{
		printf("Not a comment");
	}
	return 0;
}
