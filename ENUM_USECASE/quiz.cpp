#include<stdio.h>

typedef enum possibleOptions{
    A,B,C,D
}opt;

void complementGenerator(int n, int score){
    (float)n, (float)score;
    (score >= 0.7*n) ? printf("Wow ! you are a genius."): printf("You can do better than this.");
}

int main() {
    int n=7, score=0, user_answer;
     // Array of 20 quiz questions
     char questions[n][100] = {
        "what is the speed of light?",
        "what is the value PI give 3 value upto 3 decimal points?",
        "What is the chemical symbol for water?",
        "Who is known as the father of computers?",
        "What planet is known as the Red Planet?",
        "What does CPU stand for?",
        "What is the fastest land animal?"  
    };

    char options[n][4][50] = {
        {"3*10^8 m/s","3*10^5 m/s","3*10^10 m/s", "3*10-8 m/s"},
        {"3.146","3.149","3.141","3.140"},
        {"HO2","NaCl","H2O","H2O2"},
        {"Charles Xavier","Charles Darwin","Charlie Chaplin","Charles Babbage"},
        {"Earth","Mars","Venus","Mercury"},
        {"Central Preprocessing Unit","Central Processing Unit","Central Process Unit","Central physical Unit"},
        {"Cheetah","Lion","Tiger","Deer"}
    };

    // Array of correct answers
    int answers[n] = {A,C,C,D,B,B,A};
    
    for(int i=0; i<n; i++){
        printf("Question No %d\n",i+1);
        printf("%s\n",questions[i]);
        printf("1. %s\t 2. %s\t 3. %s\t 4. %s\n",options[i][0],options[i][1],options[i][2],options[i][3]);
        scanf("%d",&user_answer);
        user_answer--;

        if(answers[i] == user_answer){
            score++;
            printf("Correct\n");
        }
        else {
            printf("Incorrect\n");
        }
    }

    printf("You scored %d out of %d\n",score,n);
    complementGenerator(n,score);
}