#ifndef __RECTANGLECustom_H_X4TRJOVHTSI7__
#define __RECTANGLECustom_H_X4TRJOVHTSI7__

#include <AbstractModel.h>

///////////////////////////////////////////////////////////
/// @brief RectangleCustom
///
class RectangleCustom final: public AbstractModel
{
public:
    RectangleCustom();
    ~RectangleCustom() override;
    RectangleCustom(const RectangleCustom &other);
    RectangleCustom(RectangleCustom &&other) noexcept;
    RectangleCustom &operator=(const RectangleCustom &other);
    RectangleCustom &operator=(RectangleCustom &&other) noexcept;

    void paintEvent() override;
private:
    // Members
};

#endif  // __RECTANGLECustom_H_X4TRJOVHTSI7__
