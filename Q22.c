#include <stdio.h>
#include <string.h>

int main() {
    char word[25];
    scanf("%s", word);

    int x = 0, y = 0;

    // Count number of z and o
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'z')
            x++;
        else if (word[i] == 'o')
            y++;
    }

    // Check the condition
    if (2 * x == y)
        printf("Yes");
    else
        printf("No");

    return 0;
}