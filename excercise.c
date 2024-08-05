#include <stdio.h>
 int main(){
    
    int n;
    int s=1;
    printf("Input n: ");
    scanf("%d", &n);
    
    for (int i=1;i<=n; i++){
        s=s*i;
    }
    printf("Gia tri cua s la: %d", s);
    return 0;

 }