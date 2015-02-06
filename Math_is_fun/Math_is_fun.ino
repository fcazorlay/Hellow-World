/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

//******  Setup  ********************************************************
int a = 3;
int b = 4;
int h;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Lets calculate a hypoteneuse");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(sqrt((a*a)+(b*b)));    //hypoteneuses calculate


}

void loop()  // we need this to be here even though its empty
{
}


 
