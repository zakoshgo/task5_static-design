//PWM
void PWM_init(ST_PWM_config_t* configurations);
//base function to initialize the PWM module configration
void PWM_start(EN_frequency_t frequency, EN_duty_t dutyCycle);
// used to start the pwm with given frequency
void PWM_stop(void); 
// used to stop the pwm
