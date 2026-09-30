#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 200

char lines[MAX_LINES][MAX_LENGTH];
int lineCount = 0;

void displayDocument() {
    if (lineCount == 0) {
        printf("Document is empty.\n");
        return;
    }

    printf("\n--- Document ---\n");

    for (int i = 0; i < lineCount; i++) {
        printf("%d. %s\n", i + 1, lines[i]);
    }

    printf("----------------\n");
}

void insertLine(int position) {
    if (position < 1 || position > lineCount + 1) {
        printf("Invalid line number.\n");
        return;
    }

    if (lineCount >= MAX_LINES) {
        printf("Document is full.\n");
        return;
    }

    for (int i = lineCount; i >= position; i--) {
        strcpy(lines[i], lines[i - 1]);
    }

    printf("Enter text: ");
    getchar();
    fgets(lines[position - 1], MAX_LENGTH, stdin);

    lines[position - 1][strcspn(lines[position - 1], "\n")] = '\0';

    lineCount++;

    printf("Line inserted successfully.\n");
}

void deleteLine(int position) {
    if (lineCount == 0) {
        printf("Document is empty.\n");
        return;
    }

    if (position < 1 || position > lineCount) {
        printf("Invalid line number.\n");
        return;
    }

    for (int i = position - 1; i < lineCount - 1; i++) {
        strcpy(lines[i], lines[i + 1]);
    }

    lineCount--;

    printf("Line deleted successfully.\n");
}

int main() {
    char command[20];
    int position;

    printf("=================================\n");
    printf("       SIMPLE LINE EDITOR\n");
    printf("=================================\n");
    printf("Commands: insert, delete, display, exit\n");

    while (1) {
        printf("\n> ");
        scanf("%19s", command);

        if (strcmp(command, "insert") == 0) {
            scanf("%d", &position);
            insertLine(position);
        }
        else if (strcmp(command, "delete") == 0) {
            scanf("%d", &position);
            deleteLine(position);
        }
        else if (strcmp(command, "display") == 0) {
            displayDocument();
        }
        else if (strcmp(command, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Unknown command.\n");
            printf("Available commands: insert, delete, display, exit\n");
        }
    }

    return 0;
}