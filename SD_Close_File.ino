// closing the file

void closeFile()
{
  if (file)
  {
    file.close();
    //Serial.println(F("File closed"));
  }
}
