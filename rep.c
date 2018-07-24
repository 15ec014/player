#include <stdio.h>
 
int main(void) 
{
	char a[50],character;
	int i,j,count=1,max=1;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		if(a[i]==a[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				character=a[i];
			}
		}
 
	}
	printf("\n%c",character);
	return 0;
}
