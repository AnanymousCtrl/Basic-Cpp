#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct ToDo {
    char a1[100];
    struct ToDo* next;
    int c;
};

typedef struct ToDo todo;

todo* start = NULL;

void adj();
void interface();
void seetodo();
void createtodo();
void deletetodo();

int main() {
    int a;
    interface();

    while (1) {
        system("cls");
        printf("1. Create your To-Do List\n");
        printf("2. See your To-Do list\n");
        printf("3. Delete your To-Do\n");
        printf("4. Exit\n");
        scanf("%d", &a);

        switch (a) {
            case 1:
                createtodo();
                break;
            case 2:
                seetodo();
                break;
            case 3:
                deletetodo();
                break;
            case 4:
                exit(0); // Use exit(0) to exit the program cleanly.
                break;
            default:
                printf("\nINVALID CHOICE\n");
                getch();
        }
        getch();
    }
}

void interface() {
    printf("Welcome to your To-Do\n");
    printf("\t~Katha, Khushboo, Lavish, Krishna\n");
    printf("Press Enter to Continue!!");
    getch();
}

void seetodo() {
    todo* t;
    system("cls");
    t = start;

    if (start == NULL) {
        printf("It seems empty in here");
    }

    while (t != NULL) {
        printf("%d. %s\n", t->c, t->a1);
        t = t->next;
    }
	printf("\n!!:Press Enter twice to continue:!!");
    getch();
}

void createtodo() {
    char q;
    todo* add, * t;
    system("cls");

    while (1) {
        system("cls");
        printf("\nWould you like to add a new To-Do\n");
        printf("\n\ty/n\n");
        fflush(stdin); // Clear input buffer.
        scanf(" %c", &q); // Use a space before %c to skip leading whitespace.

        if (q == 'n') {
            break;
        } else {
            if (start == NULL) {
                add = (todo*)malloc(sizeof(todo));
                start = add;
                printf("\nYour Input Please...\n");
                fflush(stdin);
                scanf("%s", add->a1);
                add->c = 1;
                start->next = NULL;
            } else {
                t = (todo*)malloc(sizeof(todo));
                printf("\nYour Input Please\n");
                fflush(stdin);
                scanf("%s", t->a1);
                t->next = NULL;
                add->next = t;
                add = add->next;
            }
            adj();
        }
    }
}

void deletetodo() {
    int x;
    todo* del, * t;
    system("cls");
    printf("\nEnter the number of To-Do you wish to remove\n");

    if (start == NULL) {
        printf("\nFeels Empty\n");
    } else {
        scanf("%d", &x);
        del = start;
        t = start->next;

        while (1) {
            if (del->c == x) {
                start = start->next;
                free(del);
                adj();
                break;
            }
            if (t->c == x) {
                del->next = t->next;
                free(t);
                adj();
                break;
            } else {
                del = t;
                t = t->next;
            }
        }
    }

    getch();
}

void adj() {
    todo* t;
    int i = 1;
    t = start;

    while (t != NULL) {
        t->c = i;
        i++;
        t = t->next;
    }
}

