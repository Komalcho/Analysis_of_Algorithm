#include <stdio.h>
#include <string.h>
#define d 256
#define q 101
void rabinKarp(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);
    int p = 0, t = 0, h = 1;
    int i, j, found = 0;
    // Calculate h = pow(d, m-1) % q
    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;
    // Calculate initial hash values
    for (i = 0; i < m; i++) {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }
    // Search for pattern
    for (i = 0; i <= n - m; i++) {
        // If hash values match, compare characters
        if (p == t) {
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == m) {
                printf("Pattern found at position %d\n", i);
                found = 1;
            }
        }
        // Calculate hash for next window
        if (i < n - m) {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
            if (t < 0)
                t = t + q;
        }
    }
    if (!found)
        printf("Pattern not found in the text.\n");
}
int main() {
    char text[100], pattern[50];
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    rabinKarp(text, pattern);
    return 0;
}
