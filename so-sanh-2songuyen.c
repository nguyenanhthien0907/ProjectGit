#include <stdio.h>

int main(){
    int a;
    int b;
    printf("\nNhap so nguyen a: ");
    scanf("%d", &a);
    printf("\nNhap so nguyen b: ");
    scanf("%d",&b);
    int check = (a>b);
    printf("A co lon hon B hay ko ?: %d \n", check);
    check = (a<b);
    printf("A co nho hon B hay ko ?: %d \n", check);
    check = (a==b);
    printf("A co bang B hay ko?: %d \n", check);
    return 0;
}