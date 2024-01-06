#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int randomNumber,guessNumber;
    srand(time(0));
    randomNumber=rand()%100+1;
    cout<<"Enter the guess number"<<endl;
    cin>>guessNumber;
    while(guessNumber!=randomNumber)
    {
        if(guessNumber>randomNumber)
        {
            cout<<"Too high"<<endl;
            cout<<"Enter the guess number"<<endl;
            cin>>guessNumber;
        }
        else
        {
            cout<<"Too low"<<endl;;
            cout<<"Enter the guess number"<<endl;
            cin>>guessNumber;
        }

    }
    if(guessNumber==randomNumber)
    {
        cout<<"Your guess number is correct";
    }
}