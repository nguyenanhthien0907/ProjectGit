#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C'; // single character %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.143423453; // 4 bytes (32bits or precision) %f
    double d = 3.137476374563456375; // 8 bytes %lf

    bool e = true; // 1 byte (true 1 or false 0) %d 

    char f = 100; // 1
    printf("%f",c);
    printf("%lf",d);
}
