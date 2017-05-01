//Recepie simple 1

void JustRum ()
{ 
  Serial.println(F("Just Rum"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(m1, HIGH);
  delay(5000);

  printByte(glfilling);
  delay(5000);

  digitalWrite(m1, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}
