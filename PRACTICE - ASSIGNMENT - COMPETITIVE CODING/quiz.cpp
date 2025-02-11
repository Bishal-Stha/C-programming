/*
Date: 2081-08-11
Author: Bishal Shrestha
Purpose: A Quiz app.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char answer[30], correctAns[30] = "C";
    int tryCounter = 1;

    while (tryCounter <= 2) {
        printf("Which Programming language is known as the mother of all languages? \nAnswer:\t");
        gets(answer); // Consider using fgets for better safety.

        if (strcmp(answer, correctAns) == 0) {
            printf("Correct, You did it.\n");
            break; // Exit loop on correct answer
        } else {
            if (tryCounter < 2) {
                printf("Incorrect, try again.\n");
            } else {
                printf("Incorrect, you've used all attempts. The correct answer is '%s'.\n", correctAns);
            }
        }

        tryCounter++; // Increment tryCounter after each attempt
    }

    return 0;
}


/*
//Recursive Approach.

#include<stdio.h>
#include<string.h>

// Function to handle the quiz logic
void quiz(int attempt, int maxAttempts, const char correctAns[]) {
    char answer[30];

    if (attempt > maxAttempts) {
        printf("Incorrect, you've used all attempts. The correct answer is '%s'.\n", correctAns);
        return;
    }

    printf("Which Programming language is known as the mother of all languages? \nAnswer:\t");
    gets(answer); // Consider using fgets for better safety.

    if (strcmp(answer, correctAns) == 0) {
        printf("Correct, You did it.\n");
        return; // Exit upon correct answer
    } else {
        printf("Incorrect, try again.\n");
        quiz(attempt + 1, maxAttempts, correctAns); // Recursive call for the next attempt
    }
}

int main() {
    const char correctAns[] = "C";
    int maxAttempts = 2;

    // Start the quiz with the first attempt
    quiz(1, maxAttempts, correctAns);

    return 0;
}

*/
