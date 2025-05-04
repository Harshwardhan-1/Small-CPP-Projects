//rock paper scissor game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"welcome to rock paper scissor game:"<<endl;
    cout<<"you will play against the computer:"<<endl;
    cout<<"rock beats scissor,scissor beats paper,paper beats rock:"<<endl;
    srand(time(0));
    char playAgain= 'y';
      int round=0;
     int userScore=0,computerScore=0,tieScore=0;
    while(playAgain=='y' || playAgain== 'Y'){
        int userChoice,computerChoice;
        cout<<"choose between 1 and 3:"<<endl;
        cout<<"rock 1:"<<endl;
        cout<<"paper 2:"<<endl;
        cout<<"scissor 3:"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>userChoice;
    
    while (userChoice<1 || userChoice>3){
        cout<<"Invalid no choose between 1 and 3:"<<endl;   
        cin>>userChoice;
    }
    computerChoice=rand() % 3+1;
    cout<<"you choose:"<<endl;
    if(userChoice == 1)cout<<"Rock:"<<endl;
    else if(userChoice == 2)cout<<"paper:"<<endl;
    else cout<<"scissor:"<<endl;
    
    cout<<"computer choose:"<<endl;
    if(computerChoice == 1)cout<<"Rock:"<<endl;
    else if(computerChoice == 2)cout<<"paper:"<<endl;
    else cout<<"scissor:"<<endl;
    
    if(userChoice == computerChoice){
        cout<<"its a tie:"<<endl;
        tieScore++;
    }
    else if((userChoice == 1 && computerChoice ==3)||
            (userChoice ==2 && computerChoice ==1) ||
            (userChoice ==3 && computerChoice ==2)){
                cout<<"you win:"<<endl;
                userScore++;
            }
            else{
            cout<<"computer win:"<<endl;
             computerScore++;    
        }
        
            cout<<"do you want to play again (y/n):"<<endl;
            cin>>playAgain;
            while(playAgain!= 'y' && playAgain!='n' &&
            playAgain!='Y' && playAgain!= 'N' 
            )
            {
                cout<<"Invalid option:"<<endl;
                cout<<"please enter 'y' to play and 'n' to exit:"<<endl;
                cin>>playAgain;
            }
}

cout<<"      :"<<endl;
cout<<"game summary:"<<endl;
cout<<"      :"<<endl;
cout<<"total rounds played:"<<round<<endl;
cout<<"you wins:"<<userScore<<endl;
cout<<"computer win:"<<computerScore<<endl;
cout<<"its a tie:"<<tieScore<<endl;
if(userScore > computerScore){
    cout<<"Congratulation! you beat the computer:"<<endl;
}
else if(computerScore > userScore ){
    cout<<"computer won! Better luck next time:"<<endl;
}
else{
    cout<<"it's a draw:"<<endl;
}
cout<<"Thanku for playing rock paper scissor game:"<<endl;
return 0;
}