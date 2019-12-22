using namespace std;


class person {

    public:
        void welcome();
        void show_account(int);
        void after_user_choice(int);
        void create_acc();
        int login();
        void accounts();
        void deposit();
        void cards();
        void loans();
        void insurance();
        void investments();
        int check(int, int, int);
        // void viewPersonDetails();
        bool d;
        string retacno() const{
	        return acc_no;
        }

        string retPass() const{
	        return password;
        }

        string retCRN() const{
	        return crn;
        }
        
        ~person();
        
        
        int x=5;

    protected:
        void show_acc_info(const unsigned long int);


        string firstname , middlename , lastname , address  , pan_no , fname ;
        string password, mobile_no ;
        string acc_no, crn, balance= "100";
        string email_id;
        string line, word, temp;
        
    private:
        string usr ; 
        string pswd;


};