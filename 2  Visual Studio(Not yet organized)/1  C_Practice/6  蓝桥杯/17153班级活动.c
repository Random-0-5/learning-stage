#include <stdio.h>
#include <stdlib.h>

void Count(int n);

int main(int argc, char* argv[])
{
	scanf("%d", &argc);
	
	for (int i = 0 ; i < argc; i++) {
		scanf("%d", &argv[i]);
	}

	int sameCount = 0;
	int count = 0, count1 = 0, count2 = 0;

	for (int i = 1; i <= argc; i++) {
		for (int j = 0; j < argc; j++) {
			if (i == argv[j]) {
				sameCount++;
			}
		}
		if (sameCount >= 3) {

		}
	}
	


	return 0;
}

