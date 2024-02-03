#include <iostream>

int main()
{
    int num;
    std::cin>> num;
    int count = 0;
    int dup = num;
    int sum_ = 0;
    while(num > 0)
    {
        int lastDigit = num % 10;
        count += 1;
        num = num/10;
    }
    int temp = dup;
    // std::cout<<"count is"<<count;
    while(dup > 0)
    {
        int lastDigit = dup % 10;
        sum_ += (int) std::pow(lastDigit, count);
        dup = dup/10;
    }
    std::cout<<sum_;
    if(sum_== temp) std::cout<<"Number is a armstrong number"<<std::endl;
    else std::cout<<"Number is not a armstrong number"<<std::endl;

}