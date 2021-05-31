// const modifier.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;
void print_array(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {

        data[i]++;
        cout << data[i] << " ";
    }
    cout << "\n";
}
using namespace std;
int main()
{
    int data[] = { 1,2,3 };
    print_array(data, 3);
    cout << data[0];
    
    return 0;
}
