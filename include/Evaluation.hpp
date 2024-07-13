#ifndef EVALUATION
#define EVALUATION
#include <Type.hpp>
#include <iostream>
#include <string>

using namespace std;

class Evaluation {
 public:
  Evaluation(Type evaluation, double percentage);

 private:
  Type evaluation;
  int order;
  double percentage;
  bool team;
  string info;
};

#endif