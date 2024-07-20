#include <Evaluation.hpp>
#include <Subject.hpp>
#include <Type.hpp>
#include <iostream>

using namespace std;

Subject ::Subject(string name) : name(name) {}

void Subject ::addEvaluation(Type type, double percentage) {
  int amount = amountType(type);
  Evaluation evaluation = Evaluation(type, percentage);
  evaluation.setOrder(amount + 1);
  evaluations.push_back(evaluation);
}

int Subject ::amountType(Type type) {
  int quantity;

  if (!evaluations.empty()) {
    for (size_t i = 0; i < evaluations.size(); i++) {
      if (evaluations[i].getType() == type) {
        quantity++;
      }
    }
  }

  return quantity;
}

// TO-DO: adder de los atributos. (profesor, name)
// TO-DO: getter del vector de evaluaciones.
// TO-DO: print vector de evaluaciones.