#include <iostream>

using namespace std;


//FOR PASSING BY POINTER
void change(int* p){
    *p = 100;
}

//FOR RECURSION TEST
int sum(int k){
    if(k > 0){
        cout << "Going down: " << k << "\n";
        int result = k + sum(k - 1); //ONE: For every call of sum(x) it WAITS for sum(y..) to complete
        cout << "Going up: " << k << " -> " << result << "\n"; //THREE: From sum(0) adds the values of k in sum(1..10)
        return result;
    }
    else{
        cout<<"Done\n";
        return 0; //TWO: Once it reaches sum(0), returns 0 which will then be used by sum(1..10)
    }
}

int main(){
    //POINTER ARITHMETIC & POINTERS AND ARRAYS
    int arr[] = {10, 20, 30};
    int* p = arr;

    cout<<"POINTER ARITHMETIC==================================\n";
    cout<<p<<"\n"; //memory address of arr[0]

    cout<<p + 1<<"\n"; //memory address of arr[1]

    cout<<*p<<"\n"; //arr[0] = 10

    cout<<*p + 1<<"\n"; //(arr[0] = 10) + 1 = 11

    cout<<*(p + 1)<<"\n"; //arr[1] = 20

    cout<<endl;

    //POINTERS AND ARRAYS
    int arrTwo[] = {1, 2, 3};

    cout<<"POINTERS AND ARRAYS=================================\n";
    cout<<arrTwo[1]<<"\n";
    cout<<*arrTwo<<"\n"; //by default *arrTwo = arrTwo[0] = 1
    cout<<*(arrTwo + 1)<<"\n"; //same as *(p + 1) | *(arrTwo + 1) = arrTwo[1] = 2

    cout<<endl;

    //PASSING BY POINTER
    cout<<"PASSING BY POINTER==================================\n";

    int pbp = 5; //pbp starts as 5
    change(&pbp);

    cout<<pbp<<"\n\n"; //through modifying pointer value pbp -> 100

    //RECURSION TEST
    cout<<"RECURSION===========================================\n";

    int recursion = sum(10);
    cout<<recursion<<"\n";
    return 0;
}