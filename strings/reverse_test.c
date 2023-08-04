#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Your input is: %s\n", str);

    int size = 0;
    int k =0;
    while (str[k] != '\0'){
        size++;
        k++;
    }
    printf("the size is %d\n",size);

    // Reverse the string
    for (int i = 0; i < size; i++) {
        char temp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}


