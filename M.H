#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>

#include<dos.h>
void thank()
{       clrscr();
cleardevice();
rectangle(10,10,630,460);
rectangle(12,12,628,458);
setcolor(YELLOW);
settextstyle(3,0,2);

outtextxy(40,50," Successfull services of your need...");
delay(100);

settextstyle(4,0,3);

for(int i=0;i<100;i+=10)
{ setcolor(i);
  delay(200);
  rectangle(200-i,190-i,440+i,290+i);
  outtextxy(210,210, "    Thank You !!!");
 }

}
void first2()
{
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
rectangle(10,10,630,460);
rectangle(12,12,628,458);
setcolor(YELLOW);
settextstyle(3,0,2);

outtextxy(40,50," Our Team Work...");
delay(100);

settextstyle(4,0,3);

for(int i=0;i<100;i+=10)
{ setcolor(i);
  delay(200);
  rectangle(200-i,190-i,440+i,290+i);
  outtextxy(210,210, "Manpower @ Service");
 }

setcolor(MAGENTA);
settextstyle(5,0,3);
delay(100);
outtextxy(70,370,"Project by ...");
settextstyle(3,0,2);
delay(100);
for(i=0;i<10;i++)
{
setcolor(i);
delay(100);
outtextxy(20,420,"     Vishal Kundar      Sumer Singh       Rishab");
}

 getch();
 clrscr();
 cleardevice();


setbkcolor(GREEN);
}




   /* clean up */
   getch();



