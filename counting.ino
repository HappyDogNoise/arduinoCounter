
int numArrays[10][7] = {{1,1,0,1,1,1,1},//0
                        {0,1,0,0,0,0,1},//1
                        {1,1,1,1,1,0,0},//2
                        {1,1,1,1,0,0,1},//3
                        {0,1,1,0,0,1,1},//4
                        {1,0,1,1,0,1,1},//5
                        {1,0,1,1,1,1,1},//6
                        {1,1,0,0,0,0,1},//7
                        {1,1,1,1,1,1,1},//8
                        {1,1,1,0,0,1,1}};//9
int LEDarray[11] = {13,3,4,5,6,7,8,9,10,11,12};
int numberHeld = 0;

void increaseNumber(){
  if(numberHeld == 0b10011100001111){
    numberHeld = 0;
  }else{
    numberHeld = numberHeld + 1;
  }
}

void Display_all(){
  int digit[4] = {numberHeld % 10, numberHeld / 10 % 10, numberHeld / 100 % 10, numberHeld / 1000 % 10};
  for(int i = 0; i < 4; i++){
    LED_Display(i,digit[i]);
    delay(1);
    LED_OFF();
  }
}

void LED_OFF(){
  digitalWrite(LEDarray[7],HIGH);
  digitalWrite(LEDarray[8],HIGH);
  digitalWrite(LEDarray[9],HIGH);
  digitalWrite(LEDarray[10],HIGH);
  digitalWrite(LEDarray[0],LOW);
  digitalWrite(LEDarray[1],LOW);
  digitalWrite(LEDarray[2],LOW);
  digitalWrite(LEDarray[3],LOW);
  digitalWrite(LEDarray[4],LOW);
  digitalWrite(LEDarray[5],LOW);
  digitalWrite(LEDarray[6],LOW);
}

void LED_Display(int x, int y){
  digitalWrite(LEDarray[x + 7],LOW);
  for(int i = 0; i < 7; i++){
    if(numArrays[y][i] == 1){
      digitalWrite(LEDarray[i],HIGH);
    }else{
      digitalWrite(LEDarray[i],LOW);
    }
  };
  return;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i < 11;  i++){
    pinMode(LEDarray[i],OUTPUT);  
  };
  LED_OFF();
  attachInterrupt(0, increaseNumber, RISING);
}

void loop() {
  Display_all();
}
