#include <iostream>
#include <cstdlib>
using namespace std;

class GuessTheNumber{
    private: 
    int computerGeneratedNumber;
    int userGuessedNumber;
    int attempt=1;
    
    public:
    void generateRandomNumber(){
        srand(101);
        computerGeneratedNumber=rand()%101;
    }
    
    void startGame(){
        while(true){
        cout<<"Guess the number: ";
        cin>>userGuessedNumber;
        cout<<"Attempt: "<<attempt<<endl;
        if(userGuessedNumber>computerGeneratedNumber){
            cout<<"Guessed number is greater than computer generated number."<<endl<<endl;
            attempt++;
        }
        
        else if(userGuessedNumber<computerGeneratedNumber){
            cout<<"Guessed number is smaller than computer generated number."<<endl<<endl;
            attempt++;
        }
        
        
        else if(userGuessedNumber==computerGeneratedNumber){
            cout<<"Congratulations! You won the game in "<<attempt <<" attempts!"<<endl<<endl;
            break;
        }
        }
    }
};

int main(){
    GuessTheNumber game;
    game.generateRandomNumber();
    game.startGame();
    return 0;
}
