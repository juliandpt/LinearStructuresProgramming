#include <iostream>
using namespace std;

int fibonacci(int k){
    if (k==0 || k==1){
        return 1;
    }else{
        return fibonacci(k-1)+fibonacci(k-2);
    }
}

int main() {
    int j;
    cin>>j;
    cout<<fibonacci(j);
}