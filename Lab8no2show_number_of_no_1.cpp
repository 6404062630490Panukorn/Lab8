#include <stdio.h>

int checkscore(char std[]);
int countQ1correct(char ans[][10], int students);
int hardestQuestion(char ans[][10], int students);

int main() {

    int i;

    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    for(i = 0; i < 8; i++) {
        printf("std %d => %d\n", (i+1), checkscore(ans[i]));
    }

    printf("Correct in Q1 = %d\n", countQ1correct(ans, 8));

    printf("Hardest Question = %d\n", hardestQuestion(ans, 8));

    return 0;
}

int checkscore(char std[]) {

    int i;
    int score = 0;

    char key[10] = {'D','B','D','C','C','D','A','E','A','D'};

    for(i = 0; i < 10; i++) {
        if(std[i] == key[i]) {
            score++;
        }
    }

    return score;
}

int countQ1correct(char ans[][10], int students) {

    int i;
    int count = 0;
    char key = 'D';

    for(i = 0; i < students; i++) {
        if(ans[i][0] == key) {
            count++;
        }
    }

    return count;
}

int hardestQuestion(char ans[][10], int students) {

    char key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int correctCount[10] = {0};
    int i, j;

    for(i = 0; i < students; i++) {
        for(j = 0; j < 10; j++) {
            if(ans[i][j] == key[j]) {
                correctCount[j]++;
            }
        }
    }

    int min = correctCount[0];
    int index = 0;

    for(j = 1; j < 10; j++) {
        if(correctCount[j] < min) {
            min = correctCount[j];
            index = j;
        }
    }

    return index + 1;
}

