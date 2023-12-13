#include <stdio.h>
#include <string.h>
void revers_it(char str[]){
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
int main(){
    char input[100]={"Guru Jambheshwar University of Science & Technology,Hisar"};
    revers_it(input);
    printf("The reversed string is: %s\n", input);
    return 0;
}