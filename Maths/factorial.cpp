#include<bits/stdc++.h>
using namespace std;
 
 
int fact(int n){
    int temp=1;

    while(n!=0){
        temp = temp*n;
        n-=1;
    }
    return temp;
} 

int factorial(int n){
    int temp =1;

    for(int i =2;i<=n;i++)
    {                   // this is better than the recursive solutoin as the recursive soltuion has extra-overhead.
        temp = temp*i;
    }

    return temp;
}

int trailingzeroes(int n ){
    int res=0;
    for(int i =5;i<=n;i=i*5)
    {
        res = res+n/i;
    }
    return res;
}

int factorial2(int n ){
    if(n==0)   // recursive solution 
    return 1;

    return n*factorial2(n-1);
}
 
int main()
{
int n;
cin>>n;
cout<<factorial2(n);
 return 0;
}