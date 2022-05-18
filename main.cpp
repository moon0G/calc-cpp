#include <iostream>
#include <vector>
#include <string>
#include "calc.h"

int main() {
    int op, num=1;
    std::vector<int> a;

    std::cout<<"Operation: ";
    std::cin>>op;
    std::cout<<"\n";

    std::cout<<"The first number will be affected (by the operator) with the numbers entered after it\n(n[0]=1, n[1]=1, n[2]=1 therefore 1-1-1 = -1)\n(Inputing 0 will stop input)\nInput Numbers: "<<'\n';   
    std::cin>>num;
    while(num!=0) {
        a.push_back(num);
        std::cin>>num;
    }
    int ans = do_op(op, a);
    std::cout<<ans<<'\n';
}


