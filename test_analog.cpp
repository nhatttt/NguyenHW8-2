#include "AnalogIn.h"

/*the following program makes use of the AnalogIn.h header file to read ADC values from a given 
ADC channel provided by the user*/

int main(){
	AnalogIn objectZero(0);
	cout<<"The ADC number associated with objectZero is:"<<objectZero.getNumber()<<endl;
	cout<<"The current reading from ADC"<<objectZero.getNumber()<<" is "<<objectZero.readADCsample()<<endl;
	
}
