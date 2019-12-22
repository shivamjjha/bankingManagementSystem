using namespace std;

/*
    Credit Cards
    Debit Cards
    Forex / Prepaid Cards
    Credit Card Services
    Debit Card Services
    Report Loss Card
    Generate PIN for all Cards
    Gift Card's Balance Enquiry
*/

class card: public person{
    float annualIncome;

    public:
        card();
        void cardMenu();
        void debitCard();
        void creditCard();
        void makeDebitCard(int type, char custChoice);
        void makeCreditCard(int type, char CustChoice);

};
