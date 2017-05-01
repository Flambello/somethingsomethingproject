// the loop


void loop() 
{  
    printByte(smile);
    delay(5);
 
    if(Serial.available() > 0)
      {
        BTcommand = Serial.read();
        Serial.println(BTcommand);
      } 
 
    switch(BTcommand)
      {
        case 'M':
          Menu ();
          BTcommand = 0;
        break;

        case 'I':
          Info ();
          BTcommand = 0;
        break;

        case 'H':
          Help ();
          BTcommand = 0;
        break;
    
        case '1':          
          RumandCoke ();
          createFile("Drinklog.txt");
          writeToFile("1 Rum and Coke\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break; 

        case '2':          
          VotkaandCoke ();
          createFile("Drinklog.txt");
          writeToFile("1 Votka and Coke\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '3':          
          VotkaandFanta ();
          createFile("Drinklog.txt");
          writeToFile("1 Votka and Fanta\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '4':          
          VotkaandLemon ();
          createFile("Drinklog.txt");
          writeToFile("1 Votka and Lemon\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '5':          
          FantaandLemon ();
          createFile("Drinklog.txt");
          writeToFile("1 Fanta and Lemon\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '6':          
          CokeandLemon ();
          createFile("Drinklog.txt");
          writeToFile("1 Coke and Lemon\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;  

        case '7':          
          JustRum ();
          createFile("Drinklog.txt");
          writeToFile("1 Rum\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '8':          
          JustVotka ();
          createFile("Drinklog.txt");
          writeToFile("1 Votka\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case '9':          
          JustWiskey ();
          createFile("Drinklog.txt");
          writeToFile("1 Wiskey\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case 'a':          
          JustCoke ();
          createFile("Drinklog.txt");
          writeToFile("1 Coke\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

        case 'b':          
          JustFanta ();
          createFile("Drinklog.txt");
          writeToFile("1 Fanta\n");
          closeFile();
          BTcommand = 0;
          lc.clearDisplay(0);
        break;

     }
   

  
}
  
