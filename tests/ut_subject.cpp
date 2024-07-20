#include <gtest/gtest.h>

#include <Evaluation.hpp>
#include <Type.hpp>

TEST(Evaluation, getTypeOther) {
  Evaluation evaluation = Evaluation(other, 10);
  Type type = evaluation.getType();

  EXPECT_EQ(type, other);
}

TEST(Evaluation, getTypeExam) {
  Evaluation evaluation = Evaluation(exam, 10);
  Type type = evaluation.getType();

  EXPECT_EQ(type, exam);
}

TEST(Evaluation, getTypeProject) {
  Evaluation evaluation = Evaluation(project, 10);
  Type type = evaluation.getType();

  EXPECT_EQ(type, project);
}

TEST(Evaluation, getTypeHomework) {
  Evaluation evaluation = Evaluation(homework, 10);
  Type type = evaluation.getType();

  EXPECT_EQ(type, homework);
}

TEST(Evaluation, getTypeQuiz) {
  Evaluation evaluation = Evaluation(quiz, 10);
  Type type = evaluation.getType();

  EXPECT_EQ(type, quiz);
}

TEST(Evaluation, falso) {
  bool falso = false;
  EXPECT_TRUE(falso);
}