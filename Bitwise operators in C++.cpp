// SAMEER YASIN
// 24070124092
// ENTC B1
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE FIRST NUMBER a :"<<endl;
    cin>>a;
    cout<<"ENTER THE FIRST NUMBER b :"<<endl;
    cin>>b;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_not=~b;
    int leftshift=a<<2;
    int rightshift=3>>a;
    cout<<"AND :"<<bitwise_and<<endl;
    cout<<"OR :"<<bitwise_or<<endl;
    cout<<"XOR :"<<bitwise_xor<<endl;
    cout<<"NOT :"<<bitwise_not<<endl;
    cout<<"leftshift :"<<leftshift<<endl;
    cout<<"rightshift :"<<rightshift<<endl;
    return 0;
}
/*Sample Output:
ENTER THE FIRST NUMBER a :
6
ENTER THE FIRST NUMBER b :
12
AND :4
OR :14
XOR :10
NOT :-13
leftshift :24
rightshift :0
*/
