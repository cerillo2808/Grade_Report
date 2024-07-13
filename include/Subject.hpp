#ifndef SUBJECT
#define SUBJECT
#include <Evaluation.hpp>
#include <Type.hpp>
#include <string>
#include <vector>

using namespace std;

class Subject {
 public:
  Subject(string name);
  void addEvaluation(Type type, double percentage);

 private:
  string name;
  string teacher;
  vector<Evaluation> evaluations;
};

#endif