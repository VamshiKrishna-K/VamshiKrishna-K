#include<stdio.h>
#include<conio.h>
void main()
{
char c,ch;
FILE *p,*k; clrscr();
p=fopen("a1z.txt","r");
  while((c=getc(p)!=EOF)
    printf("%c",c);
  fcloseall();
  printf("\nEnter which type of product you want  ");
  scanf("%c",&ch);clrscr();
  k=fopen("a2z.txt","r");
  while((c=getc(k))!=EOF)
    {
    if(c==ch)
    {
      while((c=getc(k))!='.')
        printf("%c",c);
      break;
        }
    } fcloseall();
  getch();
}
