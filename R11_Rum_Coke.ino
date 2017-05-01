//Recepie coktail 1

void RumandCoke ()
{ 
  Serial.println(F("Rum and Coke"));
  
  printByte(glempty);
  delay(10);
  
  digitalWrite(n2, HIGH);
  delay(2000);
  
  digitalWrite(n2, LOW);
  delay(50);

  digitalWrite(n1, HIGH);
  delay(10000);
  
  digitalWrite(n1, LOW);
  delay(50);
   
  printByte(glfilling);
  delay(10);
  
  digitalWrite(m1, HIGH);
  delay(5000);
  
  digitalWrite(m1, LOW);
  delay(50);

  printByte(glfull);
  delay(1000);

  Serial.println(F("Drink finished succsesful"));
  Serial.println(F("Thank you for trying Virtual Bartender"));
}
