#include <stdio.h>
#include <string.h>

int main()
{
    char input[200] = "";
    int count1[26] = {0};
    int count2[26] = {0};
    int count3[10] = {0};
    int count4= 0;
    int ch;
    int i = 0;

    while((ch = getchar()) != EOF){
        input[i++] = ch;
    }
    
    i = 0;
    while(input[i] != '\0'){
        if(input[i] >= 'a' && input[i] <= 'z'){
            count1[input[i] - 'a']++;
        } else if(input[i] >= 'A' && input[i] <= 'Z'){
            count2[input[i] - 'A']++;
        } else if(input[i] >= '0' && input[i] <= '9'){
            count3[input[i] - '0']++;
        } else {
            count4++;
        }
        i++;
    }


    printf("입력문자열 : %s\n", input);
    
    for(int i = 0; i < 26; i++) {
        if (count1[i] > 0) {
            printf("소문자 %c 출현횟수 : %d\n", 'a'+i, count1[i]);
        }
    }
    
    for(int i = 0; i < 26; i++) {
        if (count2[i] > 0) {
            printf("대문자 %c 출현횟수 : %d\n", 'A'+i, count2[i]);
        }
    }
    
    for(int i = 0; i < 10; i++) {
        if (count3[i] > 0) {
            printf("숫자 %c 출현횟수 : %d\n", '0'+i, count3[i]);
        }
    }
    
    printf("기타 문자 출현횟수 : %d\n", count4);

    return 0;
}
