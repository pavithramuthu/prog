#include <stdio.h>
int main()
{
	char s;
	scanf("%c",&s);
	if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
	{
		printf("NO");
	}
	else
	{
		printf("yES");
	}
	return 0;
	
}
