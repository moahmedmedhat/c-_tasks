
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    
    char letter =' ';
    cout << "please enter the letter \n";
    cin>>letter;
    //a, e, i, o, u 
    if (!isalpha(letter))
    {
        cout << "the input is unvalid" << endl;
    }
    else if(letter=='a' || letter=='e' ||letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
        cout << "the letter is vowel\n" ;

    }else
    {
        cout<<"the letter isnt vowel\n";
    }

    return 0;
}
