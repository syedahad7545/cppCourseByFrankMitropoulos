
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {


    cout<<"How many small rooms would you like cleaned: ";
    int noSmallRooms{0};
    cin>>noSmallRooms;

    cout<<"How many large rooms would you like cleaned: ";
    int noLargeRooms{0};
    cin>>noLargeRooms;

    double const smallRoomPrice {25};
    double const largeRoomPrice {35};
    double const tax{0.06};
    int const estimateDays{30};

    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"\nNumber of small rooms: "<<noSmallRooms<<endl;
    cout<<"Number of large rooms: "<<noLargeRooms<<endl;
    cout<<"Price per small room: $"<<25<<endl;
    cout<<"Price per large room: $"<<35<<endl;

    double cost = (noLargeRooms*largeRoomPrice) + (noSmallRooms*smallRoomPrice);
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<cost*tax<<endl;
    cout<<"============================================"<<endl;

    cout<<"Total estimate: $"<<cost+(cost*tax)<<endl;
    cout<<"This estimate is valid for "<<estimateDays<<endl;

    cout << endl;
    return 0;
}
