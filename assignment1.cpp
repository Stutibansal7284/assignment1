#include <iostream>
using namespace std;
int enteredID, enteredPW, ID, PW;
float deposit=0, withdraw=0;
char choice1, choice2;

void printIntroMenu(){
        cout<<"Please select an option from the menu below:"<<endl<<"l -> Login"<<endl<<"c -> Create New Account"<<endl<<"q -> Quit"<<endl<<endl<<">";
        cin>>choice1;
}
void printMainMenu(){
    cout<<"d -> Deposit Money"<<endl<<"w -> Withdraw Money"<<endl<<"r -> Request Balance"<<endl<<"q -> Quit"<<endl<<endl<<">";
    cin>>choice2;
}
void login(){
    cout<<"Please enter your user id: ";
    cin>>enteredID;
    cout<<"Please enter your password: ";
    cin>>enteredPW;
}
void createAccount(){
    cout<<"Please enter your user name: ";
cin>>ID;
cout<<"Please enter your password: ";
cin>>PW;
cout<<"Thank You! Your account has been created!"<<endl<<endl;
printIntroMenu();
}

void start(){
cout<<"Hi! Welcome to Mr. Zamar's ATM machine!"<<endl<<endl;
   printIntroMenu();
   
    while(choice1 != 'q'){
    switch(choice1){
        case 'l':
        login();
        if(ID!=enteredID || PW!=enteredPW){
            cout<<"LOGIN FAILED!"<<endl<<endl;
        printIntroMenu();
        }
        else if(ID==enteredID && PW==enteredPW){
            cout<<"Access Granted!"<<endl<<endl;
            printMainMenu();
            while(choice2 != 'q'){
            switch(choice2){
                case 'd':
                cout<<"Amount of deposit: ₹";
                cin>>deposit;
                cout<<endl;
                printMainMenu();
                break;
                case 'w':
                cout<<"Amount of withdrawal: ₹";
                cin>>withdraw;
                cout<<endl;
                printMainMenu();
                break;
                case 'r':
                cout<<"Your balance is ₹"<<deposit-withdraw<<endl;
                printMainMenu();
                break;
                case 'q':
                printIntroMenu();
            }
            }
        
         
        }
            
        
        break;
        case 'c':
        createAccount();
        break;
}
}

cout<<"Thanks for stopping bye!";
}


int main(){
    start();
    return 0;
}