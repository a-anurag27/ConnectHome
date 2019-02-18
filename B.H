#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void first()
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
    setcolor(YELLOW);

   cleardevice();
  rectangle(10,10,630,460);
  rectangle(12,12,628,458);
   line(100,160,180,160);
   delay(100);
   rectangle(180,160,400,300);
   delay(100);
   line(100,160,100,260);
   delay(100);
   line(100,260,185,300);
   delay(100);
   line(180,160,140,120);
   delay(100);
   line(140,120,100,160);
   delay(100);
   line(140,120,370,120);
   delay(100);
   line(370,120,400,160);
   delay(100);
   rectangle(250,250,300,300);
   for(int i=0;i<10;i++)
   {
   settextstyle(4,0,4);
    setcolor(i);
   outtextxy(110,50," Nandavanam Elder Home");
   delay(200);
      }
      delay(100);
    settextstyle(3,0,4);
   outtextxy(110,330,"Presented by ");
   delay(200);
   for( i=0;i<40;i++)
      {
      setcolor(i);
      outtextxy(40,380," Anurag    Akanksh   Sreyash Urlam");
      delay(200);
      }


   /* clean up */
   getch();
   closegraph();

}
