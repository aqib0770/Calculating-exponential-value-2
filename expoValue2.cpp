#include<iostream>
using namespace std;

int recur(int p,int q){
    if(q == 0)return 1;
    if(q % 2 == 0){
        int result=recur(p,q/2);
        return result*result;
    }
    else {
        int result=recur(p,(q-1)/2);
        return p*result*result;
    }
}
int main(){
    int res=recur(3,5);
    cout<<res;
    return 0;
}
