#include<iostream>

using namespace std;

int N;

int f(int A)
{
    int sum = 0;
    for(int i = 1; i <= A; i++) {
        if(A % i == 0)
            sum += i;
    }

    return sum;
}

int g(int x)
{
    int sum = 0;
    for(int i = 1; i <= N; i++)
        sum += f(i);
    
    return sum;
}

int main()
{
    cin >> N;
    g(N);
}