#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec{1,2};


    //Calculo do número de combinações:
    // int result{0};
    // int s = vec.size();
    // int s_factorial{0};
    // int factorial_n_minus_p{0};
    // int binomial_multiplication{1};
    // int combination{500};
    
    
    // for(int i{1}; i < s ; i++){
    //     binomial_multiplication *= (s - i);
    // }
    
    // s_factorial = s * binomial_multiplication;

    // binomial_multiplication = 1;

    // for(int j{1}; j < (s - 2); j++){
    //     binomial_multiplication *= ((s - 2) -j);
    // }

    // factorial_n_minus_p = (s - 2) * binomial_multiplication;

    // combination = (s_factorial)/(2*factorial_n_minus_p);

    //========================================================// 

    int result{0};

    if((vec.size() != 0) and (vec.size() != 1)){
        for(int i{0}; i <= (vec.size() - 1); i++){
            for( int j{0}; j <= (vec.size() - 1); j++){
                if(i == j){
                    continue;
                }else{
                    result += vec[i] * vec[j];
                }
            }
        }
        result /= 2;
    }
    cout << result;

    return 0;
}