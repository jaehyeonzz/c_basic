#include <stdio.h>

/**
 * ����Լ�(recursive funtion)
 *  - �ڱ��ڽ��� ȣ���ϴ� �Լ�
 *  - return(��ȯ��) �� �ٽ� �ڱ��ڽ��� ȣ���ϴ�
 *  ���迡 �ݵ�� ����
*/

void fruit(void);

int main(void) {
    fruit();
}

// ���� �ݺ� ȣ���ϴ� ����Լ�
//  - ���� ��� ����!
//  - Fatal Error;

void fruit(void) {
    printf("apple\n");
    fruit();
}