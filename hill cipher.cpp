#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
unsigned int a[2][2]={{9,4},{5,7}};

int i,j, t=0;
unsigned int c[20],d[20];
char msg[20];
printf("Enter plain text\n ");
scanf("%s",msg);
for(i=0;i<strlen(msg);i++)
{ c[i]=msg[i]-65;
printf("%d ",c[i]);
}
for(i=0;i<3;i++)
{ t=0;
for(j=0;j<3;j++)
{
t=t+(a[i][j]*c[j]);
}
d[i]=t%26;
}
printf("\nEncrypted Cipher Text :");
for(i=0;i<3;i++)
printf(" %c",d[i]+65);
for(i=0;i<3;i++)
{
t=0;
for(j=0;j<3;j++)
{
t=t+(a[i][j]*d[j]);
}
c[i]=t%26;
}
printf("\nDecrypted Cipher Text :");
for(i=0;i<3;i++)
printf(" %c",c[i]+65);
getch();
return 0 ;
}