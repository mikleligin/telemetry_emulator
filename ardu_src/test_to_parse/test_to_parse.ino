#include <random>
#include <math.h>
#include <string.h>


String stri = "";
String getPID()
{
  return "PID:p=2,i=3,d=4,;";
}
void setup() {
  Serial.begin(9600);
  stri = getPID();
}

double DegToRad(double D)
{
    double M=3.14/180;
    return D*M;
};
int step = 10;


String setPID(String str)
{
  char * temp;
  char arr[str.length()+1];
  str.toCharArray(arr, str.length()+1);
  //String temp = "";
  int index = str.indexOf(':');
  int sindex = str.indexOf(';');
  String sub = str.substring(index+1, sindex);
  String pid[3];
  for(int i = 0; i < 3; i++)
  {
    int ind = sub.indexOf("=");
    int ind2 = sub.indexOf(",");
    for(int k = ind+1; k<ind2; k++)
    {
      pid[i]+=sub[k];
    }
    sub[ind]=' ';
    sub[ind2]=' ';
  }
  return "PID:p="+pid[0]+",i="+pid[1]+","+"d="+pid[2]+",|";
}
float i = -90;
void sendSin()
{
  if(i>=90)
  {
    step = -10;
  }
  if(i<=-90)
  {
    step = 10;
  }
    //int c = random(100);
  Serial.print("SIN:");
  Serial.print("sin1=");
  Serial.print(sin(DegToRad(i)));
  Serial.print(";");
  //c = random(500);
  Serial.print("sin2=");
  Serial.print(sin(DegToRad(i))+1);
  Serial.print(";");
  Serial.print("sin3=");
  //c = random(150);
  Serial.print(sin(DegToRad(i))-1);
  Serial.print('\n');
  i+=step;
  
}
void sendPID()
{
  Serial.print(stri);
}
void loop() {
  
  if(Serial.available())
  {
    String s = Serial.readString();
    int d = s.indexOf("ID");
    if(d > 0)
    {
      stri = setPID(s);
    }
    
  }
  //sendPID();
  sendSin();
  delay(100);
  
  // put your main code here, to run repeatedly:

}
