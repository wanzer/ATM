#include <stdio.h>

int main() {
    int accNumber,sum;
    int bank_balance[20];        //amount of accounts
    
    for (int i=0; i<=19; i++) {
        bank_balance[i]=1000;    //there are 20 accounts in the ATM, $1000 each
        }
    do {
    printf("Enter account number (from:0 till 19): ");
    scanf("%d",&accNumber);
    }
    while (accNumber<0 || accNumber>19);
    printf("You have $%d on your account\n",bank_balance[accNumber]);
    do {
        printf("Enter sum of required money: $");
        scanf("%d",&sum);
        }
    while (sum<0);
            bank_balance[accNumber]-=sum;
            printf("From account %d was taken: $%d. Account balance: $%d\n",accNumber,sum,bank_balance[accNumber]);
    }