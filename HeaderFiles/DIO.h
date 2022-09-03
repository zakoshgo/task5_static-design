//DIO
void DIO_init(ST_DIO_config_t* configuration);
//base function to initialize the DIO module configration
void DIO_write(uint8_t port, EN_pins pin, uint8_t data);
//used to write on specific pin
void DIO_read(uint_t port, EN_pins pin, uint8_t* data);
//used to read from specific pin
void DIO_toggle(uint_t port, EN_pins pin);
//used to toggle the value on specific pin
