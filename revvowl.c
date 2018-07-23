#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[30];
	int j,n;
	scanf("%s",str);
	n=strlen(str);
	for(j=0;j<n;j++)
	{
		if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[i]=='U')
		{
			str[j]='+';
		}
	}
	for(j=n;j>=0;j--)
	{
		if(str[j]!='+')
		{
			printf("%c",str[j]);
		}
	}
 
	return 0;
}
