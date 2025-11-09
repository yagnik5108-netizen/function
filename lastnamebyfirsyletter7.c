#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *word;
    char lastName[50];
    char result[100] = "";
    char temp[10];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';


    word = strtok(name, " ");
    char allWords[10][50];
    int count = 0;

    while(word != NULL) {
        strcpy(allWords[count++], word);
        word = strtok(NULL, " ");
    }

    strcpy(lastName, allWords[count - 1]);


    for(int i = 0; i < count - 1; i++) {
        sprintf(temp, "%c. ", allWords[i][0]);
        strcat(result, temp);
    }


    strcat(result, lastName);

    printf("\nAbbreviated Name: %s\n", result);

    return 0;
}
