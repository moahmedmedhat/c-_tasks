#include <iostream>

using namespace std;

int main(){
    char a=0;
    
    for (int i = a; i < 128; i++)
    {
        if (i==127)
        {
            cout << "del" <<" "<<i<< endl;
            break;
        }
        cout << (char) i <<" "<<i<< endl;
    }
}