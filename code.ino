//Talelower 2.1 by Shivang Patel && Shubham Sutariya
//2.1 LOGS
//Better and simple conditions.

int motor_1_I = 1;
int motor_2_I = 2;
int motor_1_o = 3;
int motor_2_o = 4;

int enb1 = 5;

int sensor_1 = 6;
int sensor_2 = 7;
int sensor_3 = 8;
int sensor_4 = 9;
int sensor_5 = 10;
int sensor_6 = 11;

void s_left(){
    digitalWrite(motor_2_I,HIGH);
    digitalWrite(motor_1_I,LOW);
    digitalWrite(motor_2_o,LOW);
    digitalWrite(motor_1_o,HIGH);

}

  void left(){
    digitalWrite(motor_2_I,HIGH);
    digitalWrite(motor_1_I,LOW);
    digitalWrite(motor_2_o,LOW);
    digitalWrite(motor_1_o,LOW);
  }
  
  void s_right(){
    digitalWrite(motor_2_I,LOW);
    digitalWrite(motor_1_I,HIGH);
    digitalWrite(motor_2_o,HIGH);
    digitalWrite(motor_1_o,LOW);
  }
  
  void right(){
    digitalWrite(motor_1_I,HIGH);
    digitalWrite(motor_2_I,LOW);
    digitalWrite(motor_1_o,LOW);
    digitalWrite(motor_2_o,LOW);
  }
  
  void stra_8(){
    digitalWrite(motor_2_I,HIGH);
    digitalWrite(motor_1_I,HIGH);
    digitalWrite(motor_2_o,LOW);
    digitalWrite(motor_1_o,LOW);
  }
  
  void sto_p(){
    digitalWrite(motor_2_I,LOW);
    digitalWrite(motor_1_I,LOW);
    digitalWrite(motor_2_o,LOW);
    digitalWrite(motor_1_o,LOW);
  }
void setup() {
  // put your setup code here, to run once:
  for(int i=1;i <= 5;i++){
    pinMode(i,OUTPUT);
    
  }
  
 for(int j=6;j<=11;j++){
   pinMode(j,INPUT);
 }
 
 digitalWrite(5,HIGH);
}
    
   

void loop() {
  // put your main code here, to run repeatedly:
  int sensor1 = digitalRead(sensor_1);
  int sensor2 = digitalRead(sensor_2);
  int sensor3 = digitalRead(sensor_3);
  int sensor4 = digitalRead(sensor_4);
  int sensor5 = digitalRead(sensor_5);
  int sensor6 = digitalRead(sensor_6);
  
  //Now the conditions
  
  //1. 3-4
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 0) && (sensor4 == 0) && (sensor5 == 1) && (sensor6 == 1)){
    stra_8();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 0) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    left();
  }
 
  if((sensor1 == 1) && (sensor2 == 0) && (sensor3 == 0) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    left();
  }
  
  if((sensor1 == 1) && (sensor2 == 0) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    left();
  }
  
  if((sensor1 == 0) && (sensor2 == 0) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    left();
  }
  
  if((sensor1 == 0) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    left();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 0) && (sensor5 == 1) && (sensor6 == 1)){
    right();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 0) && (sensor5 == 0) && (sensor6 == 1)){
    right();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 0) && (sensor6 == 1)){
    right();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 0) && (sensor6 == 0)){
    right();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 0)){
    right();
  }
  
  if((sensor1 == 1) && (sensor2 == 1) && (sensor3 == 1) && (sensor4 == 1) && (sensor5 == 1) && (sensor6 == 1)){
    sto_p();
  }
}
  
  
  
  
