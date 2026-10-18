#include <iostream>
#include<iomanip>
#include <chrono>

using namespace std;

short FindNumberAlgo1(short Arr1[10], short Number)
{
    int n = 10;
    int p = -1;

    for (int i = 0; i <= n; i++)
    {
        if (Arr1[i] == Number)
        {
            p = i;
        }
    }

    return p;
}

short FindNumberAlgo2(short Arr1[10], short Number)
{
    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        if (Arr1[i] == Number)
        {
            return i;
        }
    }

    return -1;
}


int main()
{
    short Arr1[10] = { 10,20,30,40,50,60,70,80,90,100 };

    auto start = std::chrono::high_resolution_clock::now();

    cout << FindNumberAlgo1(Arr1, 30) << endl;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time1 is : " << duration.count() << " s" << std::endl;

    cout << "\n--------------------------------------------------------------------\n";
    auto start2 = std::chrono::high_resolution_clock::now();
    cout << FindNumberAlgo2(Arr1, 30) << endl;
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "Time2 is : " << duration2.count() << " s" << std::endl;

    return 0;

}