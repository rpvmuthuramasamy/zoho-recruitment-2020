#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i=0,n,j,k,new,new1,first=0;

scanf("%s",a);

n=strlen(a);
new=n/2;
while(a[i]!='\0')
{

for(j=n-1;j>i;j--)
{
    printf("\t");
}

new1=n/2;
first=0;
for(k=new;k>=n/2;k--)
{

    if(new1>=n)
    {
        printf("%c\t",a[first]);
        first++;
    }
    else
    {
    printf("%c\t",a[new1]);
    }
    new1++;
}

    printf("\n");

    i++;
    new++;
}

}
