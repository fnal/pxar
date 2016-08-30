#ifndef PIXTESTFPIXROCTEST_H
#define PIXTESTFPIXROCTEST_H

#include "PixTest.hh"

class DLLEXPORT PixTestFPIXROCTest: public PixTest {
public:
  PixTestFPIXROCTest(PixSetup *, std::string);
  PixTestFPIXROCTest();
  virtual ~PixTestFPIXROCTest();
  virtual bool setParameter(std::string parName, std::string sval); 
  void init(); 
  void setToolTips();
  void bookHist(std::string); 

  void doTest(); 

private:
  
  
  ClassDef(PixTestFPIXROCTest, 1)

};
#endif
