#include <iostream>
using namespace std;

void read_bytes(unsigned char* ptr, int len) {
    for(int i=0;i<len;i++,ptr++) {
        cout<<(short)(*ptr)<<endl;
        
    }
}

int main()
{
    short i=-2;
    read_bytes((unsigned char *)&i, 2);
    
    return 0;
}
