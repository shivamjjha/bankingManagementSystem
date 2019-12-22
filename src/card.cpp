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

card:: card(){

}



void card:: cardMenu(){
    int Copt;
    char Cch = 'y';
    
    

    do{

    cout << endl << "1.Credit Card\n" <<
                    "2.Debit Card\n" <<
                    "Provide your option: ";
    cin >> Copt;

        switch (Copt)
        {
        case 1:
            creditCard();
            Cch = 'n';
            break;
        
        case 2:
            debitCard();
            Cch = 'n';
            break;
        
        default:
            cout << endl << "Wrong choice enterted!!.. Enter again(y /n): ";
            cin >> Cch;
            break;
        }

    }while(Cch == 'y' || Cch == 'Y');
}

void card:: creditCard(){
    int ccChoice;
    char custChoice;
    cout << endl;
    cout << "1.Basic Credit Card\n";

    cout << "Enter your choice: ";
    cin >> ccChoice;

    cout << "\nAre you an existing customer? (y/ n): ";
    cin >> custChoice;

    makeCreditCard(ccChoice, custChoice);

}

void card:: debitCard(){
    int cdChoice;
    char custChoice;
    
    cout << endl;
    cout << "1.Basic Debit Card\n";

    cout << "Enter your choice: ";
    cin >> cdChoice;

    cout << "\nAre you an existing customer? (y/ n): ";
    cin >> custChoice;

    
    makeDebitCard(cdChoice, custChoice);
}

void card:: makeDebitCard(int type, char custChoice){
    char Choice = 'y';
    char confirm = 'y';

    switch (type)
    {
    case 1:
        cout << "\n\nCustomize your Debit Card \n\n";
        break;
    
    default:
        break;
    }

    cout << "\nBy providing your details in the next and previous step, you authorize bank you use your personal info. (y/ n):";
    cin >> Choice;

    if(Choice == 'y' || Choice == 'Y'){
        if(custChoice == 'y'){
            login();
        }
        else{
            create_acc();
            login();
        }
    }

    if(d == true)
        cout << endl << "Congratulations.. your debit card's request has been successfully registered..  you will soon receive a call from one of our exeutives" << endl  ; 
}

void card:: makeCreditCard(int type, char custChoice){
    char Choice = 'y';
    char confirm = 'y';

    switch (type)
    {
    case 1:
        cout << "\n\nThe Basic Credit Card is an ‘invite-only’ Credit Card, specifically tailored for individuals who settle for nothing but the best in class for everything they do. With this Credit Card, you get a plethora of benefits and privileges, including a personalized card, golf privileges and access to prestigious international events.\n\n";
        break;
    
    default:
        break;
    }

    cout << "\nEnter your annual income: ";
    cin >> annualIncome;

    cout << "\nBy providing your details in the next and previous step, you authorize bank you use your personal info. (y/ n):";
    cin >> Choice;

    if(Choice == 'y' || Choice == 'Y'){
        if(custChoice == 'y'){
            login();
        }
        else{
            create_acc();
            login();
        }
    }

    if(d == true)
        cout << endl << "Congratulations.. your crebit card's request has been successfully registered..  you will soon receive a call from one of our exeutives" << endl  ;  

}
