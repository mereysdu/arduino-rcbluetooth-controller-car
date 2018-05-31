int val;

int enA = 3;
int in1 = 4;
int in2 = 2;

int enB = 5;
int in3 = 6;
int in4 = 7;

void setup()
{
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT); 
}
void loop()
{
  
  if (Serial.available())
  {
      Serial.println(val);
      val = Serial.read();
        if (val == 66)
        {
            digitalWrite(in2, LOW);
            digitalWrite(in1, HIGH);
            analogWrite(enA, 255);
            digitalWrite(in4, LOW);
            digitalWrite(in3, HIGH);
            analogWrite(enB, 255);
        }
         if ( val == 70)
           {
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            analogWrite(enA, 255);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enB, 255);
          }
         if(val == 82){
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            analogWrite(enA, 255);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            analogWrite(enB, 255);
          }
           if(val == 76){
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            analogWrite(enA, 255);
             digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            analogWrite(enB, 255);  
            } 
            if (val == 83){
                digitalWrite(in1, HIGH);
                digitalWrite(in2, LOW);
                analogWrite(enA, 0);
                digitalWrite(in3, LOW);
                digitalWrite(in4, HIGH);
                analogWrite(enB, 0); 
              }
           
  }
}

