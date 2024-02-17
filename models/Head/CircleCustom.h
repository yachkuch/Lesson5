#ifndef __CIRCLECustom_H_3PMJVQ2DG8D4__
#define __CIRCLECustom_H_3PMJVQ2DG8D4__

#include "AbstractModel.h"

///////////////////////////////////////////////////////////
/// @brief CircleCustom класс для рисовки фигуры круга
///
class CircleCustom final : public AbstractModel {
public:
  CircleCustom();
  ~CircleCustom() override;
  CircleCustom(const CircleCustom &other);
  CircleCustom(CircleCustom &&other);
  CircleCustom &operator=(const CircleCustom &other);
  CircleCustom &operator=(CircleCustom &&other);

 /// @brief Перегрузка рисовалки для груга
 void paintEvent() override;
private:
  // Members
};



#endif // __CIRCLECustom_H_3PMJVQ2DG8D4__
