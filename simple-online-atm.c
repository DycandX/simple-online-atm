/*
Nama Program  : atm_05_4_final.c
Deskripsi     : Program Simple Internet Banking
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 4.33.23.2.26
Tanggal       : 12/12/23
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "loading.h"
#include "displayMessage.h"

struct user {
    char username[50];
    char ac[50];
    char password[50];
    float balance;
};

void updateUserInfo(FILE *fp, struct user *usr) {
    fseek(fp, 0, SEEK_SET);
    fwrite(usr, sizeof(struct user), 1, fp);
    fflush(fp);  // Add this line to flush the buffer
}

void saveReceipt(const char *ac, const char *username, struct user *usr, float balance, const char *action, float amount) {
    FILE *receiptFile;
    char receiptFilename[50];
    time_t t;
    struct tm *timestamp;

    time(&t);
    timestamp = localtime(&t);

    snprintf(receiptFilename, sizeof(receiptFilename), "%s.dat_receipt.txt", username);

    receiptFile = fopen(receiptFilename, "a");

    if (receiptFile != NULL) {
        fprintf(receiptFile, "\n----- Receipt -----\n");
        fprintf(receiptFile, "Account Number: %s\n", ac);
        fprintf(receiptFile, "Phone Number or Username: %s\n", username);
        fprintf(receiptFile, "Timestamp: %s", asctime(timestamp)," \n");
        fprintf(receiptFile, "Action: %s\n", action);
        fprintf(receiptFile, "Amount: %.2f\n", amount);
        fprintf(receiptFile, "Total Balance: %.2f\n", balance);
        fprintf(receiptFile, "--------------------\n\n");

        fclose(receiptFile);

        printf("\n\t\t\t\t\t    Receipt saved: %s\n", receiptFilename);
    } else {
        printf("\n\t\t\t\tError saving receipt\n");
    }
}

void registerAccount() {
    struct user usr;
    FILE *fp;
    char filename[50];

    system("cls");
    system("color 1F");

    displayRegisterMessage();
    printf("\t\t\t\t\tEnter your account number\t    :\t");
    scanf("%s", usr.ac);
    printf("\t\t\t\t\tEnter your phone number or Username :\t");
    scanf("%s", usr.username);
    printf("\t\t\t\t\tEnter your new password\t\t    :\t");
    scanf("%s", usr.password);

    usr.balance = 0;
    strcpy(filename, usr.username);
    fp = fopen(strcat(filename, ".dat"), "w");

    if (fp != NULL) {
        fwrite(&usr, sizeof(struct user), 1, fp);
        printf("\n\n\t\t\t\t\t\tAccount successfully registered");
        displayReturnMessage();
        loading(3);
        system("cls");
        fclose(fp);
    } else {
        printf("\n\nSomething went wrong, please try again");
    }
}

void getPassword(char *password) {
    int i = 0;
    char ch;

    while (1) {
        ch = _getch(); 
        if (ch == 13)    // ASCII 13 adalah enter
            break;
        else if (ch == 8) {  // ASCII 8 adalah backspace
            if (i > 0) {
                i--;
                printf("\b \b");  // Menghapus karakter dan mundur satu langkah
            }
        } else {
            password[i++] = ch;
            printf("*");
        }
    }

    password[i] = '\0';  // Menambahkan karakter null di akhir string
}

void loginAccount() {
    struct user usr, usr1;
    FILE *fp;
    char filename[50], username[50], pword[50];
    char cont = 'y';
    int choice;
    float amount;

    system("cls");
    system("color 1F");

    displayMenuLogin();
    printf("\n\t\t\t\t\t\tM E N U   L O G I N\n");
    printf("\t\t\t\tS I L A H K A N  M A S U K K A N  A K U N  A N D A\n\n");
    printf("\n\t\t\t\t\tPhone number or Username\t: ");
    scanf("%s", username);
    printf("\t\t\t\t\tPassword\t\t\t: ");
    getPassword(pword);

    strcpy(filename, username);
    fp = fopen(strcat(filename, ".dat"), "r+");

    if (fp == NULL) {
        printf("\n\t\t\t\t\t     Account number not registered\n");
        displayReturnMessage();
        loading(3);
        system("cls");
    } else {
        fread(&usr, sizeof(struct user), 1, fp);

        if (!strcmp(pword, usr.password)) {
            printf("\n\n\t\t\t\t\t\t     Welcome %s", usr.username);
            loading(2);

            while (cont == 'y' || cont == 'Y') {
                system("cls");
                displayTransactionMenu();

                printf("\t\t\t\t\t\t     Your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        loading(3);
                        displayMenuBalance();
                        printf("\n\n\t\t\t\t\t   Your current balance is Rp.%.2f\n", usr.balance);

                        printf("\n\t\t\t\t\tDo you want to print a receipt? [y/n]\t");
                        scanf(" %c", &cont);

                        if (cont == 'y' || cont == 'Y') {
                            saveReceipt(usr.ac, usr.username, &usr, usr.balance, "Balance Inquiry", amount);
                        }
                        break;
                    case 2:
                        loading(3);
                        displayMenuDiposit();
                        printf("\n\t\t\t\t\t\t   Enter the amount: ");
                        scanf("%f", &amount);
                        usr.balance += amount;
                        printf("\n\t\t\t\t\t\t  Successfully deposited.\n");
                        if (cont == 'y' || cont == 'Y') {
                            saveReceipt(usr.ac, usr.username, &usr, usr.balance, "Deposit", amount);
                        }
                        break;
                    case 3:
                        loading(3);
                        displayMenuWithdraw();
                        printf("\n\t\t\t\t\t\t   Enter the amount: ");
                        scanf("%f", &amount);
                        if (amount > usr.balance) {
                            printf("\n\t\t\t\t\t\tInsufficient balance");
                        } else {
                            usr.balance -= amount;
                            printf("\n\t\t\t\t\t\tYou have withdrawn Rp.%.2f", amount);
                            if (cont == 'y' || cont == 'Y') {
                                saveReceipt(usr.ac, usr.username, &usr, usr.balance, "Withdraw", amount);
                            }
                        }
                        break;
                    case 4:
                        loading(3);
                        displayMenuTransfer();
                        printf("\n\t\t\t\tPlease enter the phone number or username to transfer:  ");
                        scanf("%s", username);
                        printf("\n\t\t\t\t\tPlease enter the amount to transfer: ");
                        scanf("%f", &amount);

                        // Check if the source account (usr) exists
                        if (strcmp(usr.username, username) == 0) {
                            printf("\n\t\t\t\t\tSource account cannot be the same as the destination account.");
                        } else {
                            // Menggunakan snprintf untuk menghindari overflow
                            snprintf(filename, sizeof(filename), "%s.dat", username);

                            FILE *transferFile = fopen(filename, "r+");
                            if (transferFile == NULL) {
                                printf("\n\t\t\t\t\t\tDestination account not registered");
                            } else {
                                fread(&usr1, sizeof(struct user), 1, transferFile);  // Membaca data dari akun penerima
                                fclose(transferFile);

                                if (amount > usr.balance) {
                                    printf("\n\t\t\t\t\t\tInsufficient balance");
                                } else {
                                    usr1.balance += amount;

                                    FILE *transferFileWrite = fopen(filename, "r+");  // Menggunakan "r+" agar dapat membaca dan menulis
                                    fwrite(&usr1, sizeof(struct user), 1, transferFileWrite);
                                    fclose(transferFileWrite);

                                    printf("\n\t\t\t\tYou have successfully transferred Rp.%.2f to %s", amount, username);

                                    // Update source account info
                                    FILE *sourceFile = fopen(strcat(usr.username, ""), "r+");
                                    usr.balance -= amount;
                                    updateUserInfo(sourceFile, &usr);
                                    fclose(sourceFile);
                                }
                            }
                        }
                        break;
                    case 5:
                        loading(3);
                        displayMenuChangePass();
                        printf("\n\t\t\t\t\t   Please enter your new password:\t");
                        scanf("%s", pword);
                        strcpy(usr.password, pword);
                        updateUserInfo(fp, &usr);
                        printf("\n\t\t\t\t\t\t Password successfully changed");
                        break;
                    case 6:
                        loading(3);
                        system("cls");
                        printf("\n\t\t\t\t\t   Exiting the program. Thank you!\n");
                        fclose(fp);
                        break;
                    default:
                        printf("\n\t\t\t\t\t\t    Invalid option");
                        break;
                }

                if (choice >= 1 && choice <= 6) {
                    // Update user info after each transaction
                    updateUserInfo(fp, &usr);
                }

                if (choice < 1 || choice > 6) {
                    // Invalid option, display message and return to transaction menu
                    printf("\n\t\t\t\t\t\t    Returning to the transaction menu\n");
                }

                printf("\n\t\t\t\t     Do you want to continue the transaction? [y/n]  ");
                scanf(" %c", &cont);
                loading(2);
            }
        } else {
            printf("\n\t\t\t\t\t       Invalid password");
            displayReturnMessage();
            loading(3);
        }
    }

    // Close the file after the while loop
    fclose(fp);
}

int main() {
    int opt;
    char input[50];  // Menyimpan input pengguna sebagai string

    system("cls");
    system("color 1F");

    displayWelcomeMessage();
    loading_bar(4); // Loading page at the start

    do {
        displayWelcomeMessage();
        printf("\n\t\t\t\t\t\tWhat do you want to do?");
        printf("\n\n\t\t\t\t\t\t1. Register an account");
        printf("\n\t\t\t\t\t\t2. Login to an account");
        printf("\n\t\t\t\t\t\t0. Exit");

        printf("\n\n\t\t\t\t\t\t    Your choice: ");
        scanf("%s", input);

        // Memeriksa apakah input berupa angka
        if (isdigit(input[0])) {
            opt = atoi(input);  // Mengubah string menjadi integer
            switch (opt) {
                case 1:
                    loading(2); // Loading after each option
                    registerAccount();
                    break;
                case 2:
                    loading(2);
                    loginAccount();
                    break;
                case 0:
                    loading(2);
                    displayThanksMessage();
                    printf("\n\n\t\t\t\t\tExiting the program. Thank you!\n\n\n\n");
                    break;
                default:
                    loading(2);
                    printf("\n\t\t\t\t\t\t      Invalid option\n");
                    displayReturnMessage();
                    // Meminta pengguna untuk memasukkan input lagi
                    loading(2);
                    break;
            }
        } else {
            loading(2);
            printf("\n\t\t\t\t\t    Invalid input. Please enter a number.\n");
            displayReturnMessage();
            // Meminta pengguna untuk memasukkan input lagi
            loading(2);
        }

    } while (opt != 0);

    return 0;
}




