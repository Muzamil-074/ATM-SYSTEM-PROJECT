//ATM system project. first download espeak because i use voice assistant in this project
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{  
system("color B1");
char n;
char a,w;
string name,f_name,d_o_b,pin;
int n1,balance=1000000,deposit,withdraw;
cout<<setfill('=')<<setw(164)<<"                                            ";
cout<<endl;
cout<<setfill('*')<<setw(75)<<"  ||  WELCOME TO HBL BANK   ||"<<" *******************************************\n";
cout<<endl;
string phrase =" WELCOME TO HBL BANK   ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<setfill(' ')<<setw(79)<<"*****************************************";  
cout<<endl;
cout<<setfill(' ')<<setw(80)<<"*  Press 1 : For Create A New Account   *\n";
cout<<setfill(' ')<<setw(80)<<"*  Press 2 : Balance Enquiry            *\n";  
cout<<setfill(' ')<<setw(80)<<"*  Press 3 : Deposit Money              *\n";  
cout<<setfill(' ')<<setw(80)<<"*  Press 4 : Withdraw Cash              *\n";  
cout<<setfill(' ')<<setw(79)<<"*****************************************";                                          
cout<<endl;
n=getch();
if(n=='1')
{
system("CLS");
cout<<setfill('=')<<setw(164)<<"                                            ";
cout<<endl;
string phrase =" CREATE A NEW ACCOUNT    ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<setfill('*')<<setw(75)<<"  ||  CREATE A NEW ACCOUNT    ||"<<" *******************************************\n";
cout<<endl;
cout<<"Enter Your Name : ";
getline(cin,name);
cout<<endl;
cout<<"Father Name : ";
getline(cin,f_name);
cout<<endl;
cout<<"Enter Your Date Of Birth : ";
getline(cin,d_o_b);
cout<<endl;
cout<<"Creater Your Pincode : ";
cin>>n1;
system("CLS");
cout<<setfill('*')<<setw(75)<<"  || YOUR ACCOUNT HAS BEEN CREATED    ||"<<" *******************************************";
cout<<endl;
phrase ="YOUR ACCOUNT HAS BEEN CREATED     ";
command = "espeak \"" + phrase + "\"";
charCommand = command.c_str();
system(charCommand);
cout<<"Account Holder Name : "<<name;
cout<<endl<<endl;
cout<<"Your Father Name : "<<f_name;
cout<<endl<<endl;
cout<<"Your Date Of Birth : "<<d_o_b;
cout<<endl<<endl;
cout<<"Your Pincode : "<<n1;
}
//________________________________________________________________________________

else if (n=='2')
{
system("CLS");
string phrase =" Balance Enquiry     ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<setfill('*')<<setw(75)<<"  ||  CHECK YOUR BALANCE    ||"<<" *******************************************\n";
cout<<endl;
cout<<"Enter Your Name : ";
getline(cin,name);
cout<<endl<<endl;
	do{
		cout<<"Enter Your Pin code : ";
	for(int i=1;i<=5;i++)
	{
		a=getch();
		cout<<"*";
		pin+=a;
	}
	if(pin=="12345"){
	system("CLS");
cout<<setfill('*')<<setw(75)<<"  ||  YOUR ACCOUNT  ||"<<" *******************************************\n";		
cout<<"Account holder : "<<name;
cout<<"\nYour pin code : "<<pin;
cout<<"\nYour balane : "<<balance;
string phrase =" YOUR ACCOUNT    ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
	}
	else{
cout<<"\nwrong pin code (y/n)";
string phrase =" you enter wrong pin code    ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);}
    w=getch();
    pin.erase();}


while(w=='y'||w=='Y');
}
//________________________________________________________________________________________________________________

else if(n=='3')
{
system("CLS");
cout<<"******************************ENTER YOUR ACCOUNT INFORMATION*************************";
string phrase ="Enter your account information to deposit money  ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<"\nEnter Your Name : ";
getline(cin,name);
cout<<endl<<endl;
do{
	
	cout<<"Enter Your Pin code : ";
	for(int i=1;i<=5;i++)
	{
		a=getch();
		cout<<"*";
		pin+=a;
	}
if(pin=="12345"){
system("CLS");
string phrase =" deposit cash   ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<setfill('*')<<setw(75)<<"  ||  DEPOSIT CASH  ||"<<" *******************************************\n";		
cout<<"Account holder : "<<name;
cout<<"\nYour pin code : "<<pin;
cout<<"\nYour balane : "<<balance;
cout<<"\nEnter Amount Of Deposit : "<<endl;
cin>>deposit;
balance+=deposit;

cout<<"\nYour New Balance is = "<<balance;
	}
	else{
string phrase =" you enter wrong pin code try again    ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
	cout<<"\nwrong pin code (y/n)";}
    w=getch();
    pin.erase();}


while(w=='y'||w=='Y');
}
//__________________________________________________________________________________________________	

else if(n=='4')
{
system("CLS");
cout<<"******************************ENTER YOUR ACCOUNT INFORMATION*************************";
string phrase ="Enter your account information to withdraw cash  ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<"\nEnter Your Name : ";
getline(cin,name);
cout<<endl<<endl;
do{
	
	cout<<"Enter Your Pin code : ";
	for(int i=1;i<=5;i++)
	{
		a=getch();
		cout<<"*";
		pin+=a;
	}
if(pin=="12345"){
system("CLS");
string phrase =" withdraw cash   ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
cout<<setfill('*')<<setw(75)<<"  ||  WITHDRAW CASH  ||"<<" *******************************************\n";		
cout<<"Account holder : "<<name;
cout<<"\nYour pin code : "<<pin;
cout<<"\nYour balane : "<<balance;
cout<<"\nEnter amount to withdraw : ";
cin>>withdraw;
if(withdraw<=balance)
{
	balance-=withdraw;
	cout<<"You successfully withdraw your cash ";
string phrase =" You successfully withdraw your cash you remainig balance show below   ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
	cout<<"\nYour remaining  balance : "<<balance;
}
else {
	cout<<"You enter invail amount ";
}
	}
	else{
string phrase =" you enter wrong pin code try again    ";
string command = "espeak \"" + phrase + "\"";
const char *charCommand = command.c_str();
system(charCommand);
	cout<<"\nwrong pin code (y/n)";}
    w=getch();
    pin.erase();
}
while(w=='y'||w=='Y');
}

}

