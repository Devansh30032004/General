#include <stdio.h>

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void sortStrings(char **strings, int numStrings) {
    int i, j;
    
    for (i = 0; i < numStrings - 1; i++) {
        for (j = 0; j < numStrings - i - 1; j++) {
            int k = 0;
            
            while (strings[j][k] == strings[j + 1][k]) {
                k++;
            }
            
            if (strings[j][k] > strings[j + 1][k]) {
                swap(&strings[j], &strings[j + 1]);
            }
        }
    }
}

int main() {
    char *strings[] = {"banana", "cherry", "date", "apple", "fig"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);
    int i;
    
    printf("Before sorting:\n");
    for (i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }
    
    sortStrings(strings, numStrings);
    
    printf("\nAfter sorting:\n");
    for (i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}
