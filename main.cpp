#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string stroka;
    getline(cin,stroka);
    int x[10];
    istringstream stream(stroka);
    bool failure=false;
    for(int i = 0;i < 10;++i){
        if(!(stream >> x[i])){
            failure=true;
            break;
             }
    }
    if(!failure) {
        int max=x[0];
        for(int i=1;i<10;++i){
            if(x[i]>max){
                max=x[i];
            }
        }
        cout<<max<<endl;
    }
    else{
        cout<<"An error has occurred while reading numbers"<<endl;
    }
    return 0;
}
