// Info instructions



void Info ()
{ 
  Serial.println(F("Digital Barman written by Budai Andrei-Bogdan 2017!!!"));
  Serial.println(F("   "));
  Serial.println(F("X for exiting the menu and returning to the ordering table"));

  while(BTcommand == 'I')
       {
           printByte(info);
           delay(10);

        if(Serial.available() > 0)
          {
           BTcommand = Serial.read();
           Serial.println(BTcommand);
          }

        if(BTcommand == 'X')
          {
           Serial.println(F("Returning to main menu"));
        
           BTcommand = 0;
          }

          delay(100);
       }
  
}
