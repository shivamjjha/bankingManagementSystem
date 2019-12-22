<<<<<<< HEAD
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

     ofstream xl("acc_info.csv" , ios::app );
         cout<<"ENTER FIRST NAME\n";
     getline(cin,firstname);

     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                     
     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

    acc_no = to_string(910000000000 + stol(mobile_no, nullptr, 10)); //generating acc no;

    crn = to_string(int(stol(acc_no)/100000)); //generating crn;
     string repswrd;
     bool z;

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);

     if(!(password.compare(repswrd))){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\n\nAccount created successfully\n\n";

      cout << "Customer Satisfaction is our main"
           << "priority, so we have deposited a "
           << "sum of Rs. 100 into your bank a/c"
           << endl << endl;
    
     xl<<crn<<","
      << acc_no<< ","
     << firstname << "," 
     << middlename << "," 
     << lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance << ","
     << password<< "\n";

     xl.close();

     cout<<endl;  

     }

void person::login(){
   bool found = false;

   fstream fin;
   fin.open("acc_info.csv", ios:: in);

   string CRN, Password;
   cout << "\nEnter CRN: ";
   getline(cin, CRN);

   cout << "\nEnter password :";
   getline(cin, Password);

   vector<string> record;
   string line, word, temp;

   if(fin){
      while(getline(fin, line)){
         record.clear();
         stringstream s(line);

         while(getline(s, word, ',')){
            record.push_back(word);
         }

         if(record.size() != 11)
                throw std::runtime_error("invalid record size (" + std::to_string(record.size()) + ")");

         if(CRN == record[0] && Password == record[10]){
            found = true;
            cout << "\nLogin successfull!\n\n";
            cout << "ACCOUNT DETAILS: \n\n";
            
            cout << "Name : " << record[2] + record[3] + record[4]
                 << "\nCRN: " << record[0]
                 << "\nAccount Number: " << record[1]
                 << "\nEmail: " << record[6]
                 << "\nAddress: " << record[7]
                 << "\nBalance: Rs." << record[9];

            break;
         }
      }
      if(!found){
         cout << "\nWrong CRN and password entered\n\n";
      }

   }
   else{
      cout << "\nTechnical fault occured.. try again after some time!!\n\n";
   }
   
}


void person::welcome(){
   //MAIN MENU
   int ch = 0;
   do{
         cout<<endl; 
      
         cout<<"\t\t\t🌸  𝙒 𝙀 𝙇 𝘾 𝙊 𝙈 𝙀   𝙏 𝙊  🅖 🅤 🅡 🅤  🅝 🅐 🅝 🅐 🅚  🅑 🅐 🅝 🅚   𝙊 𝙁  𝙄 𝙉 𝘿 𝙄 𝘼  🌸\n";
         cout<<"\t\t\t≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n\n\n\n";

         cout << "How can we help you?: "<< endl;
         cout << "1.Accounts\n"
            << "2.Deposit\n"
            << "3.Cards\n"
            << "4.Loans\n"
            << "5.Insurance\n"
            << "6.Investments\n"
            << "7.Exit\n";
            
            cout<<"≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n";
            cout<< "Enter your choice( 0 to quit): ";
            cin >> ch;
            cin.ignore();
         
            if(ch > 7 || ch < 0)
               cout << "\nEntered a wrong choice.. Enter again..\n";
            else
               after_user_choice(ch);  
   }while(ch!=7);   
}

