//generate number between ranges of integers
//easy medium hard modes
//get user input guess
//give points for streaks
//save player profiles and history
//give a ui (optional)
    
#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;

int generateRandomNumber(){
    srand(static_cast<unsigned int>(time(0)));
    return rand()%10;
}
int guessNummber(int random, int guess){
    int r=random;
    int g=guess;
    int points=0;
    if (r==g){
        cout<<"correct!"<<endl;
        points+5;
    }
    else if(abs(r-g)<=2){
        cout<<"So close!"<<endl;
        points+1;
    }
    else cout<<"Boo!"<<endl;
    return points;
}
int main(){
    int points=0;
    int round=0;
    while(round<10){
        int guess=999;
        int rand=generateRandomNumber();
        cout<<"guess between 0 and 9"<<endl;
        cin>>guess;
        points+=guessNummber(rand,guess);
        round++;
    };
    
    return 0;
}
/* 
:::Rounds:::
have 10 rounds

:::Points:::

    if guess has a diff >2 ==> 0 points
    if guess has a diff <=2 ==> 1 points
    if guess has a diff =0 ==>  5 points

total points out of 100
if total > 70 ==> Cyberkinetic
if total < 50 ==> normie!
if total >50 <70 ==> you are getting there
*/