#include <Evaluation.hpp>
#include <Type.hpp>
#include <iostream>
#include <string>

using namespace std;

Evaluation ::Evaluation(Type evaluation, double percentage)
    : evaluation(evaluation), percentage(percentage) {}

void Evaluation ::setOrder(int input) { order = input; }

void Evaluation ::setGrade(double input) { grade = input; }

void Evaluation ::setTeam() { team = true; }

int Evaluation ::getOrder() { return order; }

double Evaluation ::getPercentage() { return percentage; }

bool Evaluation ::isTeam() { return team; }

void Evaluation ::getInfo() {
    cout << evaluation + "order " + order << endl;
    cout << "\npercentage: " << percentage << "\n" << info << endl;
    // TODO: Imprimir la evaluación que es dependiendo del enum
}

Type Evaluation ::getType() { return evaluation; }