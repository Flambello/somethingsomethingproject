//Recepie simple 4

void JustCoke ()
{ 
  Serial.println(F("Just Coke"));

  printByte(glempty);
  delay(10);
  
  digitalWrite(n1, HIGH);
  delay(5000);

  printByte(glfilling);
  delay(5000);

  digitalWrite(n1, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}
