#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int n;
    int guess;
    int att=0;
    srand(time(0));
    n=(rand()%50)+1;
    cout<<"***** NUMBER GUESSING GAME *****"<<endl;
    cout<<"Guess the number between 1 to 50"<<endl;
    do
    {
        cin>>guess;
        att++;
        if(guess>n)
        {
            cout<<"The Guess is too high!! Try again"<<endl;
        }
        else if(guess<n)
        {
            cout<<"The Guess is too low!! Try again"<<endl;
        }
        else
        {
            cout<<"You Guessed the correct number in "<<att<<" attempts!!";
        }
    }
    while(guess!=n);
    
    return 0;
}
