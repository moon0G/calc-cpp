#include <iostream>
#include <vector>
#include "calc.h"

int do_op(int op, std::vector<int> args) {
    int sum;
    
    switch(op){
        case 1: 
            sum = add(args);
            break;
        case 2: 
            sum = sub(args);
            break;
    }


    return sum;
}

int add(std::vector<int> args) {
    int sum=0;
    for(int element: args) {
        sum+=element;
    }    
    return sum;
}

int sub(std::vector<int> args) {
    int sum=args.front();
    args.erase(args.begin());
    for (int element: args) {
        sum-=element;
    }
    return sum;
}
