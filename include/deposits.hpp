using namespace std;

/*
    Fixed Deposit
    Recurring Deposit
    Tax Saving Fixed Deposit
    Senior Citizen Fixed Deposit
    Sweep-In Facility
    Fixed Deposit Calculator
    Recurring Deposit Calculator
*/

class deposits : public person{

    public:
        //1 for deposit, 2 for withdraw
        void deposit_withdraw(string accNo, int option);
        deposits();

    protected:


    private:

    int dep_choose;
    double  dep_amt;
    int dep_time;
    string response;


};