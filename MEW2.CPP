#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include"b.h"
#include"login.h"
class perdet
{
  private:
	  char name[20];
	  int age;
	  char gen[5];
	  char bloodgroup[5];
	  char allergy[250];
	  char BP[5];
	  char diabeties[5];
	  char phoneno[20];
	  char rphoneno[20];
  public:
	  char* returnphoneno()
	  {
	     return phoneno;
	  }
	  void addmem()
	  {
	    clrscr();
	    cout<<"\n\n\t\t\t Enter person details: ";
	    cout<<"\n\n\t\t\t Enter name: ";gets(name);
	    cout<<"\n\t\t\t Enter age: ";cin>>age;
	    cout<<"\n\t\t\t Enter Gender: ";gets(gen);
	    cout<<"\n\t\t\t Enter Blood group: ";gets(bloodgroup);
	    cout<<"\n\t\t\t Enter Phone number: ";gets(phoneno);
	    cout<<"\n\t\t\t Enter alternate Ph no: ";gets(rphoneno);
	    cout<<"\n\t\t\t Enter allergies(ifany): ";gets(allergy);
	    cout<<"\n\t\t\t Does the person have BP? ";gets(BP);
	    cout<<"\n\t\t\t Is the person diabetic? ";gets(diabeties);
	    clrscr();
	  }
	 void dismem()
	 {
	    cout<<"\n\t\t\t Person's details: ";
	    cout<<"\n\t\t\t Name            : "<<name;
	    cout<<"\n\t\t\t Age             : "<<age;
	    cout<<"\n\t\t\t Gender          : "<<gen;
	    cout<<"\n\t\t\t Blood group     : "<<bloodgroup;
	    cout<<"\n\t\t\t Phone number    : "<<phoneno;
	    cout<<"\n\t\t\t Alternate Phno  : "<<rphoneno;
	    cout<<"\n\t\t\t Allergies(ifany): "<<allergy;
	    cout<<"\n\t\t\t Person have BP? : "<<BP;
	    cout<<"\n\t\t\t Diabetic yes/no : "<<diabeties;
	  clrscr();
	  }
	  void dism()
	  {
	  cout<<setw(10)<<name<<setw(10)<<age<<setw(10)<<gen;
	  }

  };
 class rooms
  {   char rooms_[20],facility_[50];
      int room_,facility;
      double cost;
      void functionx()
      {
	 if(room_==1)
	   {strcpy(rooms_,"  Single ");
	    cost+=7000;
	   }
	 else if(room_==2)
	  { strcpy(rooms_,"  Double ");
	    cost+=5000;
	  }
	 else if(room_==3)
	  { strcpy(rooms_,"Joint");
	    cost+=3000;
	  }
	 else if(facility==1)
	   {strcpy(facility_,"TV");
	   cost+=100;
	   }
	 else if(facility==2)
	   {strcpy(facility_,"AC");
	    cost+=100;
	   }
	    else if(facility==3)
	  { strcpy(facility_,"NURSE");
	    cost+=500;
	  }
     }
    public:
	   rooms()
	   { cost=0;
	   }
	   double returncost()
	   {
	     return cost;
	   }
	   void room()
	   {
	     clrscr();
	     cout<<"\n\t\t\t ROOM\t\t CHARGE\n\n\t\t\t1.Single\t  Rs7000\n\n\t\t\t2.Double\t  Rs5000\n\n\t\t\t3.Joint\t\t  Rs3000\n";
	     cout<<"\n\t\t\t Enter desired room:";
	     cin>>room_;
	     cout<<"\n\t\t\tFACILITY\tCHARGE\n\n\t\t\t1.TV\t\tRs100\n\n\t\t\t2.AC\t\tRs100\n\n\t\t\t3.Nurse\t\tRs500\n";
	     cout<<"\n\t\t\tEnter desired facility:";
	     cin>>facility;
	     cout<<"\n\n\t\t\tFacilities available:- ";
	     cout<<"\n\t\t\t1.Garden\n\t\t\t2.Well maintained bathrooms\n\t\t\t3.Hygenic Food Facilities\n\t\t\t4.Entertainment programs and many more.\n";
	     functionx();
	   }
	   void output()
	   {
	     cout<<"\n Room type       :  "<<rooms_;
	     cout<<"\n Desired facility:"<<facility_;
	     cout<<"\n Total cost      : "<<cost;
	   }
	  void room2()
	  {
	    cout<<setw(10)<<cost;
	  }

     };
 class relation
 {
  private:
   char name[20];
   int age;
   char qualification[20];
   char occupation[10];
   long income;
   char payment[8];
  public:
   void enter()
   {
     clrscr();
    cout<<"\n\n\t\t\tEnter the relatives name: ";
    gets(name);
    cout<<"\n\t\t\tEnter age: ";cin>>age;
    cout<<"\n\t\t\tEnter your qualification: ";gets(qualification);
    cout<<"\n\t\t\tEnter occupation(if government/private): ";gets(occupation);
    cout<<"\n\t\t\tEnter your income: ";cin>>income;
    cout<<"\n\t\t\tEnter the payment type(cheque/cash): ";gets(payment);
   }
   void display()
   {clrscr();
    cout<<"\n\t\t\tThe relatives name               : "<<name;
    cout<<"\n\t\t\tAge                              : "<<age;
    cout<<"\n\t\t\tYour qualification               : "<<qualification;
    cout<<"\n\t\t\tOccupation(if government/private): "<<occupation;
    cout<<"\n\t\t\tYour income                      : "<<income;
    cout<<"\n\t\t\tThe payment type(cheque/cash)    : "<<payment;
   }
   void rela()
   {
     cout<<setw(10)<<name;
   }
 };
