#include <stdio.h>
#include <string.h>
int main() {
    char s[1000001];
    int word_count = 0;
    int recently_word = 0;

    gets(s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') { // ���ڶ��
            if (recently_word == 1) { // ���� �ܾ� ���� �������ΰ��
                continue;
            }
            else { // ���ο� �ܾ�� �ǳʿ°��
                word_count++;
                recently_word = 1;
            }
        }
        else { // �����̸�
            recently_word = 0;
        }
    }
    
    printf("%d", word_count);
}