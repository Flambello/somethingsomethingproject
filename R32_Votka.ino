//Recepie simple 2

void JustVotka ()
{ 
  Serial.println(F("Just Votka"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(m2, HIGH);
  delay(5000);

  printByte(glfilling);
  delay(5000);

  digitalWrite(m2, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);
  
  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}
