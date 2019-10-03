#include <iostream>
using namespace std;

int factorial(x){
    if (x==0){                  // base case
        return 1;
    }
    return x*factorial(x-1);
}

int main()
{
    factorial(5);
    return 0;
}
