#include <iostream>
#include <math.h>
// #include <string>

// f(x)dx = F(x) | = F(a) - F(b);
float Newton_leibniz(int type, int limit_a, int limit_b){
    float integral = 0.0;
    
    if (type == 1) { // Linear
        int k, b;
        
        std::cout << "Type K coefficient: \n";
        std::cin >> k;
        std::cout << "Type B coefficient: \n";
        std::cin >> b;

        integral = (k * (pow(limit_b, 2)/2) + b * limit_b) - (k * (pow(limit_a, 2)/2) + b * limit_a);
        
        return integral;
    }
    
    if(type == 2){ // Quadratic
        int a, b, c;
        
        std::cout << "Type A coefficient: \n";
        std::cin >> a;
        std::cout << "Type B coefficient: \n";
        std::cin >> b;
        std::cout << "Type C coefficient: \n";
        std::cin >> c;

        integral = (a * (pow(limit_b, 3)/3) + b * (pow(limit_b, 2)/2) + c * limit_b) - (a * (pow(limit_a, 3)/3) + b * (pow(limit_a, 2)/2) + c * limit_a);

        return integral;
        
    } 

}

int main() {
    std::cout << "numerical integration, version 0.1";
    
    std::cout << "Choose type of function: \n 1) linear, \n 2) quadratic \n "; 
    int function_type;
    std::cin >> function_type;
    int limit_a, limit_b;

    std::cout << "Enter a limit:\n";
    std::cin >> limit_a;
    std::cout << "Enter b limit:\n";
    std::cin >> limit_b;

    std::cout << "Integral of function is " << Newton_leibniz(function_type, limit_a, limit_b) << '\n';  

    return 0;
}