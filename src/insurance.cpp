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

insurance_:: insurance_(){
    cout << endl << endl << "Worrying won’t help. Preparing will. You can’t predict the turns life will take. But you can prepare for them. Getting insurance cover against all those uncertainties is crucial for you and your loved ones." << endl << endl;
}

void insurance_::insuranceMenu(){
    int menuChoice;
    char choice;
    
    cout << "\n1.Health Insurance\n" <<
            "\n2.Life Insurance\n" << 
            "\n3.Motor Insurance\n";

    cout << "Enter your choice: ";
    cin >> menuChoice;

    do
    {
        switch (menuChoice)
        {
        case 1: healthInsurance();
            break;
        
        case 2: lifeInsurance();
            break;

        case 3: motorInsurance();
            break;

        default: cout << endl << "Wrong             choice entered.. Enter             again (y/n): ";
                 cin >> choice;
                 break;
        }

    } while (choice == 'y' || choice == 'Y');
    
}

void insurance_:: healthInsurance(){


    cout << "\nHealth is the real wealth, with a comprehensive health plan we ensure that you and your family members are always well-protected\n" << " Apply now?: ";

    foo();
    
}

void insurance_::lifeInsurance(){
    cout << "\n\nIt's all about bringing certainity to an uncertain life.Secure your family's future by taking a life cover. Plan your retirement,your children’s education and even save up for other important life events.\n" << "   Apply now? (y/n): ";

    foo();
}

void insurance_:: motorInsurance(){
   cout << "\n\nSecuring your journey ahead.\n" << "    Apply now?(y/n): ";
   foo();
}

void insurance_::foo(){
    char applyOption = 'y';
    char custChoice = 'y';

    cin >> applyOption;

    if(applyOption == 'y' || applyOption == 'Y'){
        cout << endl << "\nAre you an existing customer? (y/n): ";
        cin >> custChoice;

        if(custChoice == 'y' || custChoice == 'Y')
            login();
        else{
            create_acc();
            login();
        }
    }

        cout << "\n\nWe've recieved your request.. You will shortly get a call from one of our executives.. Hope to see you soon\n";
}
