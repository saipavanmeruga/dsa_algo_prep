/*
RULES FOR SOLVING PATTERN QUESTIONS

1. First for loop i.e., outer for loop -- for outer for count the number of lines required in the pattern
2. Second for loop i.e., inner for loop(s) -- focus on the columns and connect them some how to the rows
3. print the "*" inside the inner for loop
4. look for symmetry (optional)
*/

#include <iostream>
void pattern1(int n)
{
// Pattern 1
// ****
// ****
// ****

for (int i = 0; i < n; i ++)
{
    for (int j = 0; j< n; j++)
    {
        std::cout<<"* ";
    }
    std::cout<< std::endl;
}
}

void pattern2(int n)
{
//Pattern 2
// *
// **
// ***
// ****
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j ++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}

void pattern3(int n)
{
//Pattern 3
// 1
// 12
// 123
// 1234
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j ++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}

void pattern4(int n)
{
//Pattern 4
// 1
// 22
// 333
// 4444
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j ++)
        {
            std::cout<<i;
        }
        std::cout<<std::endl;
    }
}

void pattern5(int n)
{
//Pattern 5
// ****
// ***
// **
// *
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j ++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}

void pattern6(int n)
{
//Pattern 6
// 1234
// 123
// 12
// 1
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j ++)
        {
            std::cout<< j;
        }
        std::cout<<std::endl;
    }
}
void pattern7(int n)
{
// Pattern 7
//     *
//    ***
//   *****
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n-i-1; j++)
    {
        std::cout<<" ";
    }
    for(int j = 0; j < 2 * i + 1; j++)
    {
        std::cout<<"*";
    }
    for(int j = 0; j < n-i-1; j++ )
    {
        std::cout<<" ";
    }
    std::cout<<std::endl;
}
}
void pattern8(int n)
{
// Pattern 8
//   *****
//    ***
//     *
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < i; j++)
    {
        std::cout<<" ";
    }
    for(int j = 0; j < 2*n - (2*i + 1); j++)
    {
        std::cout<<"*";
    }
    for(int j = 0; j < i; j++ )
    {
        std::cout<<" ";
    }
    std::cout<<std::endl;
}
}
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
    //Pattern 10
    //*
    //**
    //***
    //**
    //*
    int stars = 0;
    for (int i = 1 ; i <= 2*n - 1; i++)
    {
        if(i > n) 
        { 
            stars =  2*n - i;
        }
        else{
            stars = i;
        }
        for (int j = 0; j < stars; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

}
void pattern11(int n)
{
    int start = 0;
    for(int i =0; i < n; i++)
    {
        if(i%2==0){start = 1;}
        else {start = 0;}
        for(int j = 0; j <= i; j++)
        {
            std::cout<<start<<" ";
            start = 1 - start;
        }
        std::cout<<std::endl;
    }
}
void pattern12(int n)
{
int space = 2*(n - 1);
for (int i = 1; i<=n;i++)
{

    //num
    for(int j = 1; j <= i; j++)
    {
        std::cout<<j;
    }
    //space
    for(int j = 0; j < space; j++)
    {
        std::cout<<" ";
    }
    //num
    for(int j = i; j >= 1; j--)
    {
        std::cout<<j;
    }
    std::cout<<std::endl;
    space = space - 2;
}
}
void pattern13(int n)
{
int num = 1;
for(int i = 1; i<=n; i++)
{
    for(int j = 0; j <= i; j++)
    {
        std::cout<<num<<" ";
        num = num + 1;
    }
    std::cout<<std::endl;
}
}
void pattern14(int n)
{
for(int i = 1; i <= n; i++)
{
    for(char j = 'A'; j < 'A' + i; j++)
    {
        std::cout<<j;
    }
    std::cout<<std::endl;
}
}
void pattern15(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(char j = 'A'; j <= 'A' + (n - i); j++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}
void pattern16(int n)
{
    char out_ = 'A';
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++ )
        {
            std::cout<<out_;
        }
        out_ = out_ + 1;
        std::cout<<std::endl;
    }
}
void pattern17(int n)
{
    for(int i = 0; i < n; i++)
    {

        //space
        for(int j=0; j < n - i - 1; j++)
        {
            std::cout<<" ";
        }

        //char
        char out_ = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j<=2*i + 1; j++)
        {
            std::cout<< out_ ;
            if(j <= breakpoint) out_ ++;
            else out_ --;
            // out_ = out_ +  j;
        }

        //space
        for(int j=0; j < n - i - 1; j++)
        {
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void pattern18(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'E';
        for(char j = 'E' - i; j<='E'; j++)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}
void pattern19(int n)
{
    int iniS = 0;
    for(int i=0;i<n;i++)
    {

    //star
    for(int j=0; j<n-i;j++)
    {
        std::cout<<"*";
    }
    //space
    for(int j=0; j<iniS; j++)
    {
        std::cout<<" ";
    }
    //star
    for(int j=0; j<n-i;j++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;
    iniS += 2;
    }


     iniS = (2*n - 2);
    for(int i=0;i<n;i++)
    {

    //star
    for(int j=0; j<i+1;j++)
    {
        std::cout<<"*";
    }
    //space
    for(int j=0; j<iniS; j++)
    {
        std::cout<<" ";
    }
    //star
    for(int j=0; j<i+1;j++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;
    iniS -= 2;
    }
}
void pattern20(int n)
{
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n-1; i++)
    {
        //stars
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <=stars; j++)
        {
            std::cout<<"*";
        }
        //spaces
        for(int j=1; j<=spaces; j++)
        {

            std::cout<<" ";
        }
        //stars
        for(int j=1; j<=stars; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }
}

void pattern21(int n)
{
for(int i = 0; i<n; i++)
{
    for(int j = 0; j<n; j++)
    {
        if(i==0 || j== 0 || j == n - 1 || i == n - 1)
        {
            std::cout<<"*";
        }
        else std::cout<<" ";
    }
    std::cout<<std::endl;
}
}

void pattern22(int n)
{
for(int i = 0; i < 2*n - 1; i++)
{
    for(int j = 0; j < 2*n - 1; j++)
    {
        int top = i;
        int left = j;
        int right = (2*n - 2) - j;
        int bottom = (2*n - 2) - i;
        
        std::cout<<(n - std::min(std::min(top, bottom), std::min(left, right)));
    }
    std::cout<<std::endl;
}
}
int main()
{
    int n;
   std::cin>> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    pattern22(n);
    return 0;
}