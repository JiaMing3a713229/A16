#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("%d\n", add());
    

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
