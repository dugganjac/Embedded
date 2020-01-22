#include <iostream>
using namespace std;

void AddElement();
void Initialize();
void Finalize();

double *v;
int count;
int size;

int main() {

    Initialize();
    
    int choice;
    bool active = true;
    bool flag = true;
    
    while (active){
    
      while (flag) {

        cout << "Main menu:" << endl << "1. Print the array" << endl << "2. Append element at the end" << endl
          << "3. Remove last element" << endl << "4. Insert one element" << endl << "5. Exit" << endl << "Select an option: ";
        cin >> choice;
        cout << endl;
      
        switch (choice) {

                  case 1 : {
                      cout << "You selected 'Print the array'" << endl << endl;
                      // flag = false;
                  }
                  break;
  
                  case 2 : {
                      cout << "You selected 'Append element at the end'" << endl << endl;
                      // flag = false;
                  }
                  break;
                
                  case 3 : {
                      cout << "You selected 'Remove last element'" << endl << endl;
                      // flag = false;
                  }
                  break;
                
                  case 4 : {
                      cout << "You selected 'Insert one element'" << endl << endl;
                      // flag = false;
                  }
                  break;
                  
                  case 5 : {
                      cout << "You selected 'Exit'" << endl << endl;
                      flag = false;
                      active = false;
                  }
                  break;

                  default : {
                      cout << "Error: input number must be between 1 and 5." << endl << endl;
                  }
                  break;
          }
    
      }
    
    }
    
    cout << "Closing program..." << endl;
    
    Finalize();
    
}

void AddElement(){

     double input;
     
     cout << "Enter the new element: ";
     cin >> input;
     cout << endl;
     
     if (size !> count) {
     
        Grow();
     
     }
     
     *(v+count) = input;
     
     count++;

}

void Initialize(){

  count = 0;
  size = 2;
  double *v = new double[size];

}

void Finalize(){

  delete[] v;

}