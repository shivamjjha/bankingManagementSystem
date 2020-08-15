#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<vector>
#include<cstdio>
#include<string>

#include "person.hpp"
#include "accounts.hpp"
#include "deposits.hpp"
#include "insurance.hpp"
#include "investments.hpp"
#include "loans.hpp"
#include "card.hpp"

using namespace std;

void person::create_acc(){
     person writeObject;

     ofstream xl("acc_info.dat" , ios::binary | ios::app);
         cout<<"ENTER FIRST NAME\n";
     getline(cin,writeObject.firstname);

     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,writeObject.middlename);

     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,writeObject.lastname);  

     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,writeObject.fname);  

     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,writeObject.email_id);

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,writeObject.pan_no);

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,writeObject.address);  

     long mobileNumber;               
     cout<<"ENTER YOUR '10 digit' MOBILE NUMBER: "<<endl;
     cin >> mobileNumber;
     cin.ignore();

      writeObject.mobile_no = to_string(mobileNumber);
      
      long accountNumber = 910000000000 + mobileNumber;
      writeObject.acc_no = to_string(accountNumber);

      writeObject.crn = to_string(accountNumber/(500));

    
     string repswrd;
     bool areEqual;

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,writeObject.password);    

     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);

     if(writeObject.password == repswrd){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           writeObject.password = repswrd;
           areEqual = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          areEqual = false;
               }

         }while(!areEqual);

      xl.write(reinterpret_cast<char*>(&writeObject), sizeof(writeObject));

      cout<<"\n\nAccount created successfully!!\n\n";   

      cout << "\nCRN: " << writeObject.crn;
     

     xl.close();
     }

int person::login(){
   bool found = false;
   
   ifstream readPerson("acc_info.dat", ios::in | ios::binary);
   person pReadObj;

   
   readPerson.seekg(0, ios::end);

   
   int numberOfPerson = readPerson.tellg()/sizeof(person);

   cout << "\nThere are: " << numberOfPerson << " account holders";
   

  string cRn, pass;
  char choice = 'y';
  bool foundPerson = false;
  int getPos = -sizeof(person), EndPos = readPerson.tellg(), sizeOfPerson = sizeof(pReadObj);

  cout << "\nEnd Pos: " << EndPos << endl;
  
   readPerson.seekg(getPos);

   cout << "\nPosition before loop: " << getPos << endl;

   do {
      cout << "\nEnter CRN: ";
      getline(cin, cRn);

      cout << "\nEnter password: ";
      getline(cin, pass);

      while(getPos< EndPos && foundPerson == false) {
         getPos+= sizeOfPerson;
         readPerson.seekg(getPos);

        cout << "\nNow position: " << getPos << endl;


         readPerson.read(reinterpret_cast<char*>(&pReadObj), sizeof(pReadObj));  
         
         if(getPos >= 0) {
            cout << "\nCRN: " << pReadObj.crn << "\n Password: " << pReadObj.crn << endl; 
         }

         if(cRn == pReadObj.crn) {
            if(pass == pReadObj.password) {
               foundPerson = true;
               cout << "\nLogin Code: " << getPos << "\n";
               break;
            }
         }
      }

      if(foundPerson == false) {
         cout << "\nWrong CRN and password entered... try again?(y/n): ";
         cin >> choice;
         cin.ignore();
      }
   }while(choice == 'y' || choice == 'Y');

  if(foundPerson == false) {
     return -1;
  }
  else {
     return getPos;
  }
}

void person::welcome(){
   //MAIN MENU
   int ch = 0;
   bool isCorrectChoice = false;
   do{
         cout<<endl; 
      
         cout << "How can we help you?: "<< endl;
         cout << "1.Accounts\n"
            << "2.Deposit\n"
            << "3.Cards\n"
            << "4.Loans\n"
            << "5.Insurance\n"
            << "6.Investments\n"
            << "7.Exit\n";
            
            cout<<"≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n";
            cout<< "Enter your choice: ";
            cin >> ch;
            cin.ignore();
         
            if(ch > 7 || ch < 1) {
               cout << "\nEntered a wrong choice.. Enter again..\n";
               
               isCorrectChoice = false;
            }
            else {
               isCorrectChoice = true;
               after_user_choice(ch);
            }

   }while(!isCorrectChoice);   
}

void person:: after_user_choice(int c){
   switch (c){
   case 7: cout << "\nHope to see you soon again :)\n"; 
           exit(0);
      
   case 1: accounts() ;
      break;
   
   case 2: deposit();
      break;
   
   case 3: cards();
      break;

   case 4: loans();
      break;

   case 5: insurance();
      break;

   case 6: investments();
      break;      

   default: cout<< "\n\nWrong Choice Entered!!! Enter again: \n\n";
            welcome();
      break;
   }
} 

void person:: accounts(){
   class accounts a;
   a.ac();
}

void person:: deposit(){
      deposits dobj;
}

void person:: cards(){
   card c;
   c.cardMenu();
}

void person:: loans(){
   class loans lobj;

}

void person:: insurance(){


}

void person:: investments(){

}

person ::~person(){

}

int person::check(int upperLim, int lowerLim, int choice){
     if(choice<lowerLim || choice>upperLim)
            {   
                cout<<"eror choose an appropriate option"<<endl;
                cin>>choice;
                check(upperLim, lowerLim,choice);
            }
     else
            {
                return choice;
            }
}

void person::show_account(int loginCode){
   // int loginCode = login();

   if(loginCode > 0) {
      cout << "\n\nLogged in Successfully!!!\n\n";

      ifstream showPerson("acc_info.dat", ios::in | ios::binary);
      showPerson.seekg(loginCode);
      person tempPerson;
      
   }
}

/*
void person:: viewPersonDetails() {
   cout << "\n\n***DETAILS***\n\n"
        << "Name: " << ""
        << "CRN :" << "";
}
*/