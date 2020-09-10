#include "Celsius.hpp"

Celsius::Celsius(const char* filename) {
    string actual_line;
    ifstream file_to_Read(filename);

    while (getline(file_to_Read, actual_line))
    {
        if (actual_line.compare("") != 0 && !(this->in_day))
        {
            this->actual_day = actual_line;
            this->in_day = true;
        }
        if (actual_line.compare("") != 0 && this->in_day && atoi(actual_line.c_str()) != 0) 
        {
            this->elements.push_back(make_tuple(this->actual_day, atoi(actual_line.c_str())));
            this->in_day = false;
        } 
        if (actual_line.compare("") == 0 && this->in_day) 
        {
            this->in_day = false;
        }
    }

    this->setup_maximum_minimum();
}

void Celsius::setup_maximum_minimum() {
    for (int i = 0; i < this->size(); i++) {
        if (this->get_day_temperature(i) > get<1>(this->maximum_climate)) {
            this->maximum_climate = this->get_day(i);
        }
    }
    this->minimum_climate = this->maximum_climate;
    for (int i = 0; i < this->size(); i++)
    {
        if (this->get_day_temperature(i) < get<1>(this->minimum_climate)) {
            this->minimum_climate = this->get_day(i);
        }
    }
}