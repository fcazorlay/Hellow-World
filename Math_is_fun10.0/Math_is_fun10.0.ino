/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

//******  Setup  ********************************************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;

void setup()               //run once, when the sketch starts
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  Serial.print("In theory, it can store");
  Serial.println(drive_mb);
  
  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;
  
  Serial.print("Megabytes,");
  
  drive_mb = drive_kb;
  drive_mb = drive_mb * 1024;
  
  Serial.print("Kilobites");

  Serial.print("But it really only stores");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
  
}

void loop()      //we need this to be here even though its empty
{
}

