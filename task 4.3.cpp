///finding nth fibonacci nbers
///1 1 2 3 5 6 8 14.....................
#include <iostream>
using namespace std;
int fibo(int);
int main()

{
    int n;
    int result;
    cout<<"Enter the nth nber in fibonacci series: ";
  cin>>n;
    if (n < 0)
    {
     cout<<"Fibonacci of negative nber is not possible.\n";
    }
    else
    {
        result = fibo(n);
        cout<<"The n th number is "<<result<<endl;
    }
    return 0;
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(n - 1) + fibo(n - 2));
    }

}
