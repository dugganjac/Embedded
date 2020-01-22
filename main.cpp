#include <iostream>
# include <string>
using namespace std;

int Grow(int new_capacity);
double *nv = new double[new_capacity];

    for(i = 0; i <= size; i++) {
    nv[i] = v[i]



}

delete[] v;
v = nv;

cout<< "Vector grown" << "\n";
cout<< "Previous capacity: " << capacity << " elements" << "\n";
cout << "New capacity: " << newcapacity << " elements" << "\n";

capacity = new_capacity;


void RemoveElement();
if size == 0; {
cout<<"this vector is empty, select a valid option"<<endl;
}

else {
size = size -1;
if(size <= 0.3 * capacity) {

Shrink();



}

}

void InsertElement();

int index; int element;

do {

cout<<"Enter the index of new element:" <<endl;
cin >> index;

if index > size {

cout<<"this is greater than the size, please select another option"<<endl;


};


}


while(index > size);

cout <<"Enter the new element:"<<endl;
cin >>element;

if(size == capacity){
Grow(2*capacity);
}

for(int i = size; i > 0; i--) {
if (i >= index) {
v[i+1] = v[i];
if (i == index) {
v[i] = element;
}
}
}
size = size + 1;

}










