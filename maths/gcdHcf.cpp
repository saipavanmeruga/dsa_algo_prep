#include <iostream>

int main()
{
    int n1, n2;
    std::cin>> n1 >> n2;
    // int gcf = 1;
    // for (int i = 1; i <= std::min(n1, n2); i++ )
    // {
    //     if(n1 % i == 0 && n2 % i == 0)
    //     {
    //         gcf = i;
    //     }
    // }
    // std::cout<< "gcf is : " << gcf << std::endl;
    

    int gcf_eff = 1;
    // more efficient method is loop from back and break the loop
    for(int i = std::min(n1, n2); i >= 1; i--)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcf_eff = i;
            break;
        }
    }
    std::cout<< "efficient gcf is: " << gcf_eff << std::endl;
    return 0;

}