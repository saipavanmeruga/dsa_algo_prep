#include<iostream>

int countnumberOfDigits(int n)
{
    // int num1 = (int)(log10(n) + 1);

    int count = 0;          
    while(n > 0)
    {
        // num1 = n % 10;
        // std::cout<<num1<<std::endl;
        count += 1;
        n = n/10;
    }
    return count;    

}
int main()
{
    int num;
    std::cout<<"Enter the number"<<std::endl;
    std::cin>>num;
    int cont = countnumberOfDigits(num);
    std::cout<<cont;
}