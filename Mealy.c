#include <stdio.h>

typedef enum {S0, S1, S2} State;

int main() {
    State current = S0;
    char input[] = "110101";  // Example input stream
    int i;

    printf("Mealy Machine Output:\n");
    for (i = 0; input[i] != '\0'; i++) {
        char bit = input[i];
        switch (current) {
            case S0:
                if (bit == '1') current = S1;
                else current = S0;
                break;
            case S1:
                if (bit == '0') current = S2;
                else current = S1;
                break;
            case S2:
                if (bit == '1') {
                    printf("Sequence detected at index %d\n", i);
                    current = S1; // Overlap allowed
                } else current = S0;
                break;
        }
    }
    return 0;
}
