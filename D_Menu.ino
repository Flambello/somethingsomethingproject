// menu instructions



void Menu ()
{  
    Serial.println(F("Wellcome to the Menu"));
    Serial.println(F("   "));
  
    Serial.println(F("Please select from one of the following categories"));
    Serial.println(F("   "));
    Serial.println(F("A for alcoholic drinks"));
    Serial.println(F("S for simple drinks"));
    Serial.println(F("N for non-alcoholic drinks"));
    Serial.println(F("X for exiting the menu and returning to the ordering table"));
  
  while(BTcommand == 'M' || BTcommand == 'A' || BTcommand == 'S' || BTcommand == 'N')
   {  
      printByte(menu);
      delay(10);
        
    if(Serial.available() > 0)
      {
        BTcommand = Serial.read();
        Serial.println(BTcommand);
      } 

    if(BTcommand == 'A')
      {
        Serial.println(F("For Rum and Coke"));
        Serial.println(F("Please enter command '1' "));
        Serial.println(F("   "));
        
        Serial.println(F("For Votka and Coke"));
        Serial.println(F("Please enter command '2'"));
        Serial.println(F("   "));
        
        Serial.println(F("For Votka and Fanta"));
        Serial.println(F("Please enter command '3'"));
        Serial.println(F("   "));

        Serial.println(F("For Votka and Lemon"));
        Serial.println(F("Please enter command '4'"));
        Serial.println(F("   "));
        
        BTcommand = 'M';
      }

      delay(100);
  
    if(BTcommand == 'S')
      {
        Serial.println(F("For just Rum"));
        Serial.println(F("Please enter command '7'"));
        Serial.println(F("  "));

        Serial.println(F("For just Votka"));
        Serial.println(F("Please enter command '8'"));
        Serial.println(F("  "));

        Serial.println(F("For just Wiskey"));
        Serial.println(F("Please enter command '9'"));
        Serial.println(F("  "));

        Serial.println(F("For just Coke"));
        Serial.println(F("Please enter command 'a'"));
        Serial.println(F("  "));

        Serial.println(F("For just Fanta"));
        Serial.println(F("Please enter command 'b'"));
        Serial.println(F("  "));
        
        BTcommand = 'M';
      }

      delay(100);
  
    if(BTcommand == 'N')
      {
        Serial.println(F("For Fanta and Lemon"));
        Serial.println(F("Please enter command '5;"));
        Serial.println(F("  "));
        
        Serial.println(F("For Coke and Lemon"));
        Serial.println(F("Please enter command '6;"));
        Serial.println(F("  "));        
        
        BTcommand = 'M';
      }

      delay(100);

    if(BTcommand == 'X')
      {
        Serial.println(F("Returning to main menu"));
        
        BTcommand = 0;
      }

      delay(100);
       
   }
  
}

