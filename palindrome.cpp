#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    string S="abba";
int start=0,end=S.size()-1;

while(start< end){
    if(S[start]!=S[end])
    return 0;

    start++;
    end--;
}
return 1;
}