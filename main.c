#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//NOTE: strcmp: same = 0; different = 1.

int check(char* user, char* pass, char* inp_user, char* inp_pass);

union massochist {
    long num;
    float num2;
    int age;
};

int main(void) {
    char username[15];
    char password[15];
    int ch = 0;
    int amnt = 0;
    char* check_name = "Christian";
    char* check_password = "Bishop";
    printf("Hello.\n");
    do {
        printf("attempts: %d\n", amnt);
        printf("Username: \n");
        scanf("%s", &username);
        printf("Password: \n");
        scanf("%s", &password);
        system("cls");
        ch = check(username, check_name, password, check_password);
        printf("checking...");
        amnt++;
    } while (ch == 0 && amnt < 9);
    system("cls");
    if (amnt == 9 && ch == 1 || ch == 1) {
        printf("You're out.");
        system("exit");
    }
    else {
        printf("You're in.");
    }
    union massochist Mark;
    Mark.age = 36;
    printf("%d", Mark.age);
}

/*
The function below needs to change twofold. It needs to:
1.
Check a list and make sure both the username and passwords entered are in their respective lists.
2.
Tell the user either their username or password is wrong, if one is.
'Bonus'.
Work as intended.
This is where my current extent of knowledge ends, I'll be back after we learn arrays.
*/

//It let me in with a correct username and incorrect password;
//It also let me in with an incorrect username and correct password.
//any incorrect input boots me out.

int check(char* user, char* pass, char* inp_user, char* inp_pass) {
    int user_check;
    int pass_check;
    int overall;
    int exit;
    user_check = strcmp(user, inp_user);
    pass_check = strcmp(pass, inp_pass);

    overall = user_check + pass_check;
    return overall;
}

