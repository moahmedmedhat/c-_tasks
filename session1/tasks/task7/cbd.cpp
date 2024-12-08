#include <bitset>
#include <iostream>


using namespace std;

int main(){
    int b=0;
    string binary;
    cout<<"please enter the number to convert it to binary ";
    cin>>b;
    bitset<8> c(b);
    cout<<"the binary is "<<c<<"\n";
    cout << "Enter a binary number: ";
    cin >> binary;
    bitset<32> bits(binary);
    unsigned long decimal=bits.to_ulong();
    cout<<"the decimal is "<<decimal<<endl;


}