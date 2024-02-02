#include<iostream>

int main()
{
    int dup;
    int num;
    std::cin>> num;
    dup = num;
    int reverseNumber = 0;
    while(num > 0)
    {
        int lastDigit = num % 10;
        num = num/10;
        reverseNumber = (reverseNumber * 10) + lastDigit;

    }
    std::cout<<reverseNumber<<std::endl;
    if(reverseNumber == dup) std::cout<<"number is a palindrome"<<std::endl;
    else std::cout<<"number is not a palindrome"<<std::endl;
}