#include <stdio.h>
#include <stdlib.h>
#include "wallet.h"

struct Wallet {
	float value;
};

void deposit(TWallet *w, float v) {
	w -> value = w -> value + v;
}
void withdraw(TWallet *w, float v) {
	w -> value = w -> value - v;
}
void balance(TWallet *w) {
	printf("%2.f", w->value);
}
