#include <Evaluation.hpp>
#include <Statistics.hpp>
#include <Subject.hpp>
#include <Type.hpp>
#include <iostream>

using namespace std;

bool Statistics::anyEvaluation() {
  if (subjects.empty()) {
    return false;
  }

  for (size_t i = 0; i < subjects.size(); i++) {
    // if (subjects[i].) TODO: Hacer getter de las evaluaciones de un subject
  }

  return true;
}

bool Statistics::anySubject() {
  if (subjects.empty()) {
    return false;
  }
  return true;
}