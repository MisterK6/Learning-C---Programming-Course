#include <iostream>
#include <vector>

using namespace std;

int main(){
    //declare 2 emoty vectors, vector1 and vector2:
    vector<int> vector1;
    vector<int> vector2;

    //Add 10 and 20 to vector1 dynamically using push_back:
    vector1.push_back(10);
    vector1.push_back(20);

    //Display the elements and size of vector1 using at() and size() methods, respectively:
    cout << "Os elementos do vector1: " << vector1.at(0) << " e " << vector1.at(1) << endl;
    cout << "O tamanho do vector1: " << vector1.size() << endl;

    //Add 100 and 200 to vector2 dynamically using push_back:
    vector2.push_back(100);
    vector2.push_back(200);

    cout << endl;

    //Display the elements and size of vector2 using at() and size() methods, respectively:
    cout << "Os elementos do vector2: " << vector2.at(0) << " e " << vector2.at(1) << endl;
    cout << "O tamanho do vector2: " << vector2.size() << endl;

    //Declare an empty 2D vector called vector_2d:
    vector<vector<int>> vector_2d;

    cout << endl;

    //Add vector1 and vector2 to vector_2d dynamically using push_back:
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display the elements of vector_2d using at() method:
    cout << "Os elementos do primeiro vetor de vector_2d: " << vector_2d.at(0).at(0) << " e " << vector_2d.at(0).at(1) << endl;
    cout << "Os elementos do segundo vetor de vector_2d: " << vector_2d.at(1).at(0) << " e " << vector_2d.at(1).at(1) << endl;

    //Change the vector1.at(0) to 1000:
    vector1.at(0) = 1000;

    cout << endl;

    //Display the elements of vector_2d using at() method (AGAIN):
    cout << "Os elementos do primeiro vetor de vector_2d: " << vector_2d.at(0).at(0) << " e " << vector_2d.at(0).at(1) << endl;
    cout << "Os elementos do segundo vetor de vector_2d: " << vector_2d.at(1).at(0) << " e " << vector_2d.at(1).at(1) << endl;

    cout << endl;

    //Display the elements of vector1 (AGAIN):
    cout << "Elementos vector1: " << vector1[0] << ", " << vector1[1];
    
    return 0;

}