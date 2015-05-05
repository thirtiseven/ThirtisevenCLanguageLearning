//ReverseInteger.c
//github
#include <stdio.h>
#include <math.h>
int main(void){
int x,Alice,Bob,Carol;//Alice&Bob系列变量名重新上线！撒花！
scanf("%d",&x);
Bob = (int)abs(x);
while (Alice != 0){
	int Carol = 10;
	Alice = Bob / Carol;
	Carol++ ;
	}//计算数字位数
int Dave = 0;
int Eve,Thirtiseven;
for(Thirtiseven = 1;Thirtiseven <= Carol;Thirtiseven++)//恶意在本应该写i的地方签名系列
{
	Dave = Dave + Bob % 10 ^ Thirtiseven;
}//真•Reverse Integer
if (x < 0)//判断正负
{
	Dave = 0 - Dave;
}
printf("%d",Dave);
}
while(x){
            flag=flag*10+x%10;
            x/=10;
        }
        