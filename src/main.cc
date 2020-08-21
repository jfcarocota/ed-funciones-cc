#include<iostream>

void PrintHello(const char* charArr)
{
    std::cout << charArr;
}

int Add(int a, int b)
{
    return a + b;
}

void PrintArrStr(const char* arrString)
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << arrString + i << std::endl;
    }
}

int main()
{
    //[0][1][2]...
    //int intArr[3]{4, 100, 42};

    //std::cout << intArr << std::endl;

    //char character1{96};

    //char charArr[]{'h', 'e', 'l', 'l', 'o'};
    //char charArr2[]{"hello"};

    const char* myString{"Hello"};

    //PrintHello(myString);

    /*for(int i = 0; i < 5; i++)
    {
        std::cout << charArr2 + i << std::endl;
    }*/

    PrintArrStr(myString);

    //std::cout << "Add: " << Add(1, 2) << std::endl;
    std::cin.get();

    return 0;
}