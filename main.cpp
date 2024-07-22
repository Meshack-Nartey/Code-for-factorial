#include <iostream>
#include<cmath>
using namespace std;
int myfactorial();
int main()
{
    myfactorial();
    return 0;
}

int myfactorial() {
    unsigned long long factorial = 1;
    int n;
    cout<<"Input the number you want to find its factorial:\n";
    cin>>n;
    if( n <= 0) {
        cout<<"Enter a postive number!\n";
    }
    else {
        for(int i = 1; i <= n; i++){
            factorial*=i;
        }
    }
    cout<<"The factorial of "<< n << " = "<<factorial;
    return factorial;

}
