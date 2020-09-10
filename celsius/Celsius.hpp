#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>

using namespace std;

class Celsius
{
private:
    //private vars
    vector<tuple<string, int>> elements;
    tuple<string, int> maximum_climate, minimum_climate;
    string actual_day;
    int week_count = 0;
    bool in_day = false;
    //private methods
    void setup_maximum_minimum();

public:
    Celsius(const char* filename);
    //methods
    int size() { return elements.size(); };
    string get_day_name(int index) { return get<0>(elements[index]); };
    int get_day_temperature(int index) { return get<1>(elements[index]); };
    tuple<string, int> get_day(int index) { return elements[index]; };
    tuple<string, int> get_maximum() { return maximum_climate; };
    tuple<string, int> get_minimum() { return minimum_climate; };
};