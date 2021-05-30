#include"leetcode322.h"

int main(void) {
	int coins[] = {186,419,83,408};
	int coinsSize = 4;
	int amount = 6249;

	printf("%d\n", coinChange(coins, coinsSize, amount));

	system("pause");
	return 0;
}