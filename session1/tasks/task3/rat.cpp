#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int leg_a=0 , lea_b=0 ,hypotenuse=0 ;
    cout<<"please enter leg_a  and leg_b to get the hypotenuse ";
    cin>>leg_a>>lea_b;
    hypotenuse=sqrt((leg_a*leg_a) + (lea_b * lea_b)) ;
    cout << "the hypotenuse is " <<hypotenuse<< endl;
    return 0;

} 