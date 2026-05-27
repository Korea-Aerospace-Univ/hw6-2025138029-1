#include <stdio.h>

int main()
{
    int x[10] = {};
    int cnt = 0, cnt_max = 0;
    char cnt_word;
    
    
    for(int i = 0; i < 10; i++){
        scanf("%c", &x[i]);
    }
    for (int *p = x; p < x + 10; p++) {
        for (int *q = x ; q < x + 10; q++) {
            if(*p == *q){
                cnt++;
            }
            if(cnt > cnt_max){
                cnt_max = cnt;
                cnt_word = *p;
            }
        }
        cnt = 0;
    }
    printf("%c %d", cnt_word, cnt_max);
}
