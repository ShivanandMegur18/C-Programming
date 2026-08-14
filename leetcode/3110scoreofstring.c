#include <stdio.h>
#include <stdlib.h>

int scoreOfString(char* s) {
    int score = 0;

    for(int i = 0; i<s[i+1] ; i++) {
        score += abs(s[i] - s[i+1]);
    }

    return score;
}

int main() {
    char s[0];
    scanf("%s", s);

    printf("%d\n", scoreOfString(s));

    return 0;
}