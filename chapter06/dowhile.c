#include <stdio.h>

/**
 * 1) while��  -  �ݺ�Ƚ�� ��
 *      - dowhile: �ݺ��ϸ鼭 �����ϴ� ���๮�� �ݵ�� ���� 1ȸ��
 *                 �����ؾ� �Ҷ�!
 * 
 *  : while �� ù���� �ݺ� ���� X �� ���๮ 0ȸ ����
 *  : dowhile �� ù��° �ݺ� ���� X �� ���๮ 1ȸ ����
 * 2) for   ��  �ݺ�Ƚ���� ������ ���
 * 
 * ��: Ű����ũ
*/
int main(void) {
    // 1. while��
    // while(����) {
    //      ����;
    //
    
    // 2. dowhile��
    int a = 1;
    do {
        a = a*2;
    } while(a < 10);
    printf("a : %d\n", a);
}