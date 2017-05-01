// all global declarations and libraries


  #include <SD.h>
  #include <SPI.h>
  #include <LedControl.h>
 

//defining pins
  #define m1  14
  #define m2  15
  #define m3  16
  #define n1  17
  #define n2  18
  #define n3  19 
  
//multiple declarations
  int DIN = 4;
  int CS =  3;
  int CLK = 2;
  int CS_PIN = 10;
  
  char BTcommand; //Bluetooth command input
  //char BTmenu;  //Bluetooth menu imputs
  
  File file;
  LedControl lc=LedControl(DIN,CLK,CS,0);

//animation declarations
  byte glempty[8]   = {0x00,0x42,0x42,0x42,0x42,0x42,0x24,0x3C};
  byte glfilling[8] = {0x00,0x42,0x42,0x42,0x7E,0x7E,0x3C,0x3C};
  byte glfull[8]    = {0x00,0x42,0x7E,0x7E,0x7E,0x7E,0x3C,0x3C}; 
  byte smile[8]     = {0x3C,0x42,0xA5,0x81,0xC3,0xBD,0x42,0x3C};
  byte debug[8]     = {0x18,0xA5,0x7E,0xD3,0x4A,0x52,0xAD,0x18};
  byte help[8]      = {0x66,0x66,0x66,0x7E,0x7E,0x66,0x66,0x66};
  byte info[8]      = {0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x18};
  byte menu[8]      = {0xE7,0xFF,0xFF,0xDB,0xDB,0xDB,0xC3,0xC3};
  
//menu
  void Menu ();  // Menu system
  void Info ();  // Info system
  void Help ();  // Help system

//RECEPIES

//alcoholic
  void RumandCoke ();
  void VotkaandCoke ();
  void VotkaandFanta ();
  void VotkaandLemon ();
  
//simple
  void JustRum ();
  void JustVotka ();
  void JustWiskey ();
  void JustCoke ();
  void JustFanta ();
  
//non-alcholic
  void FantaandLemon ();
  void CokeandLemon ();

//SD card

  void initializeSD();
  void closeFileSD ();

//complex declarations

int createFile(char filename[])
{
  file = SD.open(filename, FILE_WRITE);

  if (file)
  {
    //Serial.println(F("File created successfully."));
    return 1;
  } else
  {
    Serial.println(F("Error while creating file."));
    return 0;
  }
}

int writeToFile(char text[])
{
  if (file)
  {
    file.println(text);
    //Serial.println(F("Writing to file: "));
    Serial.println(text);
    return 1;
  } else
  {
    Serial.println(F("Couldn't write to file"));
    return 0;
  }
}




  
