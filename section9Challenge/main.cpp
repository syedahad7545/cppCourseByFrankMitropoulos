#include <iostream>
#include <vector>
using namespace::std;

int main() {
    vector<int> vec{};

    char Selection{};
    do {
        cout<<"\nP- Print numbers";
        cout<<"\nA- Add a number";
        cout<<"\nM- Display mean of numbers";
        cout<<"\nS- Display the smallest number";
        cout<<"\nL- Display the Largest number";
        cout<<"\nQ- Quit"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin >> Selection;

        if (Selection == 'P' || Selection == 'p'||Selection == 'Q' || Selection == 'q'||Selection == 'l' || Selection == 'L'||Selection == 's' || Selection == 'S'||Selection == 'M' || Selection == 'm'||Selection == 'A' || Selection == 'a') {
        if (Selection == 'p' || Selection == 'P') {
            if (!vec.empty()) {
                cout<<"[ ";
                for (auto i: vec) {
                    cout<<i<<" ";
                }
                cout<<"]"<<endl;
            }else {
                cout<<"[]- list is empty"<<endl;
            }
        }
            if (Selection == 'A' || Selection == 'a') {
                int number{};
                cout<<"Enter an integer to this list: ";
                cin>>number;
                vec.push_back(number);
                cout<<number<<" is added to the list"<<endl;
            }

            if (Selection == 'M' || Selection == 'm') {
                if (!vec.empty()) {
                    double sum{};
                    for (auto i: vec) {
                        sum += i;
                    }
                    cout<<"The mean is "<<sum/vec.size()<<endl;
                }else {
                    cout<<"Unable to calculate mean - no data"<<endl;
                }
            }
            if (Selection == 'S' || Selection == 's') {
                int smallest = vec[0];
                if (!vec.empty()) {
                    for (int i{1}; i < vec.size(); i++) {
                        if (vec[i] < smallest)
                            smallest = vec[i];
                    }
                    cout<<"The smallest number is "<<smallest<<endl;
                }else
                    cout<<"Unable to determine smallest number- list is empty"<<endl;

            }
            if (Selection == 'l' || Selection == 'L') {
                int largest = vec[0];
                if (!vec.empty()) {
                    for (int i{1}; i < vec.size(); i++) {
                        if (vec[i] > largest)
                            largest = vec[i];
                    }
                    cout<<"The largest number is "<<largest<<endl;
                }else
                    cout<<"Unable to determine largest number- list is empty";
            }
            if (Selection == 'Q' || Selection == 'q') {
                cout<<"GoodBye!!!";
            }
        }else
            cout<<"Wrong choice try again!!!"<<endl;

    }while ((Selection != 'Q') && Selection != 'q');

    return 0;
}