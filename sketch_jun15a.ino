
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
  myExcel.writeIndexed("flexdata", idx, 1,idx);    //  write idx to worksheet 'flexdata' row 'idx' column '1'
   myExcel.writeIndexed("flexdata", idx, 2,value1);    // write idx to worksheet 'flexdata' row 'idx' column '2'
    myExcel.writeIndexed("flexdata", idx, 3,value2);        // write idx to worksheet 'flexdata' row 'idx' column '3' 
    myExcel.writeIndexed("flexdata", idx, 4,value3);      // write idx to worksheet 'flexdata' row 'idx' column '4'
    myExcel.writeIndexed("flexdata", idx, 5,value4);    // write idx to worksheet 'flexdata' row 'idx' column '5'
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
