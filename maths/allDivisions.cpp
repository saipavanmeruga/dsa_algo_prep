#include<iostream>

int main()
{
    int num;
    std::cin>> num;

    // for(int i=1; i<=num; i++)
    // {
    //     if(num % i == 0)
    //     {
    //         std::cout<<i;
    //     }
    // }
// EFFICIENT SQRT METHOD
    std::vector<int> factors;

    for(int i=1; i<=std::sqrt(num); i++) // instead of sqrt(num) we can i*i <= n
    {
        if(num % i == 0)
        {
            // std::cout<<i<<std::endl;
            factors.push_back(i);
            if(num/i != i)
            {
                // std::cout<<num/i<<std::endl;
                factors.push_back(num/i);
            }
        }
    }
    std::sort(factors.begin(), factors.end());

    for(auto it : factors)
    {
        std::cout<<it<<std::endl;
    }
}