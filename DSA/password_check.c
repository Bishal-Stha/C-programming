/*chatGPT answer. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strongPasswordChecker(char *password) {
    int len = strlen(password);
    int hasLower = 0, hasUpper = 0, hasDigit = 0;
    int replace = 0; // count of replacements needed for repeating characters
    int oneMod = 0, twoMod = 0; // for deletions
    int i = 0;

    // Check character types and repeated sequences
    while (i < len) {
        if (islower(password[i])) hasLower = 1;
        if (isupper(password[i])) hasUpper = 1;
        if (isdigit(password[i])) hasDigit = 1;

        int j = i;
        while (i < len && password[i] == password[j]) i++;

        int repeatLen = i - j;
        if (repeatLen >= 3) {
            replace += repeatLen / 3;
            if (repeatLen % 3 == 0) oneMod++;
            else if (repeatLen % 3 == 1) twoMod++;
        }
    }

    int missingTypes = 3 - (hasLower + hasUpper + hasDigit);

    if (len < 6) {
        return (missingTypes > (6 - len)) ? missingTypes : (6 - len);
    } else if (len <= 20) {
        return (replace > missingTypes) ? replace : missingTypes;
    } else {
        int over = len - 20;
        int deletions = over;

        // Try to reduce replacements by deleting smartly
        if (over > 0) {
            int use = (over < oneMod) ? over : oneMod;
            replace -= use;
            over -= use;

            use = (over < 2 * twoMod) ? over : 2 * twoMod;
            replace -= use / 2;
            over -= use;

            replace -= over / 3;
        }

        return deletions + ((replace > missingTypes) ? replace : missingTypes);
    }
}

int main() {
    char password[105];
    printf("Enter password: ");
    scanf("%s", password);

    int steps = strongPasswordChecker(password);
    if (steps == 0) {
        printf("Your password is strong.\n");
    } else {
        printf("Minimum steps to make password strong: %d\n", steps);
    }

    return 0;
}