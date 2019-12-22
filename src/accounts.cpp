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

void accounts::options(int loginCode){
        char userChoice = 'y';
        int opt;
        cout << endl << endl;
        do{
                cout << "1.Show account details\n"
                << "2.Go to main menu\n"
                << "Enter choice: ";

                cin >> opt;
                cin.ignore();

                switch(opt){
                        case 1: show_account(loginCode);
                                break;
                        
                        case 2: person::welcome();
                                break;
                                
                        
                        default :
                                cout << "\nWrong choice entered.. enter again? (y/n): ";
                                cin >> userChoice;
                                cin.ignore();
                }                

        }while(userChoice == 'y' || userChoice == 'Y');
        
}

void accounts::ac(){
    int ch;
    cout<< endl << endl 
        <<  "Your financial goals are what drive you forward, and we understand how important it is for you to achieve them. That’s why, our savings and current accounts are specifically designed keeping your unique needs in mind." << endl << endl;

char opt = 'y';

   do{                
        cout << "1.Savings Account" << endl << "2.Current Account" << endl << "(1 or 2)? Press -1 to exit, 0 for main menu" << endl;

        cin >> ch;

    
        switch(ch){
            case -1: //return true;
                cout << "\nHope to see you soon :)\n";
                        //exit(0);
                        opt = 'n';
                        break;

            case 0: //::start();
                        person::welcome();
                    opt = 'n';
                    break;

            case 1: savingsAccount();
                    //return false;
                    opt = 'n';
                    break;

            case 2: currentAccount();
                    //return false;
                     opt = 'n';
                    break;

            default: cout << endl<<
                    "Wrong choice entered.. Enter again?? (y/n): ";
                    cin >> opt;
                    break;
        }
    }while(opt == 'y' || opt == 'Y');

}

void accounts::savingsAccount(){
        int ch;
        char Sch = 'y';
        
        cout << endl  << endl<< "Welcome to the Savings Account section" << endl;
        


        do{
                cout << "1.Open a new savings a/c\n" << "2.Log into your a/c\n"
                << "3.Go to main menu\n" <<
                "4.Exit\n" << "Enter a choice: ";
                cin >> ch;
                cin.ignore();

                switch (ch)
                {
                case 1:
                        createSavingsAccount();
                        Sch = 'n';
                        person::welcome();
                        break;
                
                case 2: 
                        int loginCode = login();
                        options(loginCode);
                        break;

                case 3: person::welcome();
                        return;
                        break;

                case 4:
                        exit(0);
                        break;
              
                default:
                        cout << "You've entered a wrong choice.. Enter again??(y/ n) :";
                        cin >> Sch;
                        break;
                }
        }while(Sch == 'y' || Sch == 'Y');        

}

void accounts:: currentAccount(){

}

void accounts:: createSavingsAccount(){
        create_acc();
}
