//Recepie simple 3

void JustWiskey ()
{ 
  Serial.println(F("Just Wiskey"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(m3, HIGH);
  delay(5000);

  printByte(glfilling);
  delay(5000);

  digitalWrite(m3, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}
