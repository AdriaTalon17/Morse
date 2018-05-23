/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 9;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //A   ** Adria Talon Prats
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //D
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //I
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //a
  punt();
  ratlla();
  //Espai entre paraules
  espaiP();

  //T
  ratlla();
  //Espai entre lletres
  espaiL();
  //a
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //l
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //o
  ratlla();
  ratlla();
  ratlla();
    //Espai entre lletres
  espaiL();
  //n
  ratlla();
  punt();
  
    //Espai entre paraules
  espaiP();

  //P
  punt();
  ratlla();
  ratlla();
  punt();
    //Espai entre lletres
  espaiL();
  //r
  punt();
  ratlla();
  punt();
    //Espai entre lletres
  espaiL();
  //a
  punt();
  ratlla();
    //Espai entre lletres
  espaiL();
  //t
  ratlla();
    //Espai entre lletres
  espaiL();
  //s
  punt();
  punt();
  punt();
    //Espai entre paraules
  espaiP();
  
  
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
