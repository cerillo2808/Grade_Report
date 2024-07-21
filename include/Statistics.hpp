#ifndef STATISTICS
#define STATISTICS
#include <Type.hpp>
#include <iostream>
#include <vector>
#include <Subject.hpp>
#include <string>

using namespace std;

class Statistics {
 public:
 //if there is an evaluation or subject, it returns true. If it has no evaluations or subjects, returns false.
 bool anyEvaluation();
 bool anySubject();
 bool evaluationExist(Type evaluation, int order);
 bool subjectExist(string name);

 private:
 vector<Subject> subjects;
};

#endif