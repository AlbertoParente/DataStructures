#include <stdio.h>
#include <stdlib.h>

typedef struct Account TAccount;
TAccount *neww(int number, float openingBalance);
void deposit(TAccount *account, float deposit);
void withdraw(TAccount *account, float withdraw);
void inform(TAccount *account);
