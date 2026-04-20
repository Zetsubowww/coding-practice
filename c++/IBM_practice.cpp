#include <iostream>
#include <string>

using namespace std;



int main(){
    /*
    int yearOne, yearTwo, leapYear, i;
    

    cout<<"What's the starting year?"<<endl;
    cin>>yearOne;

    cout<<"What's the ending year?"<<endl;
    cin>>yearTwo;

    for(i = yearOne; i < yearTwo; i++){
        if(i % 4 == 0){
            leapYear += 1;
        }
        else{
            continue;
        }
    }
    
    cout<<"There are "<<leapYear<<" leap years between"<<yearOne<<" and "<<yearTwo;
    */

    /** 
    int i,j,k;
    int width = 5;
    int n = 1;

    for(i = width; i >= 1; i--){
        for(j = 1; j < i; j++){
            cout<<" ";
        }
        for(k = j + n; k > j; k--){
            cout<<"*";
        }
        n += 2;
        cout<<endl;
    }
    */

    

    int x = 10;
    cout<<x++<<" "<<x++<<" "<<++x<<" "<<++x<<"\n";
    cout<<x;

    

    return 0;
}



    
