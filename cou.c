#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,j=0,k;
clrscr();
scanf("%s",a);
k=strlen(a);
for(i=0;i<k;i++)
{
j=j+1;
}
printf("count=%d",j);
getch();
}
