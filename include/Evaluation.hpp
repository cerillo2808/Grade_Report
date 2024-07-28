#ifndef EVALUATION
#define EVALUATION
#include <Type.hpp>
#include <iostream>
#include <string>

using namespace std;

class Evaluation {
 public:
  Evaluation(Type evaluation, double percentage);
  void setOrder(int order);
  void setGrade(double grade);
  void setTeam();
  int getOrder();
  double getPercentage();
  bool isTeam();
  void getInfo();
  Type getType();

 private:
  Type evaluation;
  int order;
  double percentage;
  bool team;
  string info;
  double grade;
};

#endif