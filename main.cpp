#include <iostream>
#include <bits/stdc++.h>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin>>n;
        bool flag=true;
        int *curr = new int[n];
        for (int j = 0; j < n; ++j) {
            std::cin>>curr[j];
        }
        std::sort(curr,curr+n);
        for (int j = 0; j < n-1; ++j) {
            if (abs(curr[j]-curr[j+1])>1){
                std::cout<<"NO"<<'\n';
                flag=false;
                break;
            }
        }
        if (flag){
            std::cout<<"YES"<<'\n';
        }
        delete[] curr;
    }
    return 0;
}