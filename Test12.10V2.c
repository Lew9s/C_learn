#include<stdio.h>
int main()
{
  char a[150];
  int i;
  int j;
  int m=0,n=0;
  int b[100]={0};
  gets(a);
  for(i=0,j=0;a[i]!='\0';i++)
  {
       if(a[i]!=' '&&i==0){ 
             j=1;
             }
       else if(a[i-1]==' '&&a[i]!=' '&&i>0){ 
             j=1;
            }
       else if((a[i]!=' '&&a[i+1]==' ')||(a[i]!=' '&&a[i+1]=='\0'))
	   { 
            if(n<j) 
			{
                 n = j;
               }
           b[i] = n;
            }
        j++;
    }
  for(i=0;i<50;i++){
      if(b[i]==n){
           m = i;
           break;
     }
}
 for(i=m-n+1;i<=m;i++){
      printf("%c",a[i]);
      }
}
