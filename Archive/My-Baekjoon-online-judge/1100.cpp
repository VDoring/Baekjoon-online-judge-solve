//동작안함
#include <iostream>

int main() {
	char plate[8][8];
	int count = 0;

	for (int i = 0; i < 8; i++)
		scanf("%s ", &plate[i]);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 1) {
				j++;
				if (plate[i][j] == 'F') {
					count++;
					continue;
				}
			}
			if (plate[i][j] == 'F')
				count++;
		}
	}

	return 0;
}