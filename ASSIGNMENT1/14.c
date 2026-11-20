#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Character is a Capital Letter", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Character is a Small Case Letter", ch);
    }
    else if (ch >= '0' && ch <= '9'){
        printf("Character is a Digit", ch);
    }  
    else{
        printf("Character is a Special Symbol", ch);
    }
    return 0;
}