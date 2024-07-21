#ifndef STATISTICS
#define STATISTICS
#include <Subject.hpp>
#include <Type.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Statistics {
 public:
  // if there is an evaluation or subject, it returns true. If it has no
  // evaluations or subjects, returns false.
  bool anyEvaluation();
  bool anySubject();
  bool evaluationExist(Type evaluation, int order);
  bool subjectExist(string name);

 private:
  vector<Subject> subjects;
};

#endif