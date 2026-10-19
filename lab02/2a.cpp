#include <iostream>

using namespace std;

int main()
{
    char znak;
    cout<<"Podaj znak: ";
    cin>>znak;
    cout<<"Znak: "<<znak<<endl;
    cout<<"Kod: "<<dec<<static_cast<int>(znak)<<" "<<showbase<<hex<<"("<<static_cast<int>(znak)<<")";
    
    return 0;
}