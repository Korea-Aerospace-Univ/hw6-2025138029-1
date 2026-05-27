#include <stdio.h>

int main(void)
{
    int N = 0;
    int *p1, *p2;
    int arr1[20] = {};
    int arr2[20] = {};
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &arr1[i]);
    }
    for(int j = N - 1; j >= 0; j--){
        scanf("%d", &arr2[j]);
    }
    p1 = arr1;
    p2 = arr2;
    
    for(int k = 0; k < N; k++){
        printf(" %d", *p1 + *p2);
        p1++;
        p2++;
    }
    return 0;
}
