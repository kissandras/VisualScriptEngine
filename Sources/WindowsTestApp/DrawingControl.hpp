#ifndef DRAWINGCONTROL_HPP
#define DRAWINGCONTROL_HPP

#include "CustomControl.hpp"
#include "ResultImage.hpp"
#include "BitmapContextGdiplus.hpp"

#include <memory>

class DrawingControl : public UI::CustomControl
{
public:
	DrawingControl (const std::shared_ptr<ResultImage>& resultImage);

	virtual void	OnCreate (HWND hwnd) override;
	virtual void	OnPaint (HWND hwnd) override;
	virtual void	OnResize (HWND hwnd, int newWidth, int newHeight) override;

	void			Clear ();
	void			Invalidate ();

private:
	BitmapContextGdiplus bitmapContext;
	std::shared_ptr<ResultImage> resultImage;
};

#endif