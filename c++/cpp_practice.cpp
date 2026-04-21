#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int getValue(char c){ //FOR SELF TEST 5
    if(c == 'I'){return 1;}
    if(c == 'V'){return 5;}
    if(c == 'X'){return 10;}
    if(c == 'L'){return 50;}
    if(c == 'C'){return 100;}
    if(c == 'D'){return 500;}
    if(c == 'M'){return 1000;}
    return 0;
}

int main(){
    /**
    //SELF TEST 1: Print Pyramid
    int i,j,k;
    int length = 5;
    int n = 1;

    for(i = length; i >= 1; i--){
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

    /**
    //NUMBER 1: Welcome Text on Separate Line
    cout<<"Welcome Text on a Separate Line:"<<endl;
    cout<<"________________________________"<<endl;
    cout<<"Welcome Text"<<endl;
    cout<<"Separate Line"<<endl;
    */

    /**
    //NUMBER 2: Sum of Two Numbers
    int firstNum, secondNum, sum;

    cout<<"What's the first number?: ";
    cin>>firstNum;
    
    cout<<"What's the second number?: ";
    cin>>secondNum;

    sum = firstNum + secondNum;

    cout<<"The sum of "<<firstNum<<" and "<<secondNum<<" is "<<sum;
     */

    /*
    //NUMBER 3: Size of Fundamental Data Types
    cout<<"Find the Size of Fundamental Data Types:\n";
    cout<<"----------------------------------------\n";
    cout<<"The size of (char) is: "<<sizeof(char)<<" bytes\n";
    cout<<"The size of (short) is: "<<sizeof(short)<<" bytes\n";
    cout<<"The size of (int) is: "<<sizeof(int)<<" bytes\n";
    cout<<"The size of (long) is: "<<sizeof(long)<<" bytes\n";
    cout<<"The size of (long long) is: "<<sizeof(long long)<<" bytes\n";
    cout<<"The size of (float) is: "<<sizeof(float)<<" bytes\n";
    cout<<"The size of (double) is: "<<sizeof(double)<<" bytes\n";
    cout<<"The size of (long double) is: "<<sizeof(long double)<<" bytes\n";
    cout<<"The size of (bool) is: "<<sizeof(bool)<<" bytes\n";
     

    
    //NUMBER 4: Limits of Integer Data Types
    cout << "\n\n Check the upper and lower limits of integer :\n"; 
	cout << "--------------------------------------------------\n";

	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
	cout << " The minimum limit of long long data type :            " << LLONG_MIN << endl;
	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
    cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
    cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;

    cout << endl;
    

    
    //NUMBER 5: Check Primitive Value Limits
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n"; 
	cout << "--------------------------------------------------------------------\n";

    char gender = 'F';             // char is single-quoted
    bool isEmployed = true;         // true(non-zero) or false(0)
    unsigned short numOfsons = 2;  // [0, 255]
    short yearOfAppt = 2009;       // [-32767, 32768]
    unsigned int YearlyPackage = 1500000; // [0, 4294967295]
    double height = 79.48;         // With fractional part
    float gpa = 4.69f;             // Need suffix 'f' for float
    long totalDrawan = 12047235L;  // Suffix 'L' for long
    long long balance = 995324987LL;// Need suffix 'LL' for long long int  

    cout << " The Gender is : " << gender << endl;
    cout << " Is she married? : " << isEmployed << endl;
    cout << " Number of sons she has : " << numOfsons << endl;
    cout << " Year of her appointment : " << yearOfAppt << endl;
    cout << " Salary for a year : " << YearlyPackage << endl;
    cout << " Height is : " << height << endl;
    cout << " GPA is " << gpa << endl;
    cout << " Salary drawn up to : " << totalDrawan << endl;
    cout << " Balance till : " << balance << endl;
    */

    /*
    //NUMBER 6: Pre and Post Increment/Decrement
    int num = 57; 
    cout << "\n\n Display the operation of pre and post increment and decrement :\n"; 
    cout << "--------------------------------------------------------------------\n"; 
    cout <<" The number is : " << num << endl; 
    num++; // Post-incrementing 'num' by 1
    cout <<" After post increment by 1 (num++) the number is : " << num << endl; 
    ++num; // Pre-incrementing 'num' by 1
    cout <<" After pre increment by 1 (++num) the number is : " << num << endl;
    num = num + 1; // Increasing 'num' by 1
    cout <<" After increasing by 1 (num + 1) the number is : " << num << endl;
    num--; // Post-decrementing 'num' by 1
    cout <<" After post decrement by 1 (num--) the number is : " << num << endl; 
    --num; // Pre-decrementing 'num' by 1
    cout <<" After pre decrement by 1 (--num)the number is : " << num << endl; 
    num = num - 1; // Decreasing 'num' by 1
    cout <<" After decreasing by 1 (num - 1) the number is : " << num << endl; 
    cout << endl;
     */

    //PRE INCREMENT/DECREMENT: ++var | --var = ADDS FIRST THEN USE VAR 
    //POST INCREMENT/DECREMENT: var++ | var-- = USE VAR THEN ADD

    /*
    //NUMBER7: Swap Two Numbers
    int numOne, numTwo, temp;
    
    cout<<"What is the first number?: ";
    cin>>numOne;
    cout<<"What is the second number?: ";
    cin>>numTwo;

    temp = numOne;
    numOne = numTwo;
    numTwo = temp;

    cout<<"The first number is now "<<numOne<<". The second number is now "<<numTwo;
     */

    /* 
    //SELF TEST 2: Sum of All Even Numbers
    int input;
    int temp = 0;

    cout<<"What number?: ";
    cin>>input;

    for(int i = 1; i <= input; i++){
        if(i % 2 == 0){
            temp = temp + i;
        }
        else{
            continue;
        }
    }
    cout<<"The sum of all even numbers are "<<temp;
    */

    /*
    //SELF TEST 3: Get the Highest Number from User
    int input, length;
    int temp = 0;

    cout<<"How many numbers?: ";
    cin>>length;

    
    for(int i = 0; i < length; i++){
        cout<<"Enter the numbers: ";
        cin>>input;

        temp = max(temp, input);
    }

    cout<<"The highest number you've given is: "<<temp;
    */

    /*
    //SELF TEST 4: Number Palindrome

    int input,startingNum,temp;
    int finalNum = 0;
    int multiple = 10;
    bool convert = false;

    cout<<"What number?: ";
    cin>>input;

    if(input >= 0 && input < multiple){
        cout<<"This number is a palindrome.";
    }
    else{
        temp = input;
        while(true){
            temp = input / multiple;
            if(temp > 9){
                multiple = multiple * 10;
                continue;
            }
            else{
                break;
            }
        }

        startingNum = input;
        while(convert == false){
            finalNum = finalNum + (multiple * (startingNum % 10));
            startingNum = startingNum / 10;
            multiple = multiple / 10;

            if(startingNum <= 0){
                convert = true;
            }
            else{
                continue;
            }
        }

        if(finalNum == input){
        cout<<"This number is a palindrome.";
        }
        else{
            cout<<"This number is NOT a palindrome.";
        }
    }
    */

    /*
    //SELF TEST 5: Roman Numeral Conversion
    string input;
    int convertedNum = 0;

    cout<<"What's the Roman Numeral?: ";
    cin>>input;

    for(int i = 0; i < input.length(); i++){
        int current = getValue(input[i]);
        cout<<"Current: "<<current<<"\n";
        
        if(i + 1 >= input.length()){
            convertedNum += current;
            break;
        }

        int next = getValue(input[i+1]);
        cout<<"Next: "<<next<<"\n";

        if(current < next){
            convertedNum -= current;
        }
        else{
            convertedNum += current;
        }

        cout<<"The converted number so far is: "<<convertedNum<<"\n";

    }

    cout<<"The decimal equivalent of "<<input<<" is: "<<convertedNum;
    */

    /*
    //SELF TEST 6: Longest Common Prefix ("flower","flow","flight")
    string strs[] = {"dog","racecar","car"};
    string cpf, temp;
    int strsLen = sizeof(strs) / sizeof(strs[0]);

    for(int i = 1; i < strsLen; i++){
        for(int j = 0; j < strs[0].length(); j++){
            if(j == strs[i].length()){
                break;
            }
            else{
                if(strs[0][j] == strs[i][j]){
                    temp += strs[0][j];
                }
                else{
                    continue;
                }
            } 
        }
        cpf = temp;
        temp = "";
    }

    if(cpf == ""){
        cout<<"There is no common prefix between the words.";
    }
    else cout<<"The commnon prefix is: "<<cpf;
    */

    return 0;
}