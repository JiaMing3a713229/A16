/*�@�~16:�м��g�@�ӵ{���A�Х�for�j��p�ⰸ��2+4+6+~+100�[�`�C
for�j��g�bmain()�禡���A���֥[�n�b�ۭq�禡add3()�������A
�æbadd3()�禡���ϥΤ����R�A�ܼư��[�`�A�̫᪺���G�bmain()����X�C

*�f�a�� 3a713229
*/ 
#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("2+4+6+~+100�[�`:%d\n", add());  //���add()�^�Ǫ��Ʀr 
    

    system("pause");

    return 0;
}
int add(void){

    static int sum_num=0;
    
    int i;

    for(i=2;i<=100;i+=2){
        sum_num+=i;
    }
    return sum_num;
}
