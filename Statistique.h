#pragma once
#include <vector>
#include <cmath>
#include <numeric>


template <typename T>
double calculStatistique(const std::vector<T>& data) {
   
    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    return sum / data.size();
}


template <>
double calculStatistique<float>(const std::vector<float>& data) {
    
    double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();

   
    double variance = 0.0;
    for (float val : data) {
        variance += (val - mean) * (val - mean);
    }
    variance /= data.size();
    return variance;
}


template <typename T>
double calculerAttributStatistique(const std::vector<Personnage>& personnages, T Personnage::* attribut) {
    std::vector<T> valeurs;
    for (const auto& personnage : personnages) {
        valeurs.push_back(personnage.*attribut);
    }
    return calculStatistique(valeurs);
}



