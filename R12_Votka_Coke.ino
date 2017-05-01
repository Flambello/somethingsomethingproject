//Recepie coktail 2

void VotkaandCoke ()
{ 
  Serial.println(F("Votka and Coke"));
  
  printByte(glempty);
  delay(10);

  digitalWrite(n1, HIGH);
  delay(15000);
  
  digitalWrite(n1, LOW);
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
