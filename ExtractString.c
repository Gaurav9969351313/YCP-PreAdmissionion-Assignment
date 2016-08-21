#include <stdio.h>
void main()
{
char str[50],str1[30];
int i,m,n;
printf("Enter String without space\n");
scanf("%s",str);
printf("Enter the starting point and number of character for extracting:");
scanf("%d %d",&m,&n);
for(i=0;i<=n-1;i++)
{
str1[i]=str[m-1+i];
}
str1[i]='\0';
printf("Extracted character=%s",str1);
getch();
}
