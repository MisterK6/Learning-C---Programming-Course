# include <iostream>

using namespace std;

int main(){
    int amount {};
    cout << "Enter an amount in cents: " << endl;
    cin >> amount;

    // Solução SEM UTILIZAR O OPERADOR %

    // int dollar = amount/100;
    // amount -= dollar * 100;

    // int quarter = amount/25;
    // amount -= quarter * 25;

    // int dime = amount/10;
    // amount -= dime * 10;

    // int nickels = amount/5;
    // amount -= nickels * 5;

    // int pennies = amount;

    // Solução UTILIZANDO O OPERADOR % - SOLUÇÃO 1

    // int dollar = (amount - (amount % 100))/100;
    // amount -= dollar * 100;

    // int quarter = (amount - (amount % 25))/25;
    // amount -= quarter *25;

    // int dime = (amount - (amount % 10))/10;
    // amount -= dime * 10;

    // int nickels = (amount - (amount % 5))/5;
    // amount -= nickels * 5;

    // int pennies = amount;

    //Solução UTILIZANDO O OPERADOR % - SOLUÇÃO 2

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int dollar = amount/dollar_value;
    int balance = amount % dollar_value;

    int quarter = balance / quarter_value;
    balance %= quarter_value;

    int dime = balance / dime_value;
    balance %= dime_value;

    int nickels = balance / nickel_value;
    balance %= nickel_value;

    int pennies = balance;

    cout << "You can provide this change as follows:" << endl << "dollars: " << dollar << endl << "quarters: " << quarter << endl << "dimes: " << dime << endl << "nickels: " << nickels << endl << "pennies: " << pennies << endl;

    return 0;

}