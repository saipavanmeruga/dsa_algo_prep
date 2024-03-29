#include<iostream>

int main()
{
    /*
    This GCD Algorithm based on the modulo logic,
    The fundamental logic is to use the remainder operator %
    */
    int a, b;
    std::cout<<"enter two numbers"<<std::endl;
    std::cin>> a >> b;

    while(a > 0 && b > 0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) 
    {   
    std::cout<<"gcd is: " << b << std::endl;
    return b;
    }
    std::cout<<"gcd is: " << a << std::endl;
    return a;
}