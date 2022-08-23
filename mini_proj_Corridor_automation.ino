#define a 2
#define b 3
#define c 4
#define d 5
int output1;
int output2;
int output3;
int output4;
int power_button;
char data_final;

void setup() {

Serial.begin(9600);
pinMode(a,OUTPUT);
digitalWrite(a,0);
pinMode(b,OUTPUT);
digitalWrite(b,0);
pinMode(c,OUTPUT);
digitalWrite(c,0);
pinMode(d,OUTPUT);
digitalWrite(d,0);

}

void loop() {
 if(Serial.available()>0){
  data_final=Serial.read();
  Serial.print(data_final);
  Serial.print("\n");
    
if(data_final == 'V'){
  output1=0;
  digitalWrite(a, output1);
}
if(data_final == 'v'){
  output1=1;
  digitalWrite(a, output1);
}

//PIN 2//
if(data_final == 'W'){
  output2=0;
  digitalWrite(b, output2);
}
if(data_final == 'w'){
  output2=1;
  digitalWrite(b, output2);
}

//PIN 3//
if(data_final == 'X'){
  output3=0;
  digitalWrite(c, output3);
}
if(data_final == 'x'){
  output3=1;
  digitalWrite(c, output3);
}

//PIN 4//
if(data_final == 'Y'){
  output4=0;
  digitalWrite(d, output4);
}
if(data_final == 'y'){
  output4=1;
  digitalWrite(d, output4);
}

if(data_final == 'Z'){
 output1=0;
 output2=0;
 output3=0;
 output4=0;
  digitalWrite(a, output1);
  digitalWrite(b, output2);
  digitalWrite(c, output3);
  digitalWrite(d, output4);
}
if(data_final == 'z'){
 output1=1;
 output2=1;
 output3=1;
 output4=1;
  digitalWrite(a, output1);
  digitalWrite(b, output2);
  digitalWrite(c, output3);
  digitalWrite(d, output4);
    }
  }
}
