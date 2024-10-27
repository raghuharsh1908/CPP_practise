#include<bits/stdc++.h>
using namespace std;



int palindrome(int n){
    int result=0;
    int copy = n;
    while(n>0)
    {
        int temp = n%10;
        result = result*10 +temp;
        n=n/10;
    } 
    if(result==copy){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);

    return 0;
}