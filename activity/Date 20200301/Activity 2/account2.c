#include <stdio.h>
#include <stdlib.h>
#include "account.h"

struct Account {
	float balance;
	float loanAmount;
};

TAccount *neww(float openingBalance) {
	TAccount *account = (TAccount *)malloc(sizeof(TAccount));
	account -> balance = openingBalance;
	account -> loanAmount = 0;
	return account;
}

void deposit(TAccount *account, float deposit) {
	if(account -> loanAmount > 0) {
		account -> loanAmount -= deposit;
		account -> balance -= deposit;
	} else {
		account -> balance += deposit;
	}
}

void withdraw(TAccount *account, float value) {
	float valueAddedForLoan = value - account -> balance;;
	account -> balance -= value;
	
	if(account -> balance < 0) {
		account -> balance += valueAddedForLoan;
		account -> loanAmount += valueAddedForLoan;
	}
}

void askLoan(TAccount *account, float value) {
	account -> loanAmount += value;
}

void payLoan(TAccount *account, float value) {
	account -> loanAmount -= value;
}












TQueue *queue = create();
TStack *stackAux = create();


void inverterValue(Tqueue *queue) {
	int i;
	for(i = 0; i < size(queue); i++) {
		stackUp(stackAux, dequeue(queue));
		enqueue(queue, unStack(stackAux));
	}
}




