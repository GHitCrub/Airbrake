#include <math.h>
  float y0=1;
  float dx=1;
  float x0=2;
 void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println(y0);

}
float fnct(float x){
  // put function here
  // no multivar yet
  float f = x*x; //any function that can be defnied by just x goes here (use your Differfloatial skills)
  return f;


}
//h is dx, i is y0, n is x0
float RK4(float h, float i, float n){
  float g = fnct(n+(h/2));
  float s = g*(n+(h/2));
  float y = i + (((fnct(n)+(2*g)+(2*s)+fnct(n+h))*h)/6);

  y0 = y;
  x0=n+h;
  return y;

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(RK4(dx, y0, x0));
  //Serial.prfloat("y0");  
  //Serial.prfloat(y0);


}
