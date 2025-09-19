#include <adc_a_COM.h>

void main()
{
   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   unsigned int16 adc_value;

   set_adc_channel(0); // Select channel 0
   delay_ms(100); // Allow time for ADC acquisition
   printf("Hola mundo");

   while(TRUE)
   {
      //TODO: User Code   
      adc_value = read_adc();
      delay_ms(30);
      printf("%ld",adc_value);
      delay_ms(250);
      
   }

}
