/* mipslabwork.c

   This file written 2015 by F Lundevall
   Updated 2017-04-21 by F Lundevall

   This file should be changed by YOU! So you must
   add comment(s) here with your name(s) and date(s):

   This file modified 2017-04-31 by Ture Teknolog 

   For copyright and licensing, see file COPYING */

#include <stdint.h>   /* Declarations of uint_32 and the like */
#include <pic32mx.h>  /* Declarations of system-specific addresses etc */
#include "mipslab.h"  /* Declatations for these labs */

int mytime = 0x5957;

  uint8_t battlefield[] = {
	219, 219, 219, 0, 0, 165, 165, 195,
	195, 195, 195, 231, 231, 231, 231, 231,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
};

 uint8_t Reset[] = {
	219, 219, 219, 0, 0, 165, 165, 195,
	195, 195, 195, 231, 231, 231, 231, 231,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
};

const uint8_t const spaceship[] = {
	219, 219, 219, 0, 0, 165, 165, 195,
	195, 195, 195, 231, 231, 231, 231, 231,
};

const uint8_t const erase[] = {
	255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255,
};

const uint8_t const rockets[] = {
	231, 231, 195, 195, 195, 16, 16, 16,
	231, 195, 195, 195, 195, 0, 0, 0,
};

const uint8_t const bullet[] = {
	0, 0, 0, 0
};



int menu = 1;
int page = 0;
int random = 0;
int speed = 0;
int spawn2 = 0;
int score = 0;

int moveR = 0;

char diffdis[] = "dif    text, texttexttext"; //to display difficulty


char clear[] = " ";
char line1[] = "Welcome Aboard";
char line2[] = "2 - start";
char line3[] = "Difficulty: ";

char lost1[] = "YOU DIED";
char lost2[] = "Your Score:";
char lost3[] = "2 to continue";


int gameOver = 0;

int timeout = 0;
int diff = 1;
/* Interrupt Service Routine */
void user_isr( void )
{

  if (IFS(0) & (1<<8)) { //interrupt flag. activated when an interrupt is detected. 8th bit is the important one
    
    IFS(0) = 0;
	moveR++;
	timeout++;
	speed++;
	spawn2++;
	


	gameOver = crash(page);
    while (gameOver){

      
      
      T2CONCLR = 0x8000;
      display_string(0, lost1);  
	  display_string(3, lost3);
      display_update();
	  
      
      if (getbtns() == 0x1){
        gameOver = 0;
        menu = 1;
		speed = 0;
		spawn2 = 0;
		score = 0;
		PORTE &= ~0xff;
		
		page = 0;
		
		
        int i;
        for (i = 0; i < 512; i++){
          battlefield[i] = Reset[i];
        }
        delay(200);
        T2CONSET = 0x8000;
      }  
    }


	while(menu){
      T2CONCLR = 0x8000;

	  


	  display_string(0, line1);
      display_string(1, line2);
	  display_string(2, line3);
	  time2string(diffdis, diff);
	  display_string(3, diffdis);
      display_update();

	  switch (getbtns()) {
		case 0x2:
			if (diff > 1){
				diff -= 1;
				delay(200);
			}
			break;

		case 0x4:
			if (diff < 3){
				diff += 1;
				delay(200);
			}


	  }

      if (getbtns() == 0x01){
        display_string(0, clear);
        display_string(1, clear);
		display_string(2, clear);
		display_string(3, clear);
        menu = 0;
        T2CONSET = 0x8000;
		display_image(0, battlefield);
        
        
      }


    }


		switch (diff) {
		case 1:
			if (speed == 5){		
				rocketsmove();
				speed = 0;			
			}
			if (spawn2 == 10){			
				rocketsspawn(random);
				spawn2 = 0;			
			}
			break;
		
		case 2:
			if (speed == 2){
				
				rocketsmove();
				speed = 0;				
			}
			if (spawn2 == 4){
				rocketsspawn(random);	
				spawn2 = 0;
			}
			break;
		case 3:
			if (speed == 1){
				rocketsmove();
				speed = 0;	
			}
			if (spawn2 == 2){
				rocketsspawn(random);
				spawn2 = 0;
				
			}
	}
	
	
  
  } //end of flag

	if (timeout == 10){
		score++;
		PORTE = score;
		timeout = 0;
	}
	 
  


	
	
  
  return;


	
 
   
}

/* Lab-specific initialization goes here */
void labinit( void )
{

   //part c
  volatile int* trise = (volatile int*) 0xbf886100;
  *trise = *trise & ~0xff;
  PORTE &= ~0xff;
  //part e
  TRISDSET = 0xFE0;


 T2CON = 0x8070; // control register: prescale = 256, bit 15 is on
 PR2 = 31250; // Period register: 80 000 000/256/10 (10 is the number of timeouts per second)
 TMR2 = 0; //to start from 0

 IEC(0) |= 1 << 8; //to enable interrupts for timer 2. bit 8 of this register corresponds to timer2 enabler. | is used to preserve the rest of bits

IPC(2) |= 0x28; //set priority to 7. bits 2-4 correspond to Timer2, set them to 111.

IFS(0) = 0;//clear interrupt flag so no previous interrupt is handle when interrupts are enabled



  enable_interrupt(); //enable interrupt globally. code found in labwork.s
  return;


  
  return;
}

volatile int tickCount = 0;


//to get current pos: 128*page

int movedown(int page){
   
    int i;
    for (i =0; i < 16; i++) {
    battlefield[i + (128 * page)] = spaceship[i];
    battlefield[i + (128 * (page - 1))] = erase[i];
    }
  
  display_image(0, battlefield);
}

int moveup(int page){
   int i;
    for (i =0; i < 16; i++) {
    battlefield[i + (128 * (page))] = spaceship[i];
    battlefield[i + (128 * (page + 1))] = erase[i];
    }
  
  display_image(0, battlefield);
}

int rocketsspawn(int page){
  int i =0;
  for (i = 0; i < 16; i++){
    battlefield[96 + i + (128 * page)] = rockets[i];
  }
  display_image(0, battlefield);
}

int rocketsmove(void) {
  int pages = 0; //pages
  int i =0;
  int sections = 0;
  for (pages = 0; pages < 4; pages++){
    for (sections = 1; sections < 7; sections++){ //devided the horizantal into 8 sections (16 * 8 = 128),
   //and move everything except the section the spaceship is contained in
      for (i = 0; i < 16; i++){
        battlefield[i + 16 * sections + 128*pages] = battlefield[i + 16 * sections + 128*pages + 16];
        battlefield[i + 16 * sections + 128 * pages + 16] = erase[i];
      }
    }
  } 
  display_image(0, battlefield);
}


int crash(int page){
  int crashed = 0;
  if (battlefield[(128 * page) + 17] == 231){
    crashed = 1;
  }
  
  return crashed;
}


/* This function is called repetitively from the main program ###############################################################################################*/
void labwork( void )
{

  switch (getbtns())
  {
  case 0x4: //move up if page is not at the top
    if (page > 0){
      page--;
      moveup(page);
      delay(150);
	  
    }
    break;

  case 0x2: //move down if the page is not at the bottom
    if (page < 3) {
      page++;
      movedown(page);
      delay(150);
	  
	  
    }
    break;
  }

  
	
  if (getsw() == 0x1){
	speed = 0;
	  spawn2 = 0;
	  page = 0;
	  int i;
	  for (i = 0; i < 512; i++){
          battlefield[i] = Reset[i];
        }
	menu = 1;
	
	
  }
  
  
 random++;
 if (random > 3){
	random = 0;
 }
  



}