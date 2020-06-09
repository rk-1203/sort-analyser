#include<stdio.h>
#include<stdlib.h>

void main() 
{
   FILE *fp;
   fp=fopen("input.txt","w");   
   int i;

   for( i = 0 ; i < 500000 ; i++ ) 
   {
      fprintf(fp,"%d\n", rand() % 32766);
   }
}
