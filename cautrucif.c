#include <stdio.h>
 int main(){

    int a;
    printf("Hay nhap gia tri a: \n");
    scanf("%d", &a);

    if (a>0) {
        printf("%d la so duong \n", a);
    }
    else if (a<0){
        printf("%d la so am \n", a);
    }
    else if (a==0){
        printf("%d la so khong \n", a);
    }
    return 0;
 }