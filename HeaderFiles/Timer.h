//Timer
void TIMER_init(ST_TIMER_config_t* configurations);
//base function to initialize the Buttons module configration
void TIMER_start(uint64_t ticks);
//used to start the timer with input the required time 
void TIMER_read(uint8_t* value);
//used to read the timer value
void TIMER_set(uint8_t value);
//used to set the Timer with a specific given value 
void TIMER_checkStatus(uint8_t * status); 
//used to check the current state of the timen withen finished or not
