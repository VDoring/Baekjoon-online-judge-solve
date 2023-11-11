#include <stdio.h>
#include <string.h>
int main() {
    char s[1000001];
    int word_count = 0;
    int recently_word = 0;

    gets(s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') { // 문자라면
            if (recently_word == 1) { // 현재 단어 속을 진행중인경우
                continue;
            }
            else { // 새로운 단어로 건너온경우
                word_count++;
                recently_word = 1;
            }
        }
        else { // 공백이면
            recently_word = 0;
        }
    }
    
    printf("%d", word_count);
}