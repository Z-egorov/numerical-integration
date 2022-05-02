#include <iostream>
#include <string> 
#include <math.h>
#include "functions.cpp"


int main () {
    int type;

    std::cout << "Select the number of the function: \n 1)linear\n 2)quadratic\n";
    std::cin >> type;

    // switch (type) {
    int method, lim_a, lim_b;
    // case 1: {
    if(type == 1){
        int k, b;
        std::cout <<  "Type k, b coefficients and limits: \n";
        std::cin >> k >> b >> lim_a >> lim_b;
        function::linear linear_function(k, b, lim_a, lim_b);
        
        std::cout << "Select number of method to solve: \n 1)Newton Leibniz\n ...\n";
        std::cin >> method;
        
        if(method == 1){
            linear_function.Newton();
        }
    }
    else if (type == 2){
        int a, b, c;
        std::cout <<  "Type a, b, c coefficients and limits: \n";
        std::cin >> a >> b >> c >> lim_a >> lim_b;
        function::quadratic quadratic_function(a, b, c, lim_a, lim_b);
        
        std::cout << "Select number of method to solve: \n 1)Newton Leibniz\n ...\n";
        std::cin >> method;
        
        if(method == 1) {
            quadratic_function.Newton();
        }
    }
    // }
    return 0;
}
