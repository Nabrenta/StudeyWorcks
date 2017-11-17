/***********************************************************************
 * Module:  Librariar.h
 * Author:  Nabra
 * Modified: 20 окт€бр€ 2016 г. 1:45:44
 * Purpose: Declaration of the class Librariar
 ***********************************************************************/

#if !defined(__ClassDiagram_Librariar_h)
#define __ClassDiagram_Librariar_h

enum worker {readRoom, abonement};

class Librariar
{
public:
   void LoanBook(void);
   void PotBookBeck(void);
   void GiveServises(void);
   void GiveWiFi(void);

protected:
private:
   worker Groop;


};

#endif