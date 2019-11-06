#include <iostream>
using namespace std;

string drinks[5] = { "Coke", "Water", "Sprite", "Meso mix", "Fanta"}; 
int user_choice;   
int i = 0;
int main()
{
    cout << "Drinks";
    while(i<=4)
    {
        cout << "\n" << drinks[i] << ": " << i << "\n";
        i++;
    }
    cout << "Enter drink number: \n";
    cin >> user_choice;
    
    if(user_choice > 4)
    {
        cout << "Not an option, you're biased, goodbye \n";
    }else 
    {
        cout << drinks[user_choice] << "\n";
    }
     
    
}