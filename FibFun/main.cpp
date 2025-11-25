//
//  main.cpp
//  FibFun
//
//  Created by George Hawes on 08/11/2025.
//

#include <iostream>

long long fib(int x, std::vector<long long>& memo){
    if (x <= 1){
        return x;
    }
    if(memo[x] != -1){
        return memo[x];
    }
    memo[x] = fib(x-1, memo) + fib(x-2, memo);
    return memo[x];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 8;
    std::vector<long long> memo(x+1, -1);
    std::cout << fib(x, memo) << std::endl;
    std::cout << "fib(x, memo)" << std::endl;
    return EXIT_SUCCESS;
}


