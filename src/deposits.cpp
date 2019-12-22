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


 deposits::deposits(){

        cout<<"\n-------WELCOME TO DEPOSIT SECTION---------\n";


        cout<<"\nPRESS 1 FOR FIXED-DEPOSIT(FD)\nPRESS 2 FOR RECURRING-DEPOSIT\n";
        cin>>dep_choose;
        //cin.ignore();
        
   repeat:
        switch (dep_choose)
        {
       /*___________________________________________________________________________ FD FUNCTION____________________________________________________________________________________________________*/

        case 1:

        cout<< "Take control of your savings by investing in Fixed Deposit. Enjoy Fixed Deposit interest rates as high as 6.60%* with us. Happy Investing! \n" <<endl;
        cout<<"\nWhat are the benefits of Fixed Deposits?\nFixed Deposit possesses a number of advantages over any other investment schemes that tags it as one of the safest investment options to opt for. When you avail a Fixed Deposit, you actually bag a number of perks such as:"<<endl;
        
         cout<<"\n\npress 1 for applying now or any button to exit\n\n"<<endl;
         cin>>dep_choose;

         if(dep_choose==1){

            person:login();

         cout<<endl;
         cout<<"Tenure\t\t\t  Interest Rates for Regular Deposit\t\tInterest Rates For Senior Citizen\n\n";
         cout<<"7 days to 45 days \t\t\t4.50%\t\t\t\t\t5.00%"<<endl;
         cout<<"46 days to 179 days\t\t\t5.50%\t\t\t\t\t6.00%"<<endl;
         cout<<"180 days to 210 days\t\t\t5.80%\t\t\t\t\t6.30%"<<endl;
         cout<<"211 days to 364 days\t\t\t5.80%\t\t\t\t\t6.30%"<<endl;
        
         dep_choose=0;

         cout<<"\nPLEASE ENTER THE PLAN NUMBER YOU WANT TO CHOOSE \n";
         cin>>dep_choose;

         cout<<"\nPLEASE ENTER THE AMOUNT YOU WANT TO INVEST!!\n";
         cin>>dep_amt;

         cout<<"FD of ₹"<<dep_amt<<" has been created successfully !\n";
         
         cout<<"\nplease collect hard copy of your FD from your bank branch manager\n";

         //cout<<"press enter to Quit!\n";
         //cin>>dep_choose;
        

         } 
        

         

        person::welcome();


            break;
        
 
 /*___________________________________________________________________________ RD FUNCTION____________________________________________________________________________________________________*/
        case 2:
              cout<<"\n\nA small investment every month can get you one step closer to your dreams\n\n"<<endl;
              
              cout<<"BENIFITS OF RD : \n\n";
              cout<<"▶ You need to deposit a small amount of money every month or every quarter. The minimum amount can be as low as Rs. 500\n";
              cout<<"▶ Based on your budget and investment goal, your money will be invested in debt or equity funds. In the last 10 years, Equity Linked Mutual Funds have \n  performed well in the market with a return of 12-22%. This is significantly higher than RD interest rates\n";
              cout<<"▶ There is no withdrawal penalty when you withdraw money from your SIP account. This means that SIPs have higher liquidity when compared to RD accounts which penalize users for premature withdrawal\n";
              cout<<"▶ Returns from SIPs which invest in Equity Linked Mutual Funds (ELSS) are exempt from tax. The gains from an RD is taxable.\n";

             person::login();
        
             cout<<"SOME IMPORTANT GUIDLINES : \n";
             cout<<"▶The minimum amount of monthly installment is Rs. 100.\n\n▶The amount of installment and the number of installment cannot be changed after opening the account.\n\n▶Interest will be applied on premature withdrawal of RD at 1.00 per cent below the rate applicable for the period the deposit has remained with the bank.\n\n▶Interest on the deposit ranges from 6.00 per cent to 6.50 per cent.\n\n";

             cout<<"\nPLEASE ENTER THE AMOUNT YOU WANT TO INVEST!!\n";
             cin>>dep_amt;

             cout<<"please enter the time duration for RD in days\n";
             cin>>dep_time;

             cout<<"FD of ₹"<<dep_amt<<" has been created successfully !\n";
             cout<<"\nplease collect hard copy of your RD from your bank branch manager\n";
     
             cout<<"press enter to Quit!\n";
             cin.ignore();

             
            
            break;      
       
       default:

            dep_choose = person::check(1,2,dep_choose);
            goto repeat; //control shifts to start of switch;
            }
    
                         }//end_of_ctor;

     
