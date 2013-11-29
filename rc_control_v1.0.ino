// Name: Rover-5 Controll
// Author: Julian Pampus
// Date: May 5 2013
//   
//	   
//
//  [1] [3]
//    [ ] 
//    [ ]
//  [2] [4]
//
//


#define MOTOR1 3
#define MOTOR1_DIRECTION 2

#define MOTOR2 5
#define MOTOR2_DIRECTION 4

#define MOTOR3 6
#define MOTOR3_DIRECTION 7

#define MOTOR4 9
#define MOTOR4_DIRECTION 8

//#define TIME_FORWARDS 3000
//#define TIME_BACKWARDS 3000
//#define TIME_TURN 1700 //Originally 1200

void setup()
{
	//MOTOR1 Controls
	pinMode (MOTOR1, OUTPUT);
	pinMode (MOTOR1_DIRECTION, OUTPUT);
	//MOTOR2 Controls
	pinMode (MOTOR2, OUTPUT);
	pinMode (MOTOR2_DIRECTION, OUTPUT);
	//MOTOR3 Controls
	pinMode (MOTOR3, OUTPUT);
	pinMode (MOTOR3_DIRECTION, OUTPUT);
	//MOTOR4 Controls
	pinMode (MOTOR4, OUTPUT);
	pinMode (MOTOR4_DIRECTION, OUTPUT);
}

void loop()
{
  int left_pot = analogRead(A5);
  int right_pot = analogRead(A4);

	if(left_pot<256)
	{
	  analogWrite (MOTOR1, 200);
	  analogWrite (MOTOR2, 200);
	  digitalWrite (MOTOR1_DIRECTION, 1); 
	  digitalWrite (MOTOR2_DIRECTION, 0);
	}
	  else if(left_pot>768)
	  {
	    analogWrite (MOTOR1, 200);
	  	analogWrite (MOTOR2, 200);
	  	digitalWrite (MOTOR1_DIRECTION, 0); 
	  	digitalWrite (MOTOR2_DIRECTION, 1);
  	}
    	else
  	{
	    analogWrite (MOTOR1, 0);
	  	analogWrite (MOTOR2, 0);	
	  }

	if(right_pot<256)
	{
	  analogWrite (MOTOR3, 200);
	  analogWrite (MOTOR4, 200);
	  digitalWrite (MOTOR3_DIRECTION, 1); 
	  digitalWrite (MOTOR4_DIRECTION, 0);
	}
	  else if(right_pot>768)
	  {
	    analogWrite (MOTOR3, 200);
	  	analogWrite (MOTOR4, 200);
	  	digitalWrite (MOTOR3_DIRECTION, 0); 
	  	digitalWrite (MOTOR4_DIRECTION, 1);
  	}
	    else
	    {
	      analogWrite (MOTOR3, 0);
	    	analogWrite (MOTOR4, 0);
    	}
}
