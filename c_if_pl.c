#include <stdio.h>

//주류 판매기 !!
// -구매자의 나이를 입력받고
// -나이에 따라 주류팬매/불가
int main(void) {
    //사용자로부터 나이를 입력
    int age;

    printf("나이 : ");
    scanf("%d", &age);

    if(age >= 20) { //성인
    prntf("성인입니다. \n")
    printf("주류 구매가 가능합니다. \n");
    }
    else if(age <= 19) {
        printf("미성년자입니다. \n");
        printf("주류 구매가 불가능합니다. \n");
    }
    // else if(age <= 19) {
        printf("미성년자입니다. \n");
        printf("주류 구매가 불가능합니다. \n");
    }
}