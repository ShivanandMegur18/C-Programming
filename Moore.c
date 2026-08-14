#include <stdio.h>

typedef enum {S0, S1, S2, S3} State;

int main() {
    State current = S0;
    char input[] = "110101";  // Example input stream
    int i;

    printf("Moore Machine Output:\n");
    for (i = 0; input[i] != '\0'; i++) {
        char bit = input[i];
        switch (current) {
            case S0:
                if (bit == '1') current = S1;
                break;
            case S1:
                if (bit == '0') current = S2;
                else if (bit == '1') current = S1;
                break;
            case S2:
                if (bit == '1') current = S3;
                else current = S0;
                break;
            case S3:
                printf("Sequence detected at index %d\n", i);
                if (bit == '1') current = S1;
                else current = S2;
                break;
        }
    }
    return 0;
}
