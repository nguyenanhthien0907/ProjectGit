#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[25]; //bytes

    printf("\n What's your name ?");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // write both the blankspace in your fullname
    name[strlen(name)-1]='\0';

    printf("\n How old are you?");
    scanf("%d", &age);

    printf("\nhello %s, how are you?", name);
    printf("\nYou are %d years old", age);
    
    return 0;
}