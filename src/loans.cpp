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


loans::loans(){

    float cal;
    float salary;
    
    cout<<"\t\t\t\t-----WELCOME TO LOAN SECTION------"<<endl;

    cout<<"\n\nSit back with ease and let our personal loans take care of your unplanned financial needs and emergencies. Get quick access within few clicks.\n\n";

    cout<<"\nPRESS 1 to apply now or any other key to quit !!\n";
    cin >> loans::loan_opt;
    if(loan_opt == 1){
   
    person::login();
    
    loan_opt=0;

    cout<<"\nPress 1 for taking estimate of loan you can get from our bank\n";
    if(loan_opt==1){
    cout<<loan_opt;
    cout<<"Please Enter Your Salary/Income Per Anum"<<endl;
    cin>>salary;
    
    
    cal = salary*0.6 ;

    cout<<"YOU ARE ELIGIBLE FOR THE LOAN UPTO : ₹"<<cal<<endl;

    cout<<"\nFOR  FURTHUR PROCEDURE CONSULT TO THE MANAGER OF YOUR NEAREST BRANCH"<<endl;

        }
     }
     
    person::welcome();
    


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


loans::loans(){

    float cal;
    float salary;
    
    cout<<"\t\t\t\t-----WELCOME TO LOAN SECTION------"<<endl;

    cout<<"\n\nSit back with ease and let our personal loans take care of your unplanned financial needs and emergencies. Get quick access within few clicks.\n\n";

    cout<<"\nPRESS 1 to apply now or any other key to quit !!\n";
    cin >> loans::loan_opt;
    if(loan_opt == 1){
   
    person::login();
    
    loan_opt=0;

    cout<<"\nPress 1 for taking estimate of loan you can get from our bank\n";
    if(loan_opt==1){
    cout<<loan_opt;
    cout<<"Please Enter Your Salary/Income Per Anum"<<endl;
    cin>>salary;
    
    
    cal = salary*0.6 ;

    cout<<"YOU ARE ELIGIBLE FOR THE LOAN UPTO : ₹"<<cal<<endl;

    cout<<"\nFOR  FURTHUR PROCEDURE CONSULT TO THE MANAGER OF YOUR NEAREST BRANCH"<<endl;

        }
     }
     
    person::welcome();
    


}

>>>>>>> 428b70548c54de0a07312281817d98276f11b41f
