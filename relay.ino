int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int delayTime =  100;
int delayTime_2 =  100;
int delayTime_3 =  100;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}


void pattern1() {
  //Pattern 01
  digitalWrite(led1, !LOW);
  delay(delayTime_3);
  digitalWrite(led2, !LOW);
  delay(delayTime_3);
  digitalWrite(led3, !LOW);
  delay(delayTime_3);
  digitalWrite(led4, !LOW);
  delay(delayTime_3);
  digitalWrite(led5, !LOW);
  delay(delayTime_3);
  digitalWrite(led6, !LOW);
  delay(delayTime_3);


  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);

}

void pattern2() {
  //Pattern 02

  digitalWrite(led6, !LOW);
  delay(delayTime_3);
  digitalWrite(led5, !LOW);
  delay(delayTime_3);
  digitalWrite(led4, !LOW);
  delay(delayTime_3);
  digitalWrite(led3, !LOW);
  delay(delayTime_3);
  digitalWrite(led2, !LOW);
  delay(delayTime_3);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  delay(delayTime_2);

}
void pattern3() {


  //Pattern 03

  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep1


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep2


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep3


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep4

  //
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep5


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep6


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep7


  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);


  digitalWrite(led6, !LOW);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led1, !HIGH);
  delay(delayTime_3); //Rep8

  digitalWrite(led6, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);

}
void pattern4() {

  //Pattern 04
  digitalWrite(led1, !LOW);
  delay(delayTime_3);
  digitalWrite(led2, !LOW);
  delay(delayTime_3);
  digitalWrite(led3, !LOW);
  delay(delayTime_3);
  digitalWrite(led4, !LOW);
  delay(delayTime_3);
  digitalWrite(led5, !LOW);
  delay(delayTime_3);
  digitalWrite(led6, !LOW);
  delay(delayTime_3);



  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
}
void pattern5() {

  //Pattern 05

  digitalWrite(led6, !LOW);
  delay(delayTime_3);
  digitalWrite(led5, !LOW);
  delay(delayTime_3);
  digitalWrite(led4, !LOW);
  delay(delayTime_3);
  digitalWrite(led3, !LOW);
  delay(delayTime_3);
  digitalWrite(led2, !LOW);
  delay(delayTime_3);
  digitalWrite(led1, !LOW);
  delay(delayTime_3);

  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
}
void pattern6() {

  //rep1
  digitalWrite(led1, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  delay(delayTime);

  //rep2
  digitalWrite(led1, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  delay(delayTime);

  //rep3
  digitalWrite(led1, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  delay(delayTime);

  //rep4
  digitalWrite(led1, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  delay(delayTime);
  //rep5
  digitalWrite(led1, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  delay(delayTime);

}
void pattern7() {

  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  delay(delayTime);



  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led6, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led6, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led6, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led6, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  delay(delayTime);


  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
}
void pattern8() {

  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(2, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);

  //
  delay(delayTime);

  //
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
}

void pattern9() {



  //Pattern 09
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep1

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep2

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep3

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep4

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep5
}

void pattern10() {

  //Pattern 10
  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);

  digitalWrite(led1, !LOW);
  delay(delayTime);

  //
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
}
void pattern11() {

  //pattern 11
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led1, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !LOW);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime);

  //
  delay(delayTime);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime);

  //
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  delay(delayTime_2);
  //
  delay(delayTime_2);
}

void pattern12() {

  //Pattern 12
  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);

  digitalWrite(led1, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);

  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);
  //
  delay(delayTime_2);

  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);
  //
  delay(delayTime_2);

  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);
  //
  delay(delayTime_2);

  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);
  //
  delay(delayTime_2);

  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);
  //
  delay(delayTime_2);

  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  //
  delay(delayTime_2);

}

void balance() {


  //Pattern 06 Repeat
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  //
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime); //Rep 1

  digitalWrite(led1, !LOW);
  //
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  //
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime); //Rep 2

  digitalWrite(led1, !LOW);
  //
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  //
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime); //Rep 3

  digitalWrite(led1, !LOW);
  //
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  //
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime); //Rep 4

  digitalWrite(led1, !LOW);
  //
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led4, !LOW);
  delay(delayTime);

  digitalWrite(led1, !HIGH);
  //
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led4, !HIGH);
  delay(delayTime); //Rep 5

  //Pattern 13
  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(2, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);
  digitalWrite(1, !HIGH);
  digitalWrite(led1, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);
  digitalWrite(2, !HIGH);
  digitalWrite(led2, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(led3, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(led4, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);
  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);

  //
  delay(delayTime_2);

  digitalWrite(led1, !HIGH);
  delay(delayTime_2);

  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  digitalWrite(led3, !HIGH);
  digitalWrite(1, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  digitalWrite(led4, !HIGH);
  digitalWrite(2, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(1, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  digitalWrite(led5, !HIGH);
  digitalWrite(3, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(2, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(1, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(3, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(2, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(1, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  //
  digitalWrite(led6, !LOW);
  delay(delayTime_2);
  digitalWrite(led6, !HIGH);
  digitalWrite(led5, !LOW);
  delay(delayTime_2);
  digitalWrite(led5, !HIGH);
  digitalWrite(3, !LOW);
  delay(delayTime_2);
  digitalWrite(led4, !HIGH);
  digitalWrite(2, !LOW);
  delay(delayTime_2);
  digitalWrite(led3, !HIGH);
  digitalWrite(1, !LOW);
  delay(delayTime_2);
  digitalWrite(led2, !HIGH);
  digitalWrite(0, !LOW);
  delay(delayTime_2);
  digitalWrite(0, !HIGH);
  delay(delayTime_2);

  //Pattern 09 Repeat
  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep1

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep2

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep3

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  //
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  //
  delay(delayTime); //Rep4

  digitalWrite(led4, !LOW);
  delay(delayTime);
  digitalWrite(led3, !LOW);
  digitalWrite(led5, !LOW);
  delay(delayTime);
  digitalWrite(led2, !LOW);
  digitalWrite(led6, !LOW);
  delay(delayTime);
  digitalWrite(led1, !LOW);
  delay(delayTime);

  digitalWrite(led4, !HIGH);
  delay(delayTime);
  digitalWrite(led3, !HIGH);
  digitalWrite(led5, !HIGH);
  delay(delayTime);
  digitalWrite(led2, !HIGH);
  digitalWrite(led6, !HIGH);
  delay(delayTime);
  digitalWrite(led1, !HIGH);
  delay(delayTime); //Rep5
}


void loop() {
  pattern1();
  pattern2();
  pattern3();
  pattern4();
  pattern5();
  pattern6();
  pattern7();
  pattern8();
  pattern9();
  pattern10();
  pattern11();
  pattern12();

}
