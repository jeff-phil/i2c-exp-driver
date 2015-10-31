#ifndef _RELAY_EXP_H_
#define _RELAY_EXP_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

#include <onion-mcp23008-driver.h>


// type definitions
typedef enum e_RelayDriverChannels {
	RELAY_EXP_CHANNEL0 		= 0,
	RELAY_EXP_CHANNEL1,
	RELAY_EXP_NUM_CHANNELS,
} ePwmDriverAddr;


int 	relayDriverInit 		(int addr);
int 	relayCheckInit 			(int addr, int *bInitialized);

int 	relaySetChannel			(int addr, int channel, int state);
int 	relaySetAllChannels		(int addr, int state);


#endif // _RELAY_EXP_H_