#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct Date
{
    int month, day, year;
};

struct Record
{
    int id;
    int userId;
    char name[20];
    char country[20];
    char phone[20];
    char accountType[10];
    int accountNbr;
    double amount;
    struct Date deposit;
    struct Date withdraw;
};

struct User
{
    int id;
    char name[20];
    char password[20];
};

const char *getPassword(struct User u);
const int userID(struct User u);

// authentication functions
void loginMenu(char a[20], char pass[20]);
void registerMenu(char a[20], char pass[20]);

// system function
void mainMenu(struct User u);
void createNewAccount(struct User u);
void updateAccount(struct User u);
void updateRecord(struct User u, struct Record r, int option, int l);
void checkAllAccounts(struct User u);
void checkAccount(struct User u);
void deleteAccount(struct User u);
void transferOwner(struct User u);
void updateOwner(struct User u, struct Record r, int l);
void updateCash(struct User u, struct Record r, int l);
void makeTransaction(struct User u);
