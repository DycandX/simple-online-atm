#include <stdio.h>

// Fungsi untuk menampilkan welcome message
void displayWelcomeMessage() {
    system("color 1F");
    printf("\n\n");
    printf("\t\t  ___   _   _  _      ___  _   _  _____   ____      _     _   _  _  __ ___  _   _   ____ \n");
    printf("\t\t / _ \\ | \\ | || |    |_ _|| \\ | || ____| | __ )    / \\   | \\ | || |/ /|_ _|| \\ | | / ___|\n");
    printf("\t\t| | | ||  \\| || |     | | |  \\| ||  _|   |  _ \\   / _ \\  |  \\| || ' /  | | |  \\| || |  _ \n");
    printf("\t\t| |_| || |\\  || |___  | | | |\\  || |___  | |_) | / ___ \\ | |\\  || . \\  | | | |\\  || |_| |\n");
    printf("\t\t \\___/ |_| \\_||_____||___||_| \\_||_____| |____/ /_/   \\_\\|_| \\_||_|\\_\\|___||_| \\_| \\____|\n");
    printf("                                                                                          \n");
    printf("\t\t\t\t     **********************************************\n");
    printf("\t\t\t\t     ******** Welcome to Simple ATM System ********\n");
    printf("\t\t\t\t     **************** By Zlvkr.exe ****************\n");
    printf("\t\t\t\t     **********************************************\n\n");
}



//Fungsi untuk menampilkan Register message
void displayRegisterMessage() {
    system("color 1F");
    printf("\n");
    printf("\t\t\t\t    ____   _____   ____  ___  ____   _____  _____  ____   \n");
    printf("\t\t\t\t   |  _ \\ | ____| / ___||_ _|/ ___| |_   _|| ____||  _ \\  \n");
    printf("\t\t\t\t   | |_) ||  _|  | |  _  | | \\___ \\   | |  |  _|  | |_) | \n");
    printf("\t\t\t\t   |  _ < | |___ | |_| | | |  ___) |  | |  | |___ |  _ <  \n");
    printf("\t\t\t\t   |_| \\_\\|_____| \\____||___||____/   |_|  |_____||_| \\_\\ \n");
    printf("                                                       \n");
    printf("\t\t\t\t************************************************************\n");
    printf("\t\t\t\t*************** D A F T A R  A K U N  B A R U **************\n");
    printf("\t\t\t\t************************************************************\n\n\n");
}

//Fungsi untuk menampilkan Menu Login
void displayMenuLogin() {
    system("color 1F");
    printf("\n");
    printf("\t\t\t  __  __  _____  _   _  _   _   _       ___    ____  ___  _   _ \n");
    printf("\t\t\t |  \\/  || ____|| \\ | || | | | | |     / _ \\  / ___||_ _|| \\ | |\n");
    printf("\t\t\t | |\\/| ||  _|  |  \\| || | | | | |    | | | || |  _  | | |  \\| |\n");
    printf("\t\t\t | |  | || |___ | |\\  || |_| | | |___ | |_| || |_| | | | | |\\  |\n");
    printf("\t\t\t |_|  |_||_____||_| \\_| \\___/  |_____| \\___/  \\____||___||_| \\_|\n");
}

