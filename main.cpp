//Cy Elliott, EECE 2160, Prelab 1. 01/22/2020
#include <iostream>
#include <string>
using namespace std;

int Initialize(int select);
int Finalize(int string);

int main () {    //Driver code.

    int choice;
    do {
        cout
                << "\n\nMain menu:\n\n1. Print the array\n2. Append element at the end\n3. Remove the last element\n4. Insert one element\n5. Exit\n\nSelect an option:";
        cin >> choice;
        Initialize(choice);
    } while (choice != 5);
    if (choice == 5) {
        cout << "\nYou selected 'Exit'";
        return 0;


    }
}

int Initialize(int select){
    int num;

    switch (select){

        case 1:
            num = 1;
            break;
        case 2:
            num = 2;
            break;
        case 3:
            num = 3;
            break;
        case 4:
            num = 4;
            break;
        case 5:
            num = 5;

    }
    Finalize(num);
}

int Finalize(int string){ // function to send out message based on user input, (returns string)
    switch (string){
        case 1:
            cout<<"\nYou selected 'Print an array'\n\n";
            break;
        case 2:
            cout<<"\nYou selected 'Append element at the end'";
            break;
        case 3:
            cout<<"\nYou selected 'Remove the last element'";
            break;
        case 4:
            cout<<"\nYou selected 'Insert one element'";
            break;
        case 5:
            cout<<"Exited Program";
            break;
        default:
            cout<<"\nYou have entered an invalid option. Please enter a valid option!\n"<<endl;
            break;
    }
    return 0;


}



