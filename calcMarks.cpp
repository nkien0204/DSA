#include <iostream>

using namespace std;

const float COEF = 0.3;
int n_subject;

struct Subject {
  unsigned int credits;
  float mid_marks, final_marks;
};

float calcMarks() {
  Subject * subject = new Subject[n_subject];

  cout<<"Enter number of subject: ";
  cin>>n_subject;

  for (int i = 0; i < n_subject; i++) {
    cout<<"Enter credits: ";
    cin>>subject[i].credits;

    cout<<"Enter middle marks: ";
    cin>>subject[i].mid_marks;

    cout<<"Enter final marks: ";
    cin>>subject[i].final_marks;
  }

  float total_marks = 0, total_credits = 0;
  for (int i = 0; i < n_subject; i++) {
    total_marks += (COEF * (subject[i].mid_marks) + (1 - COEF) * (subject[i].final_marks)) * (subject[i].credits);
    total_credits += (subject[i].credits);
  }
  
  delete[] subject;
  return total_marks / total_credits;
}

float conv10to4(float marks10) {
  float a, b;
  if ((marks10 >= 5.5) && (marks10 < 7)) {
    a = 3;
    b = -0.5;
  } else if ((marks10 >= 7) && (marks10 < 8)) {
    a = 1.42;
    b = 3.45;
  } else if (marks10 >= 8) {
    a = 2.5;
    b = 0;
  }

  return (marks10 - b) / a;
}

int main() {
  float a = calcMarks();
  float b = conv10to4(a);
  
  cout<<"GPA: (scale 10):"<<a<<endl;
  cout<<"GPA: (scale 4):"<<b<<endl;
  return 0;
}