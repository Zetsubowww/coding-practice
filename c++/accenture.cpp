#include <iostream>

int main(){
    for(char c = 'A'; c <= 'C'; c++){
        switch(c)
        {
            case'A':
                std::cout<<"a";
            case'C':
                std::cout<<"c";
            case'B':
                break;
        }
    }
}





