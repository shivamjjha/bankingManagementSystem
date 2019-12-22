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
/*
    Mutual Funds
    Portfolio Management Service
    Sovereign Gold Bond Scheme
    Demat Account
    Bank + Demat + Trading A/c
    Tax Saving Options
*/


investments::investments(){


    cout<<"\n-------WELCOME TO INVESTMENT SECTION---------\n";

    cout<<"\nStart investing in mutual funds online to grow your wealth along with saving taxes. Get a complete guide on Mutual Fundsinvestments and much more with our Bank.\n\n";

    cout<<"\nWe all have different ideas while investing. Whether you want to create wealth or preserve it, whether you’re looking at capital appreciation or your long-term goals, you’ll find all the right answers with our mutual funds. \n";

    cout<<"\nReady to take next step??\n";

    cout<<"press 1 ➤ APPLY NOW \npress any other to exit\n";
    cin>>invest_choose;
repeat:
    switch (invest_choose)
    {
    case 1 :
        person::login();
        
         cout<<" We have recorded your contact details , Thanks for showing interest in our mutual fund policy ! we will contact you for furthur procedure\n";
        
        person::welcome();
         
        break;
        
    case 2 :
        
        cout<<"\nWe understand that you may want to invest in customized or focused offerings like Portfolio Management Services or PMSs, Private Equity, Real Estate Funds, Structured Products, etc. along with or apart from the standardized solutions offered by mutual funds for better diversification. Our investment specialists can refer you with range of such focused products to generate superior risk adjusted returns on your investments from various Asset Management Companies.\n";

        person::login();
        
         cout<<"We have recorded your contact details , Thanks for showing interest in our mutual fund policy ! we will contact you for furthur procedure\n";
        
        person::welcome();
         
        break;
    default:
        cout<<"PLEASE CHOOSE AN APPROPRIATE OPTION"<<endl;
        goto repeat;

        break;

    }






      

}
