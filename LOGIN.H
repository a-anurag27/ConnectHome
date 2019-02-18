#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void login()
{clrscr();
 char user[20],pass[10],ch;
 gotoxy(25,10);
 cout<<"User name: ";
 gets(user);
 gotoxy(25,12);
 cout<<"Password:";
 int i=0;
for(i=0;;i++)
{
 ch=getch();

  if((int)(ch)==13)
{     pass[i]='\0';
     break;
     }

  pass[i]=ch;
  cout<<"*";

 }
 getch();


}




