#include "sort_by_name.h"

void sort_by_name::sort(animal** animals, int size){
    bool sorted = 0;
    while (sorted == 0){
        bool changed = 0;
        for (int i = 1; i < size; i++){
            if (animals[i-1]->get_name() > animals[i]->get_name()){
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