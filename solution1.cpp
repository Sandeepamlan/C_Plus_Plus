#include <iostream>
#include <vector>
using namespace std;

long binarySubstring(int n, string a){
    if(n<2)
    return 0;

    long count=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            count++;
        }
    }
    count = count * (count-1);
    count=count/2;

    return count;
}

int main(){

    int c=4,b;
    string str="1111";

    b=binarySubstring(c,str);
    cout<<b;

    return 0;
}