void insert()
{
  ofstream fobj;
  perdet cobj;
  rooms c1obj;
  relation c2obj;
  fobj.open("RECORD.DAT",ios::app|ios::binary);
  cobj.addmem();
  c1obj.room();
  c2obj.enter();
  fobj.write((char *)&cobj,sizeof(cobj));
  fobj.write((char *)&c1obj,sizeof(c1obj));
  fobj.write((char *)&c2obj,sizeof(c2obj));
  fobj.close();
  cout<<"\n\n\t\t\t Total cost Per Month   :  "<<c1obj.returncost();
}
void modify()
{
   int c=0,d,flag=-1;
  fstream fobj;
  fstream f2obj;
  perdet cobj;
  rooms c1obj;
  relation c2obj;
  cout<<"\n\n\t\t\t Enter the file number to be modified: ";
  cin>>d;
   fobj.open("RECORD.DAT",ios::in|ios::out|ios::binary);
   f2obj.open("RECORD2.DAT",ios::in|ios::out|ios::binary);
  while( fobj.read((char *)&cobj,sizeof(cobj))&&fobj.read((char *)&c1obj,sizeof(c1obj))&& fobj.read((char *)&c2obj,sizeof(c2obj)))
  {  c++;
     if(c!=d)
      {
	   f2obj.write((char *)&cobj,sizeof(cobj));
	   f2obj.write((char *)&c1obj,sizeof(c1obj));
	   f2obj.write((char *)&c2obj,sizeof(c2obj));
      }

     else{
		flag=1;
		cobj.addmem();
		c1obj.room();
		c2obj.enter();
		f2obj.write((char *)&cobj,sizeof(cobj));
		f2obj.write((char *)&c1obj,sizeof(c1obj));
		f2obj.write((char *)&c2obj,sizeof(c2obj));
	  }
    }

  fobj.close();
  f2obj.close();
  remove("RECORD.DAT");
  rename("RECORD2.DAT","RECORD.DAT");
  if(flag==1)
  cout<<"\n\n\t\t\t Record has been successfuly modified!";
  else
  cout<<"\n\t\t\t Record not found!!!";
  getch();
}
void search()
{
  char sphoneno[20];
  int flag=-1;
  perdet cobj;
  rooms c1obj;
  relation c2obj;
  cout<<"\n\t\t\t Enter your phone number correctly :  ";
  gets(sphoneno);
  fstream fobj;
  fobj.open("RECORD.DAT",ios::in|ios::out|ios::binary);
  while(fobj.read((char *)&cobj,sizeof(cobj))&&fobj.read((char *)&c1obj,sizeof(c1obj))&& fobj.read((char *)&c2obj,sizeof(c2obj)))
  {
    if(strcmp(sphoneno,cobj.returnphoneno())==0)
      {
	flag=1;
	cout<<"\n\n\t\t\t Details:\n\n\n";
	cobj.dismem();
	c1obj.output();
	c2obj.display();
      }
  }
  fobj.close();
  if(flag==-1)
   cout<<"\n\n\t\t\t Record not found!!";
}
void delet()
{
  int c=0,d,flag=-1;
  fstream fobj;
  fstream f2obj;
  perdet cobj;
  rooms c1obj;
  relation c2obj;
  cout<<"\n\n\t\t\t Enter the file number to be deleted";
  cin>>d;
   fobj.open("RECORD.DAT",ios::in|ios::out|ios::binary);
   f2obj.open("RECORD2.DAT",ios::in|ios::out|ios::binary);
  while( fobj.read((char *)&cobj,sizeof(cobj))&&fobj.read((char *)&c1obj,sizeof(c1obj))&& fobj.read((char *)&c2obj,sizeof(c2obj)))
  {  c++;
     if(c!=d)
      {
	   f2obj.write((char *)&cobj,sizeof(cobj));
	   f2obj.write((char *)&c1obj,sizeof(c1obj));
	   f2obj.write((char *)&c2obj,sizeof(c2obj));
      }
     else
      {       flag=1;
      }
  }
  fobj.close();
  f2obj.close();
  remove("RECORD.DAT");
  rename("RECORD2.DAT","RECORD.DAT");
  if(flag==1)
  cout<<"\n\n\t\t\t Record has been successfuly deleted";
  else
  cout<<"\n\n\t\t\t Record not found!!!";
  getch();
}
void displayall()
{
  clrscr();
  perdet cobj;
  rooms c1obj;
  relation c2obj;
  fstream fobj;
  fobj.open("RECORD.DAT",ios::in|ios::out|ios::binary);
  cout<<"Details\n\n  " ;
  while(fobj.read((char *)&cobj,sizeof(cobj))&&fobj.read((char *)&c1obj,sizeof(c1obj))&& fobj.read((char *)&c2obj,sizeof(c2obj)))
  {
	cobj.dism();
	c1obj.room2();
	c2obj.rela();

	getch();
	cout<<"\n-----------------------------------------------------\n";
  }
  fobj.close();
}
void main()
{
 int o;
 first();
 do
 {
    clrscr();
    login();
    clrscr();
    cout<<"\n\t\t\t   NANDAVANAM ELDER HOME";
    cout<<"\n\n\t\t1.ADD A MEMBER\n\n\t\t2.DELETE A MEMBER\n\n\t\t3.MODIFY\n\n\t\t4.SEARCH\n\n\t\t5.DISPLAY ALL RECORDS\n\n\t\t6.EXIT";
    cout<<"\n\n\tEnter the choice: ";
    cin>>o;
 switch(o)
 {
   case 1: insert();
	   break;
   case 2: delet();
	   break;
   case 3:
	   modify();
	   break;
   case 4:
	   search();
	   break;
   case 5: displayall();
	   break;
   case 6:
	   clrscr();
	   cout<<"\n\t\t THANK YOU!!!";
	   getch();
	   exit(0);
   default:
	   cout<<"\n\t\t\t\t Invalid Option.";
 }

 getch();
}while(o<=6);
}
