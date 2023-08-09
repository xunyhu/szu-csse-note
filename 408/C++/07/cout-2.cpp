#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
    int n = 65335, m = 20;
    //输出10、16、8进制
    cout<<"1）"<<n<<"="<<hex<<n<<"="<<oct<<n<<endl;

    //setbase输出10、16、8进制
    cout<<"2）"<<setbase(10)<<m<<"="<<setbase(16)<<m<<"="<<setbase(8)<<m<<endl;

    //输出宽度12，不足以0填补
    cout<<"3）"<<setw(12)<<setfill('0')<<m<<endl;
    return 0;
}