#include<fstream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>    // works in turbo C
#include<stdio.h>
#include<iomanip>

using namespace std;

class password
    {   char pass[10];
	char get[10];
	int f;
       public:   password()
		{    strcpy(get," ");
		     f=0;
		 }
		void asign()
		{  gets(pass);
		}
		 void getpass()
		  {  cout<<setw(523)<<"Enter password to continue :";
		      gets(get);
		     clrscr();
		     cout<<setw(535)<<"Enter password to continue :************";
		      delay(1000);
		      }

		  int check()
		  {    if(strcmp(pass,get)==0)
			   f=1;

		       return f;

		       }
    };

 class student
  {      private:
	      int roll,adm,count;
	      char name[20];
	      int pt1_mark[5],pt2_mark[5];
	      int sa1_mark[5],sa2_mark[5];
	      int total_m[5];
	      float total,per;
	      char grade;
	      void calc();

	 public:
		void asign();
		       student()
			    {       roll=0;
				     adm=0;
				    strcpy(name," ");
				asign();
				   total=0.0;
				     per=0.0;
				   count=0;
			    }

			void getdata()
			  {   cout<<"\nENTER ROLL NO  :";
			      cin>>roll;
			      cout<<"\nENTER NAME  :";
			      cin>>name;
			      cout<<"\nENTER ADM  :";
			      cin>>adm;
			      getmark();
			  }

				   void display()
			    {  cout<<"ROLL NO  :"<<roll;
			       cout<<"\nNAME  :"<<name;
			       cout<<"\nADM NO.  :"<<adm;
			       cout<<"\n\n\t  PT1  SA1  PT2  SA2   total";
			       cout<<"\nENGLISH"<<"     "<<pt1_mark[0]<<"   "<<sa1_mark[0]<<"   "<<pt2_mark[0]<<"   "<<sa2_mark[0]<<"   "<<total_m[0];
			       cout<<"\nPHYSICS"<<"     "<<pt1_mark[1]<<"   "<<sa1_mark[1]<<"   "<<pt2_mark[1]<<"   "<<sa2_mark[1]<<"   "<<total_m[1];
			       cout<<"\nCHEMISTYRY"<<"  "<<pt1_mark[2]<<"   "<<sa1_mark[2]<<"   "<<pt2_mark[2]<<"   "<<sa2_mark[2]<<"   "<<total_m[2];
			       cout<<"\nMATHS"<<"       "<<pt1_mark[3]<<"   "<<sa1_mark[3]<<"   "<<pt2_mark[3]<<"   "<<sa2_mark[3]<<"   "<<total_m[3];
			       cout<<"\nCS"<<"          "<<pt1_mark[4]<<"   "<<sa1_mark[4]<<"   "<<pt2_mark[4]<<"   "<<sa2_mark[4]<<"   "<<total_m[4];
			       cout<<"\n\n\tTOTAL :"<<total<<"\tPERCENTAGE :"<<per<<"\tGRADE :"<<grade;
			     }
			void show()
			  {  cout<<roll<<setw(6)<<"   "<<name<<setw(10)<<total_m[0]<<"    "<<total_m[1]<<"    "<<total_m[2]<<"    "<<total_m[3]<<"    "<<total_m[4]<<"    "<<per<<"    "<<grade<<endl;
			  }
		       int getroll()
			 { return roll;
			     }
	 void getmark();


	  };
		void student::asign()
		{ for(int i=0;i<5;++i)
		    { pt1_mark[i]=0;
		      pt2_mark[i]=0;
		      sa1_mark[i]=0;
		      sa2_mark[i]=0;
		      total_m[i]=0;
		      }
		  }
		void student::getmark()
		   {        switch(count)
			  {case 0:cout<<"\n\t\tENTER MARKS SCORED IN PT1(50)  :";
				  cout<<"\n   ENGLISH  :";
				    cin>>pt1_mark[0];
				  cout<<"\n   PHYSICS  :";
				    cin>>pt1_mark[1];
				  cout<<"\n   CHEMISTRY  :";
				    cin>>pt1_mark[2];
				  cout<<"\n   MATHS  :";
				    cin>>pt1_mark[3];
				  cout<<"\n   CS  :";
				    cin>>pt1_mark[4];
				  break;
			   case 2: cout<<"Name :"<<name;
				  cout<<"\n\t\tENTER MARKS SCORED IN PT2(50)  :";
				  cout<<"\n   ENGLISH  :";
				    cin>>pt2_mark[0];
				  cout<<"\n   PHYSICS  :";
				    cin>>pt2_mark[1];
				  cout<<"\n   CHEMISTRY  :";
				    cin>>pt2_mark[2];
				  cout<<"\n   MATHS  :";
				    cin>>pt2_mark[3];
				  cout<<"\n   CS  :";
				    cin>>pt2_mark[4];
				  break;
			   case 1:cout<<"Name :"<<name;
				  cout<<"\n\t\tENTER MARKS SCORED IN SA1(100)  :";
				  cout<<"\n   ENGLISH  :";
				    cin>>sa1_mark[0];
				  cout<<"\n   PHYSICS  :";
				    cin>>sa1_mark[1];
				  cout<<"\n   CHEMISTRY  :";
				    cin>>sa1_mark[2];
				  cout<<"\n   MATHS  :";
				    cin>>sa1_mark[3];
				  cout<<"\n   CS  :";
				    cin>>sa1_mark[4];
				  break;
			   case 3: cout<<"Name :"<<name;
				   cout<<"\n\t\tENTER MARKS SCORED IN SA2(100)  :";
				  cout<<"\n   ENGLISH  :";
				    cin>>sa2_mark[0];
				  cout<<"\n   PHYSICS  :";
				    cin>>sa2_mark[1];
				  cout<<"\n   CHEMISTRY  :";
				    cin>>sa2_mark[2];
				  cout<<"\n   MATHS  :";
				    cin>>sa2_mark[3];
				  cout<<"\n   CS  :";
				    cin>>sa2_mark[4];
				  break;
			  default:  cout<<"\n\n\n\n\n\t\tYou have entered all the marks...";
			     }
			     count++;
			      calc();
			  }

			    void student::calc()
			  {    for(int i=0;i<5;++i)
			      {total_m[i]=(pt1_mark[i]+pt2_mark[i]+sa1_mark[i]+sa2_mark[i])/3;

			      }

				 total=total_m[0]+total_m[1]+total_m[2]+total_m[3]+total_m[4];

				 per=(total_m[0]+total_m[1]+total_m[2]+total_m[3]+total_m[4])/5.0;
				 if(per>80)
				     grade='A';
				   else if(per>60)
				      grade='B';
				       else if(per>40)
					   grade='C';
					  else if(per>33)
					       grade='D';
					     else
						 grade='F';
				}
	    void welcome()
{  int gd=DETECT,gm;

 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
      clrscr();
	  settextstyle(BOLD_FONT,HORIZ_DIR,1);

  clearviewport();
	 for(int i=0;i<8;++i)
	  {   setcolor(i);
	     outtextxy(70,200,"STUDENT REPORT CARD MANAGEMENT");
	     delay(200);
	     }
	     delay(1000);
   clearviewport();
	 settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
      setcolor(2);
	 outtextxy(200,150,"Welcome");
    delay(1000);
	 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	 setcolor(RED);
       outtextxy(300,300,"Program by :-");
	 setcolor(9);
       outtextxy(400,300,"      Siddharth Sankar");
       outtextxy(400,330,"      Vishnu Manoj");
       outtextxy(400,360,"      Akhil S Nair");
	  delay(2000);
    closegraph();

}
     void school()
     {
     cout<<"\t\t    KERALA EDUCATION SOCIETY SR.SEC.SCHOOL\n";
     cout<<"\t\t  __________________________________________\n";
     }

	 void result();
	 void entry();
	 void write();
	 void displayr(int x);
		 void update();
	     void main()
	 {   clrscr();
	    cout.setf(ios::fixed|ios::showpoint);
	    cout<<setprecision(2);
	     welcome();
			 password p;
      fstream f;

      f.open("pass.dat",ios::binary|ios::in);
	f.read((char *)&p,sizeof(p));
	p.getpass();

	if(p.check()==1)
	  {
		       char ch;
	     do{   clrscr();
		  school();
		 cout<<"\n\n\n"<<setw(44)<<"MAIN MENU";
		 cout<<"\n\n\t\t1.ENTRY MENU\n\t\t2.RESULT MENU\n\t\t3.EXIT";
		 cout<<"\n\n\t\tENTER YOUR CHOICE  :";
		 cin>>ch;
		 switch(ch)
		{   case '1':entry();
			       break;
		    case '2':result();
			       break;
		   default:exit(0);
		 }
		}while(ch!='3');
	    }
	else
	  {   clrscr();
		cout<<"\n\n\n\t\t\tINVALID PASSWORD";

	  }
	getch();

  }

	      void write()
	      {  student s;
		 ofstream fout;
		 fout.open("student.dat",ios::binary|ios::app);
		    s.getdata();

		  fout.write((char *)&s,sizeof(student));

		 fout.close();
		}
	       void displayr(int x)
		{  student s;
		    ifstream fin;
		  fin.open("student.dat",ios::binary);
		     int f=0;
		   while(fin)
		   {   fin.read((char *)&s,sizeof(student));
		      if(s.getroll()==x)
		       { s.display();
			  f=1;
			  break;
			}
		      }
		      if(f==0)
			cout<<"\n\n\t\tEntered roll no. doesnot exist";
		   fin.close();
		   getch();
		  }

		void update()
			   {    fstream f;
				  f.open("student.dat",ios::binary|ios::in|ios::out);
				   f.seekg(ios::beg);

				 int pos,roll;
			     student s1;
				  cout<<"\nEnter roll to be Updated :";
				     cin>>roll;
				   cout<<"\n";
				   while(f)
				   {
				      pos=f.tellg();
				    f.read((char *)&s1,sizeof(student));
				    if(s1.getroll()==roll)
				     {
				      s1.getmark();
					f.seekp(pos);
				      f.write((char *)&s1,sizeof(student));
				      break;
				      }
				    }
				 f.close();
					      getch();
					  }
			   void delete_r()
				      { ifstream fio;
				   ofstream file;
				  fio.open("student.dat",ios::binary);
				  file.open("temp.dat",ios::binary|ios::app);
				      student s;
				  int rno;
				  char found='f';
				  char confirm;

				  cout<<"\n\tEnter the rollno. of student whose record is to be deleted :";
				    cin>>rno;


			       while(fio)
				{ fio.read((char *)&s,sizeof(student));
				   if(s.getroll()==rno)
				   {   s.display();
					found='t';
				       cout<<"\n\nAre you sure,you want to delete this record?(y/n) :";
					  cin>>confirm;
					if(confirm=='n')
					   file.write((char *)&s,sizeof(s));
					else
					   cout<<"\n\n\tDeleted...!!";

				     }
				    else
				       file.write((char *)&s,sizeof(s));
				  }
				 if(found=='f')
				   cout<<"\nRecord not found ";

				     fio.close();
				     file.close();
				    remove("student.dat");
				    rename("temp.dat","student.dat");
					      getch();

					}
			       void entry()
		    { clrscr();
		       school();
		       char ch;
		      cout<<"\n\n\n\t\tEntry Menu\n\n1.Create Student Record\n2.Update Student record\n3.Delete student Record\n4.Back to Main Menu";
		      cout<<"\n\n\t\tEnter your choice  : ";
			 cin>>ch;
			   clrscr();
			 school();
		      switch(ch)
		      {  case '1':write();
				 break;
			 case '2':  update();
				 break;
			  case '3':  delete_r();
				    break;
			   default:  break;
			 }
			 }
			 void result()
			    {
			       char ch;
				int rno;
				clrscr();
				school();
			       cout<<"\n\n\n\t\tRESULT MENU";
			       cout<<"\n\n1.CLASS RESULT\n2.STUDENT DETAILS\n3.BACK TO MAIN MENU";
			       cout<<"\n\n\t\tENTER CHOICE  :";
			       cin>>ch;
			       clrscr();
				 school();

			       switch(ch)
			      {
				 case '1': student s;
					 ifstream fin;
					fin.open("student.dat",ios::binary);
					cout<<"=================================================================\n";
					cout<<"R no.  name          P      C      M      E     CS    %AGE    grade \n";
					cout<<"=================================================================\n";

					 while(fin)
					  { fin.read((char *)&s,sizeof(s));
					   s.show();
					   }
					 getch();

					fin.close();
					break;
				case '2':cout<<"Enter roll no. :";
					   cin>>rno;
					  displayr(rno);
					    break;

			       default:break;

			      }

			 }