//Fungsi untuk menampilkan Menu transaksi
void displayTransactionMenu() {
    system("color 1F");
    printf("\n\n");
    printf("\t\t __  __  _____  _   _  _   _   _____  ____      _     _   _  ____      _     _  __ ____   ___ \n");
    printf("\t\t|  \\/  || ____|| \\ | || | | | |_   _||  _ \\    / \\   | \\ | |/ ___|    / \\   | |/ // ___| |_ _|\n");
    printf("\t\t| |\\/| ||  _|  |  \\| || | | |   | |  | |_) |  / _ \\  |  \\| |\\___ \\   / _ \\  | ' / \\___ \\  | | \n");
    printf("\t\t| |  | || |___ | |\\  || |_| |   | |  |  _ <  / ___ \\ | |\\  | ___) | / ___ \\ | . \\  ___) | | | \n");
    printf("\t\t|_|  |_||_____||_| \\_| \\___/    |_|  |_| \\_\\/_/   \\_\\|_| \\_||____/ /_/   \\_\\|_|\\_\\|____/ |___|\n");
    printf("\n\n\t\t\t\t\tP I L I H   T R A N S A K S I   Y A N G\n");
    printf("\t\t\t\t\t\tA N D A   I N G I N K A N\n\n");
    printf("\n\tPress 1 for balance inquiry");
    printf("\t\t\t\t\t\t\tPress 4 for online transfer\n");
    printf("\n\tPress 2 for depositing cash");
    printf("\t\t\t\t\t\t\tPress 5 for password change\n");
    printf("\n\tPress 3 for cash withdrawal");
    printf("\t\t\t\t\t\t\tPress 6 to cancel\n\n");
}

// Fungsi untuk menampilkan menu balance
/*void displayMenuBalance() {
    printf("\n");
    printf("\t ____      _     _         _     _   _   ____  _____    ___  _   _   ___   _   _  ___  ____  __   __\n");
    printf("\t| __ )    / \\   | |       / \\   | \\ | | / ___|| ____|  |_ _|| \\ | | / _ \\ | | | ||_ _||  _ \\ \\ \\ / /\n");
    printf("\t|  _ \\   / _ \\  | |      / _ \\  |  \\| || |    |  _|     | | |  \\| || | | || | | | | | | |_) | \\ V / \n");
    printf("\t|_|  |_||_____||_| \\_| \\___/   \\____||_| |_|/_/   \\_|_| \\_||_____| |_|    /_/   \\_|____/ |____/ \n");
    printf("\t|____/ /_/   \\_\\|_____|/_/   \\_\\|_| \\_| \\____||_____|  |___||_| \\_| \\__\\_\\ \\___/ |___||_| \_\\  |_|  \n");
}
*/

// Fungsi untuk menampilkan menu balance
void displayMenuBalance() {
    printf("\n");
    printf("\t\t __  __  _____  _   _  _   _   ____      _     _         _     _   _   ____  _____ \n");
    printf("\t\t|  \\/  || ____|| \\ | || | | | | __ )    / \\   | |       / \\   | \\ | | / ___|| ____|\n");
    printf("\t\t| |\\/| ||  _|  |  \\| || | | | |  _ \\   / _ \\  | |      / _ \\  |  \\| || |    |  _|  \n");
    printf("\t\t| |  | || |___ | |\\  || |_| | | |_) | / ___ \\ | |___  / ___ \\ | |\\  || |___ | |___ \n");
    printf("\t\t|_|  |_||_____||_| \\_| \\___/  |____/ /_/   \\_\\|_____|/_/   \\_\\|_| \\_| \\____||_____|\n");
    printf("                                                                                   \n");
}



//Fungsi untuk menampilkan menu diposit
void displayMenuDiposit() {
    system("color 1F");
    printf("\n");
    printf("\t\t\t  __  __  _____  _   _  _   _   ____   _____  ____    ___   ____   ___  _____ \n");
    printf("\t\t\t |  \\/  || ____|| \\ | || | | | |  _ \\ | ____||  _ \\  / _ \\ / ___| |_ _||_   _|\n");
    printf("\t\t\t | |\\/| ||  _|  |  \\| || | | | | | | ||  _|  | |_) || | | |\\___ \\  | |   | |  \n");
    printf("\t\t\t | |  | || |___ | |\\  || |_| | | |_| || |___ |  __/ | |_| | ___) | | |   | |  \n");
    printf("\t\t\t |_|  |_||_____||_| \\_| \\___/  |____/ |_____||_|     \\___/ |____/ |___|  |_|  \n");
}

