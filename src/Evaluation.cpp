#include <Evaluation.hpp>
#include <Type.hpp>
#include <iostream>

using namespace std;

Evaluation ::Evaluation(Type evaluation, double percentage)
    : evaluation(evaluation), percentage(percentage) {}

void Evaluation ::setOrder(int input) { order = input; }

Type Evaluation ::getType() { return evaluation; }