//the setup 


void setup() 
{

  pinMode(m1, OUTPUT);        //
  digitalWrite(m1, LOW);      //
                              //
  pinMode(m2, OUTPUT);        //
  digitalWrite(m2, LOW);      //
                              // 
  pinMode(m3, OUTPUT);        //
  digitalWrite(m3, LOW);      //  
                              //   Initialising pins
  pinMode(n1, OUTPUT);        //
  digitalWrite(n1, LOW);      //
                              //
  pinMode(n2, OUTPUT);        //
  digitalWrite(n2, LOW);      //
                              //
  pinMode(n3, OUTPUT);        //
  digitalWrite(n3, LOW);      //

  lc.shutdown(0,false);       //The MAX72XX is in power-saving mode on startup
  lc.setIntensity(0,15);      // Set the brightness to maximum value
  lc.clearDisplay(0);         // and clear the display

  Serial.begin(9600);                  // Default connection rate for my BT module

  initializeSD ();                     //
  createFile("Drinklog.txt");          // The sd logging start process
  writeToFile("New start\n \n");       //
  closeFile();                         //

  printByte(smile);

  delay(200);                          // conection boot delay

  Serial.println(F("   "));
  Serial.println(F("WELCOME !!!"));
  delay(500);
  
  Serial.println(F("How may I serve you today?"));
  Serial.println(F("   "));
  delay(50);

  Serial.println(F("Type M for menu"));
  delay(50);
  Serial.println(F("Type I for information"));
  delay(50);
  Serial.println(F("Type H for help"));
  delay(50);
  Serial.println(F("Or you can order right away using the order command"));
  delay(50); 
  

}






