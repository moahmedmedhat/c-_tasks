#include <iostream>
#include <string>

using namespace std;

int main(){
    int num=0 , sum=0;
    cin>>num;

    string m=to_string(abs(num)); //abs for negtive numbers


    for(auto digit : m){
        sum+=digit-'0';
    }
    cout << "sum of digits is "<<sum << endl;
}