#include<iostream>

int main()
{
    int num;
    std::cin>>num;
    
    int count = 0;

    //brute force approach
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count += 1;
        }
    }
    if(count == 2) std::cout<<"prime number"<<std::endl;
    else std::cout<<"not a prime number"<<std::endl;

    int count = 0;
    // sqrt method
    for(int i = 1; i*i <=num; i++)
    {
        if(num % i == 0)
        {
            count ++;
            if((num/i) != i)
            {
                count ++;
            }
        }
    }
    if(count == 2) std::cout<<"prime number"<<std::endl;
    else std::cout<<"not a prime number"<<std::endl;

}