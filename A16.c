/*作業16:請撰寫一個程式，請用for迴圈計算偶數2+4+6+~+100加總。
for迴圈寫在main()函式中，但累加要在自訂函式add3()中完成，
並在add3()函式中使用內部靜態變數做加總，最後的結果在main()中輸出。

*呂家明 3a713229
*/ 
#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("2+4+6+~+100加總:%d\n", add());  //顯示add()回傳的數字 
    

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
