#include<iostream>
using namespace std;

int main(){
    int a = 55;
    double d = 3.14;
    char c = 'A';

    // 🔹 Implicit Typecasting
    double result = a + d;  // int → double automatically

    // 🔹 Explicit Typecasting (C-style)
    float f1 = (float)a;

    // 🔹 Explicit Typecasting (C++ style)
    float f2 = static_cast<float>(a);

    // 🔹 Char to int (ASCII value)
    int ascii = (int)c;

    cout << "Implicit (int + double): " << result << endl;
    cout << "Explicit (C-style): " << f1 << endl;
    cout << "Explicit (C++ style): " << f2 << endl;
    cout << "Char to ASCII: " << ascii << endl;

    return 0;
}