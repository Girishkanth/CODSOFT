/*
Number Guessing Game:
Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/

//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int randomNum=1+rand()%100;
    int guess;
    bool Guess=false;
    cout<<"Welcome to Number Guessing Game!"<<endl;
    cout<<"Please guess a number between 1 and 100: ";
    cin>>guess;
    while(!Guess)
    {
        if(guess < randomNum)
        {
            cout<<"Your guess is too low. Try again: "<<endl;
            cin>>guess;
        }
        else if(guess > randomNum)
        {
            cout<<"Your guess is too high. Try again: "<<endl;
            cin>>guess;
        }
        else
        {
            Guess=true;
        }
    }
    cout<<"Congratulations! You guessed the correct number: "<<randomNum<<endl;
    return 0;
}
