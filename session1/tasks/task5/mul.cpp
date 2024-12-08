#include <iostream>

using namespace std;

int main(){
    int num =0 , range=12;
    cout<<"please enter the number for multiplication table ";
    cin>>num;
    cout<<"please ebter the range of the table ";
    cin>>range;
    for (int i = 1; i <= range; i++)
    {
        cout<<num<<"x"<<i<<"="<<num * i << endl;
    }
    return 0;
}