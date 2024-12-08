#include <iostream>
#include <algorithm>
using namespace std;
void my_max(int x,int y, int z){
    int max_num=0;
    if (x>y&&x>z)
    {
        cout<<"the max num is "<<x<<"\n";        
    }else if (y>z) {
        cout<<"the max num is "<<y<<"\n";        
    }else {
        cout<<"the max num is "<<z<<"\n";        
    }
}
int main(){
    int x=0, y=0,z=0 , max_num=0;
    cout<<"please enter three values to get the max ";
    cin>>x>>y>>z;
    //first way
    max_num=max({x,y,z});
    cout<<"max num is "<<max_num<<"\n";
    //secound way
    my_max( x, y, z);
    

}