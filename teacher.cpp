#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include <fstream>
#include <cstring>
#include <time.h>
#include <typeinfo>
#include <stdlib.h>
#include <sstream>

//Teacher header file contains code for teacher related functions and classes
#include "teacher_header.h"



int Attendance(); // helps to mark attendance
int teacherView(); // Display available options for teacher role
int teacherlogin(); // allows to login for teacher

// tecacher is an inherited class from user class 
//who has username and password as its data members.
int teacherlogin()
{
	system("cls");
	cout<<"\n -------------------- Teacher Login ----------------------";	

        string username;
	string password;
	
	cout<<"\n Enter username : ";
	cin>>username;
	cout<<"\n Enter password : ";
	cin>>password;
	
	if(username=="teacher" && password=="teacher") 
	{   teacherView();
	    getchar();	
       }   
       else
       {
        cout<<"\n Error ! Invalid Credintials..";	
        cout<<"\n Press any key for main menu ";
        getchar();getchar();
      }
   
   return 0;
	
}


// we can mark attendance with this function and
// the marking is stored in db.dat
int Attendance()
{   ifstream read;
    read.open("db.dat");
    
    if(read)
    {       int recordFound =0; 
	    string line;
    	    while(getline(read, line)) {
    	    	
    	    	char name[100];
    	    	strcpy(name, line.c_str());
    	    	string filename = name;

    int total_lines = 0;
            ifstream read1;
	read1.open(filename.c_str(), ios::app);
	string line;
	while(getline(read1,line)){
			++ total_lines;
		}
    read1.close();


	ifstream read;
	read.open(filename.c_str(), ios::app);
	// ifstream read;
	// read.open("db.dat");
    cout<<"name:"<<filename<<endl;
    int c;
    cout<<"1: present:"<<"\t"<<"O : absent:"<<endl;
    cout<<"enter choice:"<<endl;
    cin>>c;
    switch(c)
    {
        case 1: 
                { string line;
                if(read)
                {	
                    int line_no = 0;
                while (line_no != total_lines && getline(read, line)) {
                ++line_no;
                }
                if (line_no == total_lines) {
                    int i;
                    istringstream(line)>>i;
                    i++;

                    ofstream out1;
                    string temp = name;
                    out1.open(temp.c_str(), ios::app);
                    out1<<i<<"\n";

                }
                }	
                break;
                }
        case 0:
                break;

    }
	
    read.close();        
    }
     
    }
    read.close();

cout<<"\n Please any key to continue..";

getchar();getchar();

return 0;	
}






// as mentioned earlier we can display the available tasks for teacher
// here the teacher can select/ input an integer and console will scan the input
// and once the input is fetched, it will act according to switch cases.
int teacherView()
{	
    int goBack = 0;
    while(1)
    {
		system("cls");
		cout<<"\n 1 Mark Attendance";
		cout<<"\n 0. Go Back <- \n";
		int choice;
		
		cout<<"\n Enter you choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: Attendance();break;  
			case 0: goBack = 1;break;
	                default: cout<<"\n Invalid choice. Enter again ";
	                 getchar();           	
	   }   
	   
	   if(goBack == 1)
	   {
	   	break; 
           }     
    	
   }
   
   
   return 0;

}
