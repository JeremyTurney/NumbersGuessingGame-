/*
 Jeremy Turney
 023299492  
 April 16, 2015
 Assignment 8
 While loop guessing game with points
 */
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    
    int guess;
    int num = rand() % 10 + 1;
    char answer;
    int count =1;
    int points = 10;
    
    
    cout << "Let's play a guessing game! Enter (y/n)?" << endl;
    cin >> answer;
    
    if (toupper(answer) == 'Y')
    {
        while (toupper(answer) == 'Y')
        {
            cout << "You start with 10 points and lose 2 points for each wrong guess"<< endl;
            
            cout << endl;
            
            cout << "Guess a number between 1 and 10" << endl;
            cin >> guess;
            
            while (guess != num)
            {
                count++;
                
                cout << "Sorry wrong guess, try again" << endl;
                cin >> guess;
                
            }
            
            cout << "Your total points are " << points - (count * 2) << endl;
            
            cout << "It took " << count << " guesses to guess correctly." << endl;
            
            cout << endl;
            
            cout << "Would you like to play again (y/n)?" << endl;
            cin >> answer;
            
            count = 1;
            num = rand() % 10 + 1;
        }
    }
    cout << "I didn't want to play anymore anyways." <<endl ;
    return 0;
}
