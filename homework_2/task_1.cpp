#include <iostream>
#include <vector>

int main() {
    int length_of_vector, value;
    value = 0;
    std:: cout << "The equation is e'=e*S" << std::endl;
    std:: cout << "Enter length of vector" << std::endl;
    std:: cin >> length_of_vector;
    std:: cout << "Enter first vector:" << std::endl;
    std::vector <int> old_vector(length_of_vector);
    for (unsigned i = 0; i < length_of_vector; i++)
    {
        std:: cin >> old_vector[i];
    }
    std:: cout << "Enter your tensor matrix:" << std:: endl; //тензор вида {[a, b], [c, d]}
    std:: vector <std:: vector < int > > matrix(length_of_vector, std:: vector<int>(length_of_vector));
    for (unsigned i = 0; i < length_of_vector; i++)
    {
        for (unsigned j = 0; j < length_of_vector; j++)
        {
            std:: cin >> matrix[i][j];
        }
    }
    std:: cout << "Your new vector is: " << std:: endl;
    std:: vector <int> new_vector(length_of_vector);
    for (unsigned k = 0; k < length_of_vector; k++)
    {
        while (value < length_of_vector)
        {
            new_vector[k] += old_vector[value] * matrix[value][k];
            value += 1;
        }
        std:: cout << new_vector[k] << ' ';
        value = 0;
    }

}