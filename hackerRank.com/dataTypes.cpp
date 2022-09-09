#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int myInt; long myLong; char myChar; float myFloat; double myDouble;  
    scanf("%d %ld %c %f %lf", &myInt, &myLong, &myChar, &myFloat, &myDouble);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", myInt, myLong, myChar, myFloat, myDouble);
    return 0;
}
