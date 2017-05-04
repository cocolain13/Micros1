int led0=0; 
int led1=1;
int led2=2;
int led3=3;
int led4=4;
int vector_num[5]={0,1,2,3,4};
int a=0;
int b;
int c;
int d;
int e;

void setup() {

for(;a<5;a++){
  pinMode(vector_num[a],OUTPUT);
}//for1
  
  

}//void setup

void loop()
{
  
  juego_luces1();
  delay(500);
  juego_luces2();
  delay(500);
  juego_luces3();
  delay(500);
  juego_luces4();
  delay(200);
  juego_luces5();
  delay(200); 
}
   
void juego_luces1()
{
   for(;b<=5;b++)
    {
    digitalWrite(vector_num[b],HIGH);
    delay(200);
    }
    for(c=4;c>-1;c--)
    {
    digitalWrite(vector_num[c],LOW);
    delay(200);
    }
  
}
void juego_luces2()
{

   digitalWrite(led0,HIGH);
   digitalWrite(led4,HIGH);
   delay(200);
   digitalWrite(led1,HIGH);
   digitalWrite(led3,HIGH);
   delay(200);
   digitalWrite(led2,HIGH);
   delay(200);

   digitalWrite(led2,LOW);
   delay(200);
   digitalWrite(led1,LOW);
   digitalWrite(led3,LOW);
   delay(200);
   digitalWrite(led0,LOW);
   digitalWrite(led4,LOW);
   delay(200);
}

void juego_luces3(){
  for(;d<=5;d=d+2)
    {
    digitalWrite(vector_num[d],HIGH);
    delay(200);
    }
    for(e=4;e>-1;e=e-2)
    {
    digitalWrite(vector_num[e],LOW); 
    delay(200);
    }
  
}

void juego_luces4(){
  digitalWrite(led0,HIGH);
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led0,LOW);
  delay(200);
  digitalWrite(led2,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  delay(200);
  digitalWrite(led3,HIGH);
  delay(200);
  digitalWrite(led2,LOW);
  delay(200);
  digitalWrite(led4,HIGH);
  delay(200);
  digitalWrite(led4,LOW);
  delay(200);
  digitalWrite(led2,HIGH);
  delay(200);
  digitalWrite(led3,LOW);
  delay(200);
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led2,LOW);
  delay(200);
  digitalWrite(led0,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  delay(200);
  digitalWrite(led0,LOW);
  delay(200);
}

void juego_luces5(){
   digitalWrite(led0,HIGH);
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   delay(200);
   digitalWrite(led4,LOW);
   digitalWrite(led0,LOW);
   delay(200);
   digitalWrite(led3,LOW);
   digitalWrite(led1,LOW);
   delay(200);
   digitalWrite(led2,LOW);
   delay(200);
   
   
  
}







