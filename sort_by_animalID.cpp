#include "sort_by_animalID.h"

void sort_by_animalID::sort(animal** animals, int size){
    bool sorted = 0;
    while (sorted == 0){
        bool changed = 0;
        for (int i = 1; i < size; i++){
            if (animals[i-1]->get_animalID() > animals[i]->get_animalID()){
                animal* temp = animals[i-1];
                animals[i-1] = animals[i];
                animals[i] = temp;
                changed = 1;
            }
        }
        if (changed == 0){
            sorted = 1;
        }
    }
    return;

}