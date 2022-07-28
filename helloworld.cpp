#include <iostream>
#include <vector>
#include <string>

using namespace std;

int f1(int);

int main()
{
    cout << "Hello World!" << endl;
    return 0;
    // auto code runner to run
    // terminal: g++ -g helloworld.cpp & ./a.out

    int n = 10;

    int m = f1(n);
    cout << m << endl;

}

int f1(int k) {
    int t = k * 10;
    return t;
}