// Fungsi untuk menampilkan menu withdraw
void displayMenuWithdraw() {
    printf("\n");
    printf("\t\t __  __  _____  _   _  _   _  __        __ ___  _____  _   _  ____   ____      _    __        __\n");
    printf("\t\t|  \\/  || ____|| \\ | || | | | \\ \\      / /|_ _||_   _|| | | ||  _ \\ |  _ \\    / \\   \\ \\      / /\n");
    printf("\t\t| |\\/| ||  _|  |  \\| || | | |  \\ \\ /\\ / /  | |   | |  | |_| || | | || |_) |  / _ \\   \\ \\ /\\ / / \n");
    printf("\t\t| |  | || |___ | |\\  || |_| |   \\ V  V /   | |   | |  |  _  || |_| ||  _ <  / ___ \\   \\ V  V /  \n");
    printf("\t\t|_|  |_||_____||_| \\_| \\___/     \\_/\\_/   |___|  |_|  |_| |_||____/ |_| \\_\\/_/   \\_\\   \\_/\\_/   \n");
}


//Fungsi untuk menampilkan menu transfer
void displayMenuTransfer() {
    system("color 1F");
    printf("\n");
    printf("\t\t __  __  _____  _   _  _   _   _____  ____      _     _   _  ____   _____  _____  ____  \n");
    printf("\t\t|  \\/  || ____|| \\ | || | | | |_   _||  _ \\    / \\   | \\ | |/ ___| |  ___|| ____||  _ \\ \n");
    printf("\t\t| |\\/| ||  _|  |  \\| || | | |   | |  | |_) |  / _ \\  |  \\| |\\___ \\ | |_   |  _|  | |_) |\n");
    printf("\t\t| |  | || |___ | |\\  || |_| |   | |  |  _ <  / ___ \\ | |\\  | ___) ||  _|  | |___ |  _ < \n");
    printf("\t\t|_|  |_||_____||_| \\_| \\___/    |_|  |_| \\_\\/_/   \\_\\|_| \\_||____/ |_|    |_____||_| \\_|\n");
}

// Fungsi untuk menampilkan menu change password
void displayMenuChangePass() {
    printf("\n");
    printf("\t __  __  _____  _   _  _   _    ____  _   _     _     _   _   ____  _____   ____      _     ____   ____  \n");
    printf("\t|  \\/  || ____|| \\ | || | | |  / ___|| | | |   / \\   | \\ | | / ___|| ____| |  _ \\    / \\   / ___| / ___| \n");
    printf("\t| |\\/| ||  _|  |  \\| || | | | | |    | |_| |  / _ \\  |  \\| || |  _ |  _|   | |_) |  / _ \\  \\___ \\ \\___ \\ \n");
    printf("\t| |  | || |___ | |\\  || |_| | | |___ |  _  | / ___ \\ | |\\  || |_| || |___  |  __/  / ___ \\  ___) | ___) |\n");
    printf("\t|_|  |_||_____||_| \\_| \\___/   \\____||_| |_|/_/   \\_\\|_| \\_| \\____||_____| |_|    /_/   \\_|____/ |____/ \n");
}


//Fungsi untuk menampilkan return message
void displayReturnMessage() {
    system("color 1F");
    printf("\n\t\t\t\t\t\t  Return to the login menu\n");
}

//Fungsi untuk menampilkan thanks message
void displayThanksMessage() {
    system("color 1F");
    printf("\n\n");
    printf("\t\t\t _____  _   _     _     _   _  _  __ __   __  ___   _   _ \n");
    printf("\t\t\t|_   _|| | | |   / \\   | \\ | || |/ / \\ \\ / / / _ \\ | | | |\n");
    printf("\t\t\t  | |  | |_| |  / _ \\  |  \\| || ' /   \\ V / | | | || | | |\n");
    printf("\t\t\t  | |  |  _  | / ___ \\ | |\\  || . \\    | |  | |_| || |_| |\n");
    printf("\t\t\t  |_|  |_| |_|/_/   \\_\\|_| \\_||_|\\_\\   |_|   \\___/  \\___/ \n\n");
    printf("\t\t\t  **********************************************************\n");
    printf("\t\t\t  *************** Thank you for using the ATM **************\n");
    printf("\t\t\t  **********************************************************\n");
}




