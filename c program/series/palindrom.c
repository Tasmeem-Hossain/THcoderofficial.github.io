#include<stdio.h>
#include<stdlib.h>

int main()
{

  int str[10]=121;
  int str2[10];

  int i=0,leanth=0,j;
    while(str[i]!='\0')
    {
        i++;
        leanth++;
    }
    for(j=0,i=leanth-1;i>=0;i--, j++)
    {
        str2[j]=str[i];
    }
    str2[j]='\0';
    printf("%s",str2);






    return 0;
}
