#include<stdio.h>
void main()
{
char a[50];
int i;
printf("enter thr string");
scanf("%s",&a);
i=0;
while(a[i]!="\n")
{
i++;
}
if(a[i]=="\n")
printf("%s.",a);
}
