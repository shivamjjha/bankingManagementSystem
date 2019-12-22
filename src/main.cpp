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

void start(){
  cout << "Welcome to GURU NANAK DEV BANK\n";
         cout<<"\t\t\t≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕≕\n\n\n\n";
  person p;
   p.welcome();  
}

int main()
{  
   start();
   return 0;
}