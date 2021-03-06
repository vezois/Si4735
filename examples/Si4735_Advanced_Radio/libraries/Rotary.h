//Coded By Jon Carrier
//Free to use however you please

//#####################################################################
//                          ROTARY FUNCTIONS
//#####################################################################
#ifndef Rotary_h
#define Rotary_h
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  //#include <pins_arduino.h>
#endif
class Rotary
{
	public:
		Rotary();
		void begin(int EncA, int EncB, int PB, void (*CALLBACK)(void));
		void read(void);
		int isFwdRot(void);
		int isRevRot(void);
		void end(void);

	private:
		volatile int _ROT_FIFO_0; //Most Recent
		volatile int _ROT_FIFO_1;	
		int _EncA;
		int _EncB;
		int _PB;
};
#endif
