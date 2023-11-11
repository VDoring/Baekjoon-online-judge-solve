//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s[1000001] = { 0, };
//    char alphabet_list[26] = { 0, };
//    int locate = 0;
//    char alphabet_max_list[26] = { 0, };
//    int max_locate = -1;
//    int max = -1;
//
//-   scanf("%s", s);
//
//    for (int i = 0; i < strlen(s); i++) { // �빮�ڸ� �ҹ��ڷ� ��ȯ
//        if(s[i] >= 65 && s[i] <= 90)
//            s[i] += 32;
//    }
//
//    for (int i = 0; i < strlen(s); i++) { // Ư�� ���ĺ��� �󸶳� ���Դ��� ������� ���
//        locate = s[i] - 97;
//        alphabet_list[locate] += 1;
//    }
//    
//    for (int i = 0; i < strlen(alphabet_list); i++) { // ���� ���� ���� ���ĺ��� ���� �ľ�
//                                                      // ���� ���� ���� ���ĺ� ���� �������� Ȯ���ϱ�
//        if (max <= alphabet_list[i]) { //Ư�� ���ĺ� ������ max���� ���ٸ�
//            max_locate = i; //max ���ĺ� ��ġ ����
//            max = alphabet_list[i]; //max ���ĺ� ���� ����
//            alphabet_max_list[i] += max;
//        }
//    }
//
//    for (int i = 0; i < strlen(alphabet_max_list); i++) {
//        for (int j = i + 1; j < strlen(alphabet_max_list); j++) {
//            if (alphabet_max_list[i] == alphabet_max_list[j]) {
//                printf("?");
//                return 0;
//            }
//        }
//    }
//
//    printf("%c", alphabet_list[max_locate]+97);
//            
//
//    
//
//}


#include <stdio.h>
#include <string.h>
int main() {
	char input[1000001]; // ����� �Է�
	int alphabet_count_list[26 + 1] = { 0, }; // ����ڰ� �Է��� ���ڿ��� ����(���ĺ�)�� �и��Ͽ� �� ����(���ĺ�)�� ī��Ʈ�� ����
	int alphabet_max_list[2] = { 0, }; //[0]=���� ���� ���� ���ĺ��� ī��Ʈ, [1]=���� ���� ���� ���ĺ��� �ƽ�Ű�ڵ�-65 or -97.(i�� ����)
	int is_alphabet_max_count_same = 0; // ���� ���� ���� ���ĺ��� ī��Ʈ�� ���� ���ĺ��� ������� true.

	scanf("%s", input);
	int strlen_input = strlen(input);

	for (int i = 0; i < strlen_input; i++) { // �빮�ڿ� �ҹ��ڰ� ���� ���� �� �ִ� �Է��̹Ƿ� �ݺ����� �̿��� ó���ϰ�, �� ���ĺ��� ī��Ʈ�� �����Ѵ�.
		//if (65 <= input[i] && 90 >= input[i])
		//	alphabet_count_list[input[i] - 65]++;
		//else if (97 <= input[i] && 122 >= input[i])
		//	alphabet_count_list[input[i] - 97]++;

		if(input[i] < 97) // �빮���� ���
			alphabet_count_list[input[i] - 65]++;
		else              // �ҹ����� ���
			alphabet_count_list[input[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) { // ���� ���� ���� ���ĺ��� ī��Ʈ�� ��ġ�� ã�´�.
		if (alphabet_max_list[0] < alphabet_count_list[i]) {
			alphabet_max_list[0] = alphabet_count_list[i];
			alphabet_max_list[1] = i;
		}
	}

	for (int i = 0; i < 26; i++) { // ���� ���� ���� ���ĺ��� ī��Ʈ�� �ѹ� �� �˻��Ѵ�. �̶� ���� �ִ� ī��Ʈ�� ���� ���� ���´ٸ� ?�� ����ϰ� �����Ѵ�.
		if (alphabet_max_list[0] == alphabet_count_list[i])
			if (alphabet_max_list[1] != i) {
				is_alphabet_max_count_same = 1;
				break;
			}
	}

	if (is_alphabet_max_count_same == 1) // ���
		printf("?\n");
	else
		printf("%c", alphabet_max_list[1] + 65);
}