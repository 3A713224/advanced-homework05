#include <stdio.h>
#include <math.h>
 
int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(int k);


int main()
{
    long long n,k,j;
    printf("輸入二進制: ");
    scanf("%lld", &n);
    printf("十進制為%d\n",  convertBinaryToDecimal(n));
    printf("八進制為%o\n",  convertBinaryToDecimal(n));
    printf("十六進制為%x\n", convertBinaryToDecimal(n) );   

    printf("輸入十進制: ");
    scanf("%d", &k);
    printf("二進制為 %lld\n",  convertDecimalToBinary(k));
    printf("八進制為 %o\n",  k);
    printf("十六進制為 %x\n",  k);

    printf("輸入十六進制: ");
    scanf("%x", &j);
    
    printf("十進制為 %d\n",  j);
    printf("八進制為 %o\n",  j);


	return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n =n/10;
        decimalNumber =decimalNumber+ remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

 
 

long long convertDecimalToBinary(int k)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
 
    while (k!=0)
    {
        remainder = k%2;
        k =k/ 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
