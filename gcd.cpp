#include<bits/stdc++.h>
using namespace std;
 
 


int gcd(int a, int b){
    int res = min(a,b);

    while(res!=0){
        if(a%res==0 && b%res==0)
        break;
        else
        res--;  // Time complexty = theta(min(a,b))
    }
    return res;
}

int euclid_gcd(int a, int b){
    while(a!=b){
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;

}

int gcd_optimized(int a, int b){
    if(b==0)
    return a;
    else
    return gcd_optimized(b, a%b);
}

int lcm_naive_solution(int a, int b){
    int res=max(a,b);
    
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        else{
            res++;
        }
    }
    return res;

}

int lcm(int a, int b){
    return (a*b)/gcd_optimized(a,b);

} 

bool check_prime(int n){
    if(n==1)
    return false;
    

    for(int i=0;i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

bool check_for_prime(int n ){
    
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    cout<<endl;
    cout<<endl;
 return 0;
}