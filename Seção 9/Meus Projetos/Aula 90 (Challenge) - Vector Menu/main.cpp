#include <iostream>
#include <vector>

using namespace std;

int main(){
    bool exit_argument{false};

    vector<int> vec{};

    while(not exit_argument){
        cout << "=======================" << endl;
        cout << "Vector's Operator Menu" << endl;
        cout << "=======================" << endl;

        cout << endl;

        char user_choice{};

        cout << endl;

        cout << "P - Print Numbers;" << endl;
        cout << "A - Add a number;" << endl;
        cout << "M - Display mean of the numbers;" << endl;
        cout << "S - Display the smallest number;" << endl;
        cout << "L - Display the largest number;" << endl;
        cout << "Q - Quit." << endl;

        cout << "Enter your choice (uppercase or lowercase): " << endl;
        cin >> user_choice;

        cout << endl;

        switch (user_choice){
            case 'p':
            case 'P':
                {
                    cout << "=============================================================" << endl;
                    cout << "Vector: " << "[";

                    for(auto element: vec){
                        cout << element << ", ";
                    }

                    cout << "]" << endl;
                    cout << "==============================================================" << endl;

                    cout << endl;
                    
                    break;
                }

            case 'a':
            case 'A':
                {
                    int user_number{};
                    bool addition_exit{false};
                    char continue_choice{};

                    do{
                        cout << "Please, enter a number: ";
                        cin >> user_number;

                        vec.push_back(user_number);

                        cout << endl;

                        cout << "Number " << user_number << " added!" << endl;

                        cout << endl;

                        cout << "Do you want to add any more numbers? (Y/N - uppercase or lowercase)";
                        cin >> continue_choice;

                        if(continue_choice == 'y' or continue_choice == 'Y'){
                            continue;
                        }else if(continue_choice == 'n' or continue_choice == 'N'){
                            addition_exit = true;
                        }else{
                            cout << "Please, enter a valid number!";
                            cout << endl;
                        }
                    }while(not addition_exit);

                    break;

                }

            case 'm':
            case 'M':
                {
                    if(vec.size() == 0){
                        cout << "O vetor está vazio! Não é possível efetuar a média!!!" << endl;
                        break;
                    }

                    float mean{0};
                    int sum_of_elements{0};

                    for(int element: vec){
                        sum_of_elements += element;
                    }

                    mean = static_cast<float>(sum_of_elements)/vec.size();

                    cout << "==================================" << endl;
                    cout << "Mean of the vectors elements: " << mean << endl;
                    cout << "==================================" << endl;

                    cout << endl;

                    break;
                }

            case 's':
            case 'S':
                {
                    if(vec.size() == 0){
                        cout << "O vetor está vazio! Não é possível avaliar qual é o menor número!!!" << endl;
                        break;
                    }

                    int first_element{vec[0]};

                    for(int vec_element:vec){
                        if(vec_element < first_element){
                            first_element = vec_element;
                        }
                    }

                    cout << "===========================================" << endl;
                    cout << "The smallest number of the vector is: " << first_element << endl;
                    cout << "===========================================" << endl;

                    cout << endl;

                    break;
                }

            case 'l':
            case 'L':
                {
                    if(vec.size() == 0){
                        cout << "O vetor está vazio! Não é possível avaliar qual é o maior número!!!" << endl;
                        break;
                    }

                    int first_element{vec[0]};

                    for(int vec_element:vec){
                        if(vec_element > first_element){
                            first_element = vec_element;
                        }
                    }

                    cout << "===========================================" << endl;
                    cout << "The largest number of the vector is: " << first_element << endl;
                    cout << "===========================================" << endl;

                    cout << endl;

                    break;
                }

            case 'q':
            case 'Q':
            {
                    cout << "Thanks for using our software :)" << endl;
                    exit_argument = true;

                    break;
            }

            default:
                    cout << "Please, enter a valid choice!" << endl;

                    cout << endl;

        }



    }
}