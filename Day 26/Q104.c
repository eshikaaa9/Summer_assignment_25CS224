#include <stdio.h>

int main() {
    char questions[3][100] = {
        "What is the capital of India?",
        "What is 5 + 3?",
        "Which planet is closest to sun?"
    };
    
    char options[3][4][50] = {
        {"Delhi", "Mumbai", "Bangalore", "Chennai"},
        {"8", "9", "6", "7"},
        {"Venus", "Mercury", "Earth", "Mars"}
    };
    
    int answers[3] = {1, 1, 2};
    
    int score = 0;
    
    printf("Quiz Application\n\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Question %d: %s\n", i + 1, questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, options[i][j]);
        }
        
        int choice;
        printf("Your answer: ");
        scanf("%d", &choice);
        
        if (choice - 1 == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Incorrect! Correct answer is: %s\n\n", options[i][answers[i]]);
        }
    }
    
    printf("Your final score: %d out of 3\n", score);
    
    return 0;
}
