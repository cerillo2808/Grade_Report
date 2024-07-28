#include <Evaluation.hpp>
#include <Interaction.hpp>
#include <iostream>

using namespace std;

void Interaction::HelloWorld() {
  Evaluation evaluation(exam, 50.0);
  evaluation.setOrder(1);
  evaluation.getInfo();
}

// TO-DO: preguntarle al usuario si quiere crear un archivo de cero o actualizar
// reporte TO-DO: pedirPathparaFile TO-DO: agregar subject TO-DO: agregar
// evaluation TO-DO: si es un proyecto, preguntar si es en grupo.
