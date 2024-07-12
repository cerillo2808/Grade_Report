#ifndef EVALUATION
#define EVALUATION
#include <Evaluation.hpp>
#include <string>
#include <vector>

using namespace std;

class Subject {
 public:
  void addEvaluation(int type);

 private:
  string name;
  string teacher;

  vector<Evaluation> evaluations;
};

#endif