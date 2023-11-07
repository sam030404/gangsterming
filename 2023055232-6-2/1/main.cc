#include <iostream>
#include <string>
#include "accounts.h"


using namespace std;


int main()
{
    AccountManager myBank;
    char input;
    int len =-1, user, to_user, amount;
    while(1)
    {
        cout << "Job?" << "\n";
        cin >> input;
        if(input != 'N' && len < 0)
        {
            cin >> user >> amount;
            cout << "Account does not exist" << "\n";
        }
        else if(input == 'N') 
        {
            len++;
            
            if(len>9)
            {
                cout << "Maximum number of accounts is 10 \n" << "\n";
                continue;
            }
            cout << "Account for user " << len << " registered" << "\n";
            myBank.check(len);
        }
        else if(input == 'D')
        {
            cin >> user >> amount;
            myBank.deposit(user, amount);
            myBank.check(user);
        }
        else if(input == 'W')
        {
            cin >> user >> amount; 
            myBank.withdraw(user, amount);
            myBank.check(user);
        }
        else if(input == 'T')
        {
            cin >> user >> to_user >> amount;
            if(user > len || to_user > len)
            {
                cout << "Account does not exist\n" << "\n";
                continue;
            }
            else
            {
                myBank.transfer(user, to_user, amount);
                if(user > to_user)
                {
                    myBank.check(to_user);
                    myBank.check(user);
                }
                else
                {
                    myBank.check(user);
                    myBank.check(to_user);
                }
            }
        }
        else if(input == 'Q') break;
        cout << "\n";
    }
    return 0;
}