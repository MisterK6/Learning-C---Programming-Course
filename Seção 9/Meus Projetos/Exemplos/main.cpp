#include <iostream>
#include <vector>

using namespace std;

// int main(){
//     char letter {};
//     switch(letter){
//         case 'a':
//         case 'A':
//             cout << "letter A" << endl;

//         case 'b':
//         case 'B':
//         {
//             char confirm {'C'};

//             cout << confirm << endl;
//         }
        
//     }
// }

int main(){

    vector<int> vec(100, 1);
    vec.push_back(500);
    vec.push_back(-99);

    int count{0};
    int index{0};
    
    while(index < vec.size()){
        if(vec[index] != -99){
            count++;
            index += 1;
        }
        
        else
            break;
    }

    cout << count << endl;

    return 0;
}