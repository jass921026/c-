#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count = 0;
    cin>>n;
    while(n>1){
        cout<<n<<endl;
        count += 1;
        if(n%2==0){
            n = n/2;
        } else{
            n = 3*n+1;
        }
    }
    cout<<n<<endl;
    cout<<"count:"<<count+1<<endl;
    return 0;
}