void person:: after_user_choice(int c){
   switch (c){
   case 7: cout << "\nHope to see you soon again :)\n"; 
           break;
      
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

   default: cout<< "\n\nWrong Choice Entered!!! Enter gain: \n\n";
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

void person::show_account(){

}
=======
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

     ofstream xl("acc_info.csv" , ios::app );
         cout<<"ENTER FIRST NAME\n";
     getline(cin,firstname);

     cout<<"ENTER MIDDLE NAME \n";
     getline(cin,middlename);

     cout<<"ENTER LAST NAME: "<<endl;
     getline(cin,lastname);  

     cout<<"ENTER FATHER'S NAME: "<<endl;
     getline(cin,fname);  

     cout<<"ENTER YOUR EMAIL_ID: ";
     getline(cin,email_id);

     cout<<"ENTER PAN CARD NUMBER: "<<endl;
     getline(cin,pan_no);

     cout<<"ENTER YOUR RESIDENTIAL ADDRESS: "<<endl;
     getline(cin,address);  
                     
     cout<<"ENTER YOUR MOBILE NUMBER: "<<endl;
     getline(cin, mobile_no);

    acc_no = to_string(910000000000 + stol(mobile_no, nullptr, 10)); //generating acc no;

    crn = to_string(int(stol(acc_no)/100000)); //generating crn;
     string repswrd;
     bool z;

    do{
     
     cout<<"ENTER PASSWORD FOR YOUR CRN(USER_ACC): ";
     getline(cin,password);    

     cout<<"RE-ENTER YOUR PASSWORD: ";
     getline(cin,repswrd);

     if(!(password.compare(repswrd))){
               
           cout<<"Passwords matched succesfully!"<<endl<<endl;
           z = true;
           }
     else{
          
          cout<<"Passwords didn't match!!! Try again\n"<<endl;
          z = false;
               }

         }while(!z);

      cout<<"\n\nAccount created successfully\n\n";

      cout << "Customer Satisfaction is our main"
           << "priority, so we have deposited a "
           << "sum of Rs. 100 into your bank a/c"
           << endl << endl;
    
     xl<<crn<<","
      << acc_no<< ","
     << firstname << "," 
     << middlename << "," 
     << lastname<< ","
     << mobile_no<< ","
     <<email_id<<","
     << address<< ","
     <<pan_no<<","
     <<balance << ","
     << password<< "\n";

     xl.close();

     cout<<endl;  

     }

void person::login(){
   bool found = false;

   fstream fin;
   fin.open("acc_info.csv", ios:: in);

   string CRN, Password;
   cout << "\nEnter CRN: ";
   getline(cin, CRN);

   cout << "\nEnter password :";
   getline(cin, Password);

   vector<string> record;
   string line, word, temp;

   if(fin){
      while(getline(fin, line)){
         record.clear();
         stringstream s(line);

         while(getline(s, word, ',')){
            record.push_back(word);
         }

         if(record.size() != 11)
                throw std::runtime_error("invalid record size (" + std::to_string(record.size()) + ")");

         if(CRN == record[0] && Password == record[10]){
            found = true;
            cout << "\nLogin successfull!\n\n";
            cout << "ACCOUNT DETAILS: \n\n";
            
            cout << "Name : " << record[2] + record[3] + record[4]
                 << "\nCRN: " << record[0]
                 << "\nAccount Number: " << record[1]
                 << "\nEmail: " << record[6]
                 << "\nAddress: " << record[7]
                 << "\nBalance: Rs." << record[9];

            break;
         }
      }
      if(!found){
         cout << "\nWrong CRN and password entered\n\n";
      }

   }
   else{
      cout << "\nTechnical fault occured.. try again after some time!!\n\n";
   }
   
}


void person::welcome(){
   //MAIN MENU
   int ch = 0;
   do{
         cout<<endl; 
      
         cout<<"\t\t\t🌸  𝙒 𝙀 𝙇 𝘾 𝙊 𝙈 𝙀   𝙏 𝙊  🅖 🅤 🅡 🅤  🅝 🅐 🅝 🅐 🅚  🅑 🅐 🅝 🅚   𝙊 𝙁  𝙄 𝙉 𝘿 𝙄 𝘼  🌸\n";
         cout<<"\t\t\t≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n\n\n\n";

         cout << "How can we help you?: "<< endl;
         cout << "1.Accounts\n"
            << "2.Deposit\n"
            << "3.Cards\n"
            << "4.Loans\n"
            << "5.Insurance\n"
            << "6.Investments\n"
            << "7.Exit\n";
            
            cout<<"≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n";
            cout<< "Enter your choice( 0 to quit): ";
            cin >> ch;
            cin.ignore();
         
            if(ch > 7 || ch < 0)
               cout << "\nEntered a wrong choice.. Enter again..\n";
            else
               after_user_choice(ch);  
   }while(ch!=7);   
}

void person:: after_user_choice(int c){
   switch (c){
   case 7: cout << "\nHope to see you soon again :)\n"; 
           break;
      
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

   default: cout<< "\n\nWrong Choice Entered!!! Enter gain: \n\n";
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

void person::show_account(){

}
>>>>>>> 428b70548c54de0a07312281817d98276f11b41f
