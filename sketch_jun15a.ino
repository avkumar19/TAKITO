
#include <rExcel.h>
rExcel myExcel;
int value1,value2,value3,value4;
int idx=1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myExcel.clearInput();
}

void loop() {
  // put your main code here, to run repeatedly:
  value1 = analogRead(A0);
  value2 = analogRead(A1);
  value3 = analogRead(A2);
  value4 = analogRead(A3);
  myExcel.writeIndexed("flexdata", idx, 1,idx);    // write %date% (that will be converted in current date) to worksheet 'Example' row 'idx+11' column '1' 
   myExcel.writeIndexed("flexdata", idx, 2,value1);    // write %time% (that will be converted in current time) to worksheet 'Example' row 'idx+11' column '2' 
    myExcel.writeIndexed("flexdata", idx, 3,value2);        // write idx to worksheet 'Example' row 'idx+11' column '3' 
    myExcel.writeIndexed("flexdata", idx, 4,value3);      // write the value from A0 pin to worksheet 'Example' row 'idx+11' column '4' with two digits as decimals
    myExcel.writeIndexed("flexdata", idx, 5,value4);    // write a random value to worksheet 'Example' row 'idx+11' column '5' with two digits as decimals
    idx++;
  Serial.print(value1);
  Serial.print("\t");
  Serial.print(value2);
  Serial.print("\t");
  Serial.print(value3);
  Serial.print("\t");
  Serial.print(value4);
  Serial.println("");
  delay(1000);

}
