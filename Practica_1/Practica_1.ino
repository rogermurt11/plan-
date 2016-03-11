/*************************************************************************
**                                                                      **                                                                     
**                    Engegada aturada d'un LED                         **                                                                      
**                                                                      **                                                                      
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************                                                                      
void setup() {
  // utilitzem el pin digital 13 com a sortida 
  pinMode(13, OUTPUT);
}

//******  Loop  **********************************************************

// en aquest programa encendrem el LED 1s i a continuació s'apagara també després de 1s 
void loop() {
  digitalWrite(13, HIGH);   // encen el LED (tensió alta )
  delay(1000);              // es manté 1s engegat
  digitalWrite(13, LOW);    // apaga el LED amb tensió baixa 
  delay(1000);              //  espera 1s apagat
}
