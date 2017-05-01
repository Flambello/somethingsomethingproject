// Sd card start up

void initializeSD()
{
  Serial.println(F("Initializing SD card..."));
  pinMode(CS_PIN, OUTPUT);

  if (SD.begin())
  {
    Serial.println(F("Logger started"));
  } else
  {
    Serial.println(F("Logger memory fail"));
    return;
  }
}
