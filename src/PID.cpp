#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  first_step_ = true;
  i_error = 0.;
}

void PID::UpdateError(double cte) {
  if (!first_step_) {
    d_error = cte - p_error;
  } else {
    d_error = 0;
    first_step_ = false;
  }
  p_error = cte;
  i_error += cte;
  
}

double PID::TotalError() {
  return -Kp*p_error - Ki*i_error - Kd*d_error;
}

