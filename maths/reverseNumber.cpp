#include<iostream>

int main()
{
    int num;
    std::cin>> num;
    int reverseNum = 0;
    while(num>0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        reverseNum = (reverseNum * 10) + lastDigit;

    }

    std::cout<<reverseNum;
    return 0;

}