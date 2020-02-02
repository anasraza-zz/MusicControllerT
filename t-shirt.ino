#include <Keyboard.h>

char ctrlKey = KEY_LEFT_CTRL;
char upKey = KEY_UP_ARROW;
char downKey = KEY_DOWN_ARROW;
char leftKey = KEY_LEFT_ARROW;
char rightKey = KEY_RIGHT_ARROW;

int nextSong;
int previousSong;
int playPause;
int volUp;
int volDown;


void setup() {
  // put your setup code here, to run once: 
   
      Keyboard.begin();

}

void loop() {

  previousSong=analogRead(0);
  nextSong=analogRead(1);
  playPause=analogRead(7);
  volUp=analogRead(4);
  volDown=analogRead(5);
 
  Serial.print("next = ");
  Serial.println(nextSong);

  
  Serial.print("previous = ");
  Serial.println(previousSong);

  Serial.print("play = ");
  Serial.println(playPause);
  
  Serial.print("up = ");
  Serial.println(volUp);

  Serial.print("down = ");
  Serial.println(volDown);
 

  
  delay(500);

//////////////////////////////////////////////////////////////////////////////////////////

if(nextSong >500)
{
 Keyboard.press(ctrlKey);
  Keyboard.press(rightKey);
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:

}

/////////////////////////////////////////////////////////////////////////////////////////

if(previousSong > 500 )
{
 Keyboard.press(ctrlKey);
  Keyboard.press(leftKey);
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:

}

/////////////////////////////////////////////////////////////////////////////////////////

if(playPause > 500 )
{
 Keyboard.press(32);
 
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:
 
}

/////////////////////////////////////////////////////////////////////////////////////////

if(volUp > 500 )
{
 Keyboard.press(ctrlKey);
  Keyboard.press(upKey);
 
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:
  
}

/////////////////////////////////////////////////////////////////////////////////////////

if(volDown > 500 )
{
 Keyboard.press(ctrlKey);
  Keyboard.press(downKey);
 
  delay(100);
  Keyboard.releaseAll();
  // wait for new window to open:
  
}


}
