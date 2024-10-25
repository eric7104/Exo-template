#pragma once
#include <iostream>
#include <vector>

// 1. 
template <typename T>
T minValue(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// 2. 
template <typename T>
size_t addElement(std::vector<T>& vec, T element) {
    vec.push_back(element);
    return vec.size();
}

// 3. 
template <typename T>
T sumElements(const std::vector<T>& vec) {
    T sum = 0;
    for (const T& element : vec) {
        sum += element;
    }
    return sum;
}

// 4. 
template <typename T>
double average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// suite de la parti 4 de l'exo
template <>
double average<int>(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}


int main() {
    
    int arr[] = { 3, 1, 4, 1, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "La plus petite valeur est: " << minValue(arr, size) << std::endl;

    
    std::vector<int> vec = { 1, 2, 3 };
    int newElement = 4;
    std::cout << "Taille du vecteur après ajout: " << addElement(vec, newElement) << std::endl;

    
    std::vector<float> floatVec = { 1.1, 2.2, 3.3 };
    std::cout << "Somme des éléments: " << sumElements(floatVec) << std::endl;

    
    double avg = average(arr, size);
    std::cout << "Moyenne des éléments: " << avg << std::endl;

    return 0;
}
