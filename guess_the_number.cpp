//NUMBER GUESSING GAME
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
class number{
    int num,high,low,count=0,number1;
    bool hasguessed = false;
    
public:
   
    number(){
        cout<<"--------WELCOME TO NUMBER GUESSING GAME------- "<<endl;
        cout<<"Enter the range of the game "<<endl;
        
        cout<<"Enter lower bound"<<endl;
        cin>>low;
        cout<<"enter upper bound"<<endl;
        cin>>high;
        
    }
    int generate()
    {   srand(time(0));
        number1 = rand() % (high - low +1)+low ;
    }
    int game(){
    while(hasguessed ==false)
    {  cout<<"Guess the number"<<endl;
        cin>>num;
        count++;
        if(num>number1)
        {
            cout<<"guess is high ,try again!!"<<endl;
        }
        else if(num < number1)
        {
            cout<<"guess is low , try again!!"<<endl;
        }
        else
        {
            cout<<"Congratulations you guessed correctly"<<endl;
            cout<<"number of attempt : "<< count << endl;
            hasguessed = true;
        }
    }}
};

int main()
{
    number obj1;
    obj1.generate();
    obj1.game();
    return 0;
}
