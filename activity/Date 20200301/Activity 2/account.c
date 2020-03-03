#include <stdio.h>
#include <stdlib.h>
#include "account.h"

struct Account {
	int number;
	float balance;
};

TAccount *neww(int number, float openingBalance) {
	TAccount *account = (TAccount *)malloc(sizeof(TAccount));
	account -> number = number;
	account -> balance = openingBalance;
	return account;
}

void deposit(TAccount *account, float deposit) {
	account -> balance += deposit;
}
void withdraw(TAccount *account, float withdraw) {
	account -> balance -= withdraw;
}

void inform(TAccount *account) {
	printf("Conta %d tem saldo R$%.2f\n",account -> number, account->balance);
}
