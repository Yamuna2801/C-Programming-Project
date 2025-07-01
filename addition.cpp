#include<iostream.h>
#include<conio.h>
// using namespace std;

// Overloaded functions
int add(int a, int b, int c) {
    return a + b + c;
}

float add(int a, int b) {
   return (a + b) * 1.0;
}

float add(float a, float b, float c) {
    return a + b + c;
}

int main() {
    int x = 2, y = 3, z = 5;

    cout << "Sum of Given Integers: " << add(x, y, z) << endl;
    cout << "Sum of Given Integers (as float): " << add(x, y) << endl;
    cout << "Sum of Given Floats: " << add(10.5f, 15.75f, 22.25f) << endl;
    getch();
    return 0;
}
