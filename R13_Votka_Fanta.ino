//Recepie coktail 3

void VotkaandFanta ()
{ 
  Serial.println(F("Votka and Fanta"));

  printByte(glempty);
  delay(10);

  digitalWrite(n3, HIGH);
  delay(15000);
  
  digitalWrite(n3, LOW);
  delay(50);

  printByte(glfilling);
  delay(10);
  
  digitalWrite(m2, HIGH);
  delay(5000);
  
  digitalWrite(m2, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);
  
  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
 
}
