
/*ex- s1="abc", s2="egf" 

result -> "a e b g c f"

ex2- s1="abcsko", s2="egf" 

result -> "a e b g c f sko" */

#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s1="abc", s2="efg";
    string s3;
    int i=0,j=0;

    while (i<s1.size() && j<s2.size())
    {
    s3= s3 + s1[i];
    s3 = s3 +s2[j];
    i++,j++;
    }
    while (i<s1.size()){
     s3= s3 + s1[i];
     i++;
    }
    while (j<s2.size()){
    s3 = s3 +s2[j];
    j++;
    }
    cout<<s3;

    return 0;
}