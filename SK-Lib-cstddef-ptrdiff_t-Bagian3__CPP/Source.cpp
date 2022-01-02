#include <iostream>
#include <cstddef>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    //creating an array of size 10
    int N = 10;
    int* Arr = new int[N];

    //populating the elements of array
    //using ptrdiff_t type
    int* end = Arr + N;

    for (ptrdiff_t i = N; i > 0; i--) {
        *(end - i) = i;
    }
        
    //displaying the elements of array
    //using ptrdiff_t type
    cout << "Arr contains: ";

    for (ptrdiff_t i = N; i > 0; i--) {
        cout << *(end - i) << " ";
    }
        
    _getch();
    return 0;
}

