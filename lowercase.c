//Wap to convert the given word into uppercase word without using string handling function.

#include<stdio.h>

int main()
{
	int i=0;
	char text[10];
	printf("Enter a word:");
	scanf("%s", text);
	for(i=0; text[i]!='\0'; i++)
	{
		if(text[i]>=65 && text[i]<=90)
		{
			text[i]= text[i]+32;
		}
		else if(text[i]>=97 && text[i]<=122)
		{
			continue;
		}
		else
		{
			continue;
		}
	}
	printf("\n%s", text);
	return 0;
}
