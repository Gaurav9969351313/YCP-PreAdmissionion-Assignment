#include<stdio.h>
#include<conio.h>
main()
{
char str[100],temp;
int i,j;

printf("Enter the string :");
gets(str);
printf("%s in ascending order is ->",str);
for(i=0;str[i];i++)
{
for(j=i+1;str[j];j++)
{
if(str[j]<str[i])
{
temp=str[j];
str[j]=str[i];
str[i]=temp;
}
}
}
printf("%s\n",str);
getch();
}
