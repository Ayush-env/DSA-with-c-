#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the Marks obtained: ";
    cin >> marks;

    if(marks >= 90)
        cout << "A\n";

    else if(marks >= 80)
        cout << "B\n";
    else
        cout << "C\n";

    return 0;
}