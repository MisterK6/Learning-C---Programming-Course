#include <iostream>

using namespace std;

int main(){
    cout << "====================================================" << endl;
    cout << "Frank\'s Carpet Cleaning Service" << endl;
    cout << "====================================================" << endl;

    cout << "Charges:" << endl;
    cout << "\t $25 per small room"<< endl;
    cout << "\t $35 per large room" << endl;
    cout << "Sales tax rate is 6%" << endl;
    cout << "Estimates are valid for 30 days"<< endl;
    cout << "===================================================" << endl;

    cout << "===================================================" << endl;
    cout << "Estimate for carpet cleaning service:" << endl;

    cout << "Enter the number of small rooms to be cleaned:";
    short int small_room_number;
    cin >> small_room_number;

    cout << "Enter the number of large rooms to be cleaned:";
    short int large_room_number;
    cin >> large_room_number;

    //Processing the input values and calculating the total estimate:
    const float small_room_price = 25.00;
    const float large_room_price = 35.00;

    float cost = (small_room_number*small_room_price) + (large_room_number*large_room_price);

    float tax = 0.06*cost;

    float total_estimate = cost + tax;

    cout << "====================================================" << endl;

    cout << "Price for small rooms: $" << small_room_number*small_room_price << endl;
    cout << "Price for large rooms: $" << large_room_number*large_room_price << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "====================================================" << endl;

    cout << "Total Estimate: $" << total_estimate << endl;
    cout << "This Estimate is Valid for 30 days";    

    return 0;
}