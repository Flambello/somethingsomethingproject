//Help instructions



void Help ()
{  
   Serial.println(F("For system debugging enter 'D'"));
   Serial.println(F("For system exit enter 'X'"));

   while(BTcommand == 'H')
     {  
         printByte(help);
         delay(10);
         
       if(Serial.available() > 0)
         {
          BTcommand = Serial.read();
          Serial.println(BTcommand);
         }

       if(BTcommand == 'D')
         {
          printByte(debug);
          delay(2000);
          
          Serial.println(F("testing SD card"));
          createFile("Drinklog.txt"); 
          writeToFile("debug test\n \n"); 
          closeFile();

          delay(3000);

          Serial.println(F("testing drink maker"));
          RumandCoke ();
          VotkaandCoke ();
          VotkaandFanta ();
          VotkaandLemon ();
          FantaandLemon ();
          CokeandLemon ();
          JustRum ();
          JustVotka (); 
          JustWiskey ();
          JustCoke ();
          JustFanta ();

          delay(50);

          Serial.println(F("tests are complete"));
          Serial.println(F("please review results"));

          printByte(debug);
          delay(2000);
         }

       if(BTcommand == 'X')
         {
          BTcommand = 0;
          Serial.println(F("Going back to min menu"));
         }
   }
   
}
