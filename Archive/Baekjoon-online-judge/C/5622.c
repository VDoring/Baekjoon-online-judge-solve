//#include <stdio.h>
//#include <string.h>
//int main() {
//	char userinput[16];
//	int second = 0;
//
//	scanf("%s", userinput);
//	int userinput_len = strlen(userinput);
//
//	for (int i = 0; i < userinput_len; i++) {
//		if (userinput[i] == 'A' || userinput[i] == 'B' || userinput[i] == 'C')
//			second += 3;
//		else if (userinput[i] == 'D' || userinput[i] == 'E' || userinput[i] == 'F')
//			second += 4;
//		else if (userinput[i] == 'G' || userinput[i] == 'H' || userinput[i] == 'I')
//			second += 5;
//		else if (userinput[i] == 'J' || userinput[i] == 'K' || userinput[i] == 'L')
//			second += 6;
//		else if (userinput[i] == 'M' || userinput[i] == 'N' || userinput[i] == 'O')
//			second += 7;
//		else if (userinput[i] == 'P' || userinput[i] == 'Q' || userinput[i] == 'R' || userinput[i] == 'S')
//			second += 8;
//		else if (userinput[i] == 'T' || userinput[i] == 'U' || userinput[i] == 'V')
//			second += 9;
//		else if (userinput[i] == 'W' || userinput[i] == 'X' || userinput[i] == 'Y' || userinput[i] == 'Z')
//			second += 10;
//	}
//
//	printf("%d", second);
//}

#include <stdio.h>
#include <string.h>
int main() {
	char userinput[16];
	int second = 0;

	scanf("%s", userinput);
	int userinput_len = strlen(userinput);

	for (int i = 0; i < userinput_len; i++) {
		switch (userinput[i]) {
		case 'A':
		case 'B':
		case 'C':
			second += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			second += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			second += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			second += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			second += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			second += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			second += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			second += 10;
			break;
		}
	}

	printf("%d", second);
}