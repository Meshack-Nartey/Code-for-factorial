#include <iostream>
#include<cmath>
using namespace std;
//function declaration.
int myfactorial();


int main()
{
    //calling the function
    myfactorial();
    return 0;
}



//function for the factorial.

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